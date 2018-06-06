////////////////////////////////////////////////////////////////////
//DeRap: ace_hitreactions\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:44:32 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_hitreactions
	{
		name = "ACE3 - Hit Reactions";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_hitreactions_minDamageToTrigger
	{
		typeName = "SCALAR";
		value = 0.1;
		displayName = "$STR_ace_hitreactions_minDamageToTrigger_displayName";
		sliderSettings[] = {-1,1,0.1,1};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_hitreactions
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\hitreactions\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_hitreactions
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\hitreactions\XEH_preInit.sqf'";
	};
};
class Extended_Hit_EventHandlers
{
	class CAManBase
	{
		class ace_hitreactions
		{
			hit = "_this call ace_hitreactions_fnc_fallDown";
		};
	};
};
