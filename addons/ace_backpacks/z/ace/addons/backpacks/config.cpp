////////////////////////////////////////////////////////////////////
//DeRap: ace_backpacks\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:42:11 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_backpacks
	{
		name = "ACE3 - Backpacks";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"bux","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_backpacks
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\backpacks\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_backpacks
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\backpacks\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_backpacks
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\backpacks\XEH_postInit.sqf'";
	};
};
class Extended_InventoryOpened_EventHandlers
{
	class CAManBase
	{
		class ace_backpacks_onOpenInventory
		{
			clientInventoryOpened = "if (_this select 0 == ACE_player) then {_this call ace_backpacks_fnc_onOpenInventory};";
		};
	};
};
