////////////////////////////////////////////////////////////////////
//DeRap: ace_gunbag\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:43:48 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_gunbag
	{
		name = "ACE3 - Gunbag";
		units[] = {"ace_gunbag","ace_gunbag_Tan"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction","ace_movement"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Ir0n1E"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_gunbag
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gunbag\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_gunbag
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gunbag\XEH_preInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_gunbag_weaponTo
				{
					displayName = "$STR_ace_gunbag_ToGunbag";
					condition = "([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract== 0}";
					statement = "[_player,_target] call ace_gunbag_fnc_toGunbag";
					showDisabled = 0;
					priority = 1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponOff
				{
					displayName = "$STR_ace_gunbag_OffGunbag";
					condition = "([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract== 1}";
					statement = "[_player,_target] call ace_gunbag_fnc_offGunbag";
					showDisabled = 0;
					priority = 1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_status
				{
					displayName = "$STR_ace_gunbag_Status";
					condition = "[_target] call ace_gunbag_fnc_hasGunbag";
					statement = "[_target] call ace_gunbag_fnc_status";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_gunbag_actions
				{
					displayName = "$STR_ace_gunbag_Displayname";
					condition = "[_player] call ace_gunbag_fnc_hasGunbag";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					class ace_gunbag_weaponTo
					{
						displayName = "$STR_ace_gunbag_ToGunbag";
						condition = "[_player,_player] call ace_gunbag_fnc_canInteract== 0";
						statement = "[_player,_player] call ace_gunbag_fnc_toGunbag";
						showDisabled = 0;
						priority = 1;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponOff
					{
						displayName = "$STR_ace_gunbag_OffGunbag";
						condition = "[_player,_player] call ace_gunbag_fnc_canInteract== 1";
						statement = "[_player,_player] call ace_gunbag_fnc_offGunbag";
						showDisabled = 0;
						priority = 1;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_status
					{
						displayName = "$STR_ace_gunbag_Status";
						condition = "[_player] call ace_gunbag_fnc_hasGunbag";
						statement = "[_player] call ace_gunbag_fnc_status";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
				};
			};
		};
	};
	class Bag_Base;
	class ace_gunbag: Bag_Base
	{
		_generalMacro = "ace_gunbag";
		author = "Ir0n1E";
		scope = 2;
		displayName = "$STR_ace_gunbag_Displayname";
		model = "\z\ace\addons\gunbag\data\ace_gunbag.p3d";
		picture = "\z\ace\addons\gunbag\ui\gunbag_ca.paa";
		icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\z\ace\addons\gunbag\data\gunbag_co.paa"};
		maximumLoad = 80;
		mass = 11;
	};
	class ace_gunbag_Tan: ace_gunbag
	{
		_generalMacro = "ace_gunbag_Tan";
		author = "Ir0n1E";
		displayName = "$STR_ace_gunbag_Displayname_Tan";
		picture = "\z\ace\addons\gunbag\ui\gunbag_tan_ca.paa";
		hiddenSelectionsTextures[] = {"\z\ace\addons\gunbag\data\gunbag_tan_co.paa"};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportBackpacks
		{
			class _xx_ace_gunbag
			{
				backpack = "ace_gunbag";
				count = 3;
			};
			class _xx_ace_gunbag_Tan
			{
				backpack = "ace_gunbag_Tan";
				count = 3;
			};
		};
	};
};
