////////////////////////////////////////////////////////////////////
//DeRap: ace_medical_blood\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:16 2018 : 'file' last modified on Mon Apr 16 21:46:36 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_medical_blood
	{
		name = "ACE3 - Medical Blood";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_main"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Glowbal","Sickboy","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_medical_blood_enabledFor
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_blood_MedicalBloodSettings_enabledFor_DisplayName";
		description = "$STR_ace_medical_blood_MedicalBloodSettings_enabledFor_Description";
		value = 2;
		typeName = "SCALAR";
		values[] = {"$STR_ace_Common_Disabled","$STR_ace_medical_blood_enabledFor_OnlyPlayers","$STR_ace_Common_Enabled"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_medical_blood
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_blood\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_medical_blood
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_blood\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_medical_blood
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_blood\XEH_postInit.sqf'";
	};
};
