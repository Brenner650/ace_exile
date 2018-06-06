////////////////////////////////////////////////////////////////////
//DeRap: ace_parachute\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:22 2018 : 'file' last modified on Mon Apr 16 21:47:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_parachute
	{
		name = "ACE3 - Parachute";
		units[] = {"ACE_NonSteerableParachute"};
		weapons[] = {"ACE_Altimeter"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Garth 'LH' de Wet"};
		url = "$STR_ace_main_URL";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_parachute
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\parachute\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_parachute
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\parachute\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_parachute
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\parachute\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Altimeter
			{
				name = "ACE_Altimeter";
				count = 6;
			};
		};
		class TransportBackpacks
		{
			class _xx_ACE_NonSteerableParachute
			{
				backpack = "ACE_NonSteerableParachute";
				count = 4;
			};
		};
	};
	class Helicopter;
	class ParachuteBase: Helicopter
	{
		class ACE_SelfActions
		{
			class ACE_CutParachute
			{
				displayName = "$STR_ace_parachute_CutParachute";
				condition = "_target getVariable [""ace_parachute_canCut"",false]";
				statement = "[_player,_target] call ace_parachute_fnc_cutParachute";
				showDisabled = 0;
				priority = 2.9;
				icon = "\z\ace\addons\parachute\UI\cut_ca.paa";
			};
		};
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class ParachuteWest: ParachuteBase
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class ParachuteEast: ParachuteBase
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class ParachuteG: ParachuteBase
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class Parachute: ParachuteWest
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class NonSteerable_Parachute_F: Parachute
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class Paraglide: ParachuteWest
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class Steerable_Parachute_F: Paraglide
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class Parachute_02_base_F: ParachuteBase
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class B_Parachute_02_F: Parachute_02_base_F
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class O_Parachute_02_F: Parachute_02_base_F
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class I_Parachute_02_F: Parachute_02_base_F
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class Bag_Base;
	class B_Parachute: Bag_Base
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class B_B_Parachute_02_F: B_Parachute
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class B_O_Parachute_02_F: B_Parachute
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class B_I_Parachute_02_F: B_Parachute
	{
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_ReserveParachute";
	};
	class ACE_NonSteerableParachute: B_Parachute
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayName = "$STR_ace_parachute_NonSteerableParachute";
		ParachuteClass = "NonSteerable_Parachute_F";
		ace_hasReserveParachute = 1;
		ace_reserveParachute = "ACE_NonSteerableReserveParachute";
		maximumLoad = 0;
		mass = 100;
	};
	class ACE_ReserveParachute: ACE_NonSteerableParachute
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_parachute_ReserveParachute";
		scope = 1;
		mass = 70;
		ParachuteClass = "Steerable_Parachute_F";
		ace_reserveParachute = "";
		ace_hasReserveParachute = 0;
	};
	class ACE_NonSteerableReserveParachute: ACE_ReserveParachute
	{
		ParachuteClass = "NonSteerable_Parachute_F";
	};
	class B_Soldier_05_f;
	class B_Pilot_F: B_Soldier_05_f
	{
		backpack = "ACE_NonSteerableParachute";
	};
	class I_Soldier_04_F;
	class I_pilot_F: I_Soldier_04_F
	{
		backpack = "ACE_NonSteerableParachute";
	};
	class O_helipilot_F;
	class O_Pilot_F: O_helipilot_F
	{
		backpack = "ACE_NonSteerableParachute";
	};
};
class CfgWeapons
{
	class ItemWatch;
	class ACE_Altimeter: ItemWatch
	{
		ACE_hideItemType = "Watch";
		author = "$STR_ace_common_ACETeam";
		descriptionShort = "$STR_ace_parachute_AltimeterDescription";
		displayName = "$STR_ace_parachute_AltimeterDisplayName";
		picture = "\z\ace\addons\parachute\UI\watch_altimeter.paa";
	};
};
class RscText;
class RscPicture;
class RscTitles
{
	class ACE_Altimeter
	{
		idd = 9935;
		enableSimulation = 1;
		movingEnable = 0;
		fadeIn = 0;
		fadeOut = 1;
		duration = "10e10";
		onLoad = "uiNamespace setVariable ['ACE_Altimeter', _this select 0];";
		class controls
		{
			class AltimeterImage: RscPicture
			{
				idc = 1200;
				text = "\z\ace\addons\parachute\UI\watch_altimeter.paa";
				x = "0.118437 * safezoneW + safezoneX";
				y = "0.621 * safezoneH + safezoneY";
				w = "0.20625 * safezoneW";
				h = "0.341 * safezoneH";
			};
			class HeightText: RscText
			{
				idc = 1100;
				text = "----";
				x = "0.200937 * safezoneW + safezoneX";
				y = "0.764 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
				colorBackground[] = {0,0,0,0};
				colorText[] = {0,0,0,1};
			};
			class DecendRate: RscText
			{
				idc = 1000;
				text = "--";
				x = "0.21125 * safezoneW + safezoneX";
				y = "0.742 * safezoneH + safezoneY";
				w = "0.020625 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {0,0,0,1};
			};
			class TimeText: RscText
			{
				idc = 1001;
				text = "00:00";
				x = "0.206094 * safezoneW + safezoneX";
				y = "0.819 * safezoneH + safezoneY";
				w = "0.0309375 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {0,0,0,1};
			};
		};
	};
};
