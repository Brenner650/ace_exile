////////////////////////////////////////////////////////////////////
//DeRap: ace_medical_ai\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:17 2018 : 'file' last modified on Mon Apr 16 21:46:35 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_medical_ai
	{
		name = "ACE3 - Medical AI";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_medical"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"BaerMitUmlaut"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_medical_ai_enabledFor
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_ai_enabledFor_DisplayName";
		description = "$STR_ace_medical_ai_enabledFor_Description";
		value = 2;
		typeName = "SCALAR";
		values[] = {"$STR_ace_Common_Disabled","$STR_ace_medical_ai_enabledFor_OnlyServerAndHC","$STR_ace_Common_Enabled"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_medical_ai
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_ai\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_medical_ai
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_ai\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_medical_ai
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_ai\XEH_postInit.sqf'";
	};
};
class ace_medical_ai_stateMachine
{
	list = "allUnits select {local _x}";
	skipNull = 1;
	class Initial
	{
		class Injured
		{
			targetState = "Injured";
			condition = "call ace_medical_ai_fnc_isInjured";
		};
		class HealUnit
		{
			targetState = "HealUnit";
			condition = "(call ace_medical_ai_fnc_isSafe) && {call ace_medical_ai_fnc_wasRequested}";
		};
	};
	class Injured
	{
		class InSafety
		{
			targetState = "Safe";
			condition = "call ace_medical_ai_fnc_isSafe";
		};
	};
	class Safe
	{
		class RequestMedic
		{
			targetState = "HealSelf";
			condition = "call ace_medical_ai_fnc_canRequestMedic";
			onTransition = "call ace_medical_ai_fnc_requestMedic";
		};
		class HealSelf
		{
			targetState = "HealSelf";
			condition = "true";
		};
	};
	class HealSelf
	{
		onState = "call ace_medical_ai_fnc_healSelf";
		onStateLeaving = "_this setVariable [""ace_medical_ai_treatmentOverAt"",nil]";
		class Initial
		{
			targetState = "Initial";
			condition = "!(call ace_medical_ai_fnc_isInjured) && {_this getVariable [""ace_medical_ai_treatmentOverAt"", CBA_missionTime] <= CBA_missionTime}";
		};
		class Injured
		{
			targetState = "Injured";
			condition = "!(call ace_medical_ai_fnc_isSafe) && {_this getVariable [""ace_medical_ai_treatmentOverAt"", CBA_missionTime] <= CBA_missionTime}";
		};
	};
	class HealUnit
	{
		onState = "call ace_medical_ai_fnc_healUnit";
		onStateLeaving = "_this setVariable [""ace_medical_ai_treatmentOverAt"",nil]";
		class Initial
		{
			targetState = "Initial";
			condition = "!((call ace_medical_ai_fnc_wasRequested) && {call ace_medical_ai_fnc_isSafe}) && {_this getVariable [""ace_medical_ai_treatmentOverAt"", CBA_missionTime] <= CBA_missionTime}";
		};
		class Injured
		{
			targetState = "Injured";
			condition = "(call ace_medical_ai_fnc_isInjured) && {_this getVariable [""ace_medical_ai_treatmentOverAt"", CBA_missionTime] <= CBA_missionTime}";
		};
	};
};
