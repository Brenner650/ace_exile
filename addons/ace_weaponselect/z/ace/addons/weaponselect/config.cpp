////////////////////////////////////////////////////////////////////
//DeRap: ace_weaponselect\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:49:05 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_weaponselect
	{
		name = "ACE3 - Weapon Select";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_weaponselect
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\weaponselect\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_weaponselect
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\weaponselect\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_weaponselect
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\weaponselect\XEH_postInit.sqf'";
	};
};
class ACE_Settings
{
	class ace_weaponselect_displayText
	{
		movedToSQF = 1;
	};
};
