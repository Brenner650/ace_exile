////////////////////////////////////////////////////////////////////
//DeRap: ace_logistics_uavbattery\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:45:39 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_logistics_uavbattery
	{
		name = "ACE3 - Logistics UAV Battery";
		units[] = {};
		weapons[] = {"ACE_UAVBattery"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"marc_book"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_logistics_uavbattery
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\logistics_uavbattery\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_logistics_uavbattery
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\logistics_uavbattery\XEH_preInit.sqf'";
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions{};
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
	};
	class UAV_01_base_F: Helicopter_Base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				class ace_logistics_uavbattery_RefuelUAV
				{
					displayName = "$STR_ace_logistics_uavbattery_Recharge";
					condition = "[_player,_target] call ace_logistics_uavbattery_fnc_canRefuelUAV";
					statement = "[_player,_target] call ace_logistics_uavbattery_fnc_refuelUAV";
					icon = "\z\ace\addons\logistics_uavbattery\ui\UAV_battery_ca.paa";
				};
			};
		};
	};
	class UAV_06_base_F: Helicopter_Base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				class ace_logistics_uavbattery_RefuelUAV
				{
					displayName = "$STR_ace_logistics_uavbattery_Recharge";
					condition = "[_player,_target] call ace_logistics_uavbattery_fnc_canRefuelUAV";
					statement = "[_player,_target] call ace_logistics_uavbattery_fnc_refuelUAV";
					icon = "\z\ace\addons\logistics_uavbattery\ui\UAV_battery_ca.paa";
				};
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_UAVBattery
			{
				name = "ACE_UAVBattery";
				count = 6;
			};
		};
	};
};
class CfgWeapons
{
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class ACE_UAVBattery: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_logistics_uavbattery_Battery_Name";
		descriptionShort = "$STR_ace_logistics_uavbattery_Battery_Description";
		model = "\z\ace\addons\logistics_uavbattery\data\ace_battery.p3d";
		picture = "\z\ace\addons\logistics_uavbattery\ui\UAV_battery_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
	};
};
class CfgSounds
{
	class ACE_replaceUAVBattery
	{
		name = "ACE_replaceUAVBattery";
		sound[] = {"\z\ace\addons\logistics_uavbattery\sounds\exchange_battery.ogg",1,1};
		titles[] = {};
	};
};
