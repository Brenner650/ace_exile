////////////////////////////////////////////////////////////////////
//DeRap: ace_reloadlaunchers\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_reloadlaunchers
	{
		name = "ACE3 - Reload Launchers";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_reloadlaunchers
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\reloadlaunchers\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_reloadlaunchers
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\reloadlaunchers\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_reloadlaunchers
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\reloadlaunchers\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ace_reloadlaunchers_ReloadLauncher
			{
				displayName = "$STR_ace_reloadlaunchers_LoadLauncher";
				selection = "launcher";
				distance = 4;
				condition = "";
				exceptions[] = {"isNotInside","isNotSwimming"};
				insertChildren = "_this call ace_reloadlaunchers_fnc_addMissileReloadActions";
			};
		};
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class launch_Titan_base: Launcher_Base_F
	{
		ace_reloadlaunchers_enabled = 1;
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		ace_reloadlaunchers_enabled = 1;
	};
};
