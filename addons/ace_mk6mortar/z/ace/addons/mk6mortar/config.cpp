////////////////////////////////////////////////////////////////////
//DeRap: ace_mk6mortar\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:06 2018 : 'file' last modified on Mon Apr 16 21:46:46 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_mk6mortar
	{
		name = "ACE3 - Mk6 Mortar";
		units[] = {"ACE_Box_82mm_Mo_HE","ACE_Box_82mm_Mo_Smoke","ACE_Box_82mm_Mo_Illum","ACE_Box_82mm_Mo_Combo"};
		weapons[] = {"ACE_RangeTable_82mm","ace_mortar_82mm"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"PabstMirror","Grey","VKing"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {"ACE_1Rnd_82mm_Mo_HE","ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum","ACE_1Rnd_82mm_Mo_HE_Guided","ACE_1Rnd_82mm_Mo_HE_LaserGuided"};
	};
};
class ACE_Settings
{
	class ace_mk6mortar_airResistanceEnabled
	{
		category = "$STR_ace_mk6mortar_DisplayName";
		displayName = "$STR_ace_mk6mortar_airResistanceEnabled_DisplayName";
		description = "$STR_ace_mk6mortar_airResistanceEnabled_Description";
		value = 0;
		typeName = "BOOL";
		isClientSetable = 0;
	};
	class ace_mk6mortar_allowComputerRangefinder
	{
		category = "$STR_ace_mk6mortar_DisplayName";
		displayName = "$STR_ace_mk6mortar_allowComputerRangefinder_DisplayName";
		description = "$STR_ace_mk6mortar_allowComputerRangefinder_Description";
		value = 1;
		typeName = "BOOL";
		isClientSetable = 0;
	};
	class ace_mk6mortar_allowCompass
	{
		category = "$STR_ace_mk6mortar_DisplayName";
		displayName = "$STR_ace_mk6mortar_allowCompass_DisplayName";
		description = "$STR_ace_mk6mortar_allowCompass_Description";
		value = 1;
		typeName = "BOOL";
		isClientSetable = 0;
	};
	class ace_mk6mortar_useAmmoHandling
	{
		category = "$STR_ace_mk6mortar_DisplayName";
		displayName = "$STR_ace_mk6mortar_useAmmoHandling_DisplayName";
		description = "$STR_ace_mk6mortar_useAmmoHandling_Description";
		value = 0;
		typeName = "BOOL";
		isClientSetable = 0;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_mk6mortar
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\mk6mortar\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_mk6mortar
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\mk6mortar\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_mk6mortar
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\mk6mortar\XEH_postInit.sqf'";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class Mortar_01_base_F
	{
		class ace_mk6mortar
		{
			firedBIS = "_this call ace_mk6mortar_fnc_handleFired";
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_mk6mortar_rangetable
				{
					displayName = "$STR_ace_mk6mortar_rangetable_action";
					condition = "_this call ace_mk6mortar_fnc_rangeTableCanUse";
					statement = "_this call ace_mk6mortar_fnc_rangeTableOpen";
					priority = 0;
					icon = "\z\ace\addons\mk6mortar\UI\icon_rangeTable.paa";
					exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
				};
			};
		};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class ACE_Actions;
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
		class ACE_Actions: ACE_Actions
		{
			class ace_mk6mortar_unloadMagazine
			{
				displayName = "$STR_ace_mk6mortar_unloadMortar";
				distance = 2;
				condition = "_this call ace_mk6mortar_fnc_canUnloadMagazine";
				statement = "[_target,_player,5] call ace_mk6mortar_fnc_unloadMagazineTimer";
				icon = "";
				selection = "usti hlavne";
			};
			class ace_mk6mortar_LoadActions
			{
				displayName = "$STR_ace_mk6mortar_loadMortar";
				distance = 2;
				condition = "[_target,_player] call ace_mk6mortar_fnc_canLoadMagazine";
				statement = "";
				icon = "";
				selection = "usti hlavne";
				class ace_mk6mortar_loadMagazine_HE_Guided
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_HE_Guided";
					condition = "[_target,_player,'ACE_1Rnd_82mm_Mo_HE_Guided'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,8,'ACE_1Rnd_82mm_Mo_HE_Guided'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_HE_LaserGuided
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_HE_LaserGuided";
					condition = "[_target,_player,'ACE_1Rnd_82mm_Mo_HE_LaserGuided'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,8,'ACE_1Rnd_82mm_Mo_HE_LaserGuided'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_Illum
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Illum";
					condition = "[_target,_player,'ACE_1Rnd_82mm_Mo_Illum'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,5,'ACE_1Rnd_82mm_Mo_Illum'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_Smoke
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Smoke";
					condition = "[_target,_player,'ACE_1Rnd_82mm_Mo_Smoke'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'ACE_1Rnd_82mm_Mo_Smoke'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_HE
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_HE";
					condition = "[_target,_player,'ACE_1Rnd_82mm_Mo_HE'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'ACE_1Rnd_82mm_Mo_HE'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
			};
		};
		class ACE_SelfActions
		{
			class ace_mk6mortar_toggleMils
			{
				displayName = "Toggle MILS";
				condition = "true";
				statement = "_this call ace_mk6mortar_fnc_toggleMils";
				exceptions[] = {};
			};
		};
	};
	class ACE_Module;
	class ace_mk6mortar_module: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_mk6mortar_Module_DisplayName";
		function = "ace_mk6mortar_fnc_moduleInit";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\mk6mortar\UI\Icon_Module_mk6_ca.paa";
		functionPriority = 0;
		class Arguments
		{
			class airResistanceEnabled
			{
				displayName = "$STR_ace_mk6mortar_airResistanceEnabled_DisplayName";
				description = "$STR_ace_mk6mortar_airResistanceEnabled_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class allowComputerRangefinder
			{
				displayName = "$STR_ace_mk6mortar_allowComputerRangefinder_DisplayName";
				description = "$STR_ace_mk6mortar_allowComputerRangefinder_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class allowCompass
			{
				displayName = "$STR_ace_mk6mortar_allowCompass_DisplayName";
				description = "$STR_ace_mk6mortar_allowCompass_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class useAmmoHandling
			{
				displayName = "$STR_ace_mk6mortar_useAmmoHandling_DisplayName";
				description = "$STR_ace_mk6mortar_useAmmoHandling_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_mk6mortar_Module_Description";
		};
	};
	class Box_NATO_AmmoOrd_F;
	class ACE_Box_82mm_Mo_HE: Box_NATO_AmmoOrd_F
	{
		displayName = "$STR_ace_mk6mortar_HEBox_DisplayName";
		author = "$STR_ace_common_ACETeam";
		maximumLoad = 400;
		class TransportMagazines
		{
			class _xx_ACE_1Rnd_82mm_Mo_HE
			{
				magazine = "ACE_1Rnd_82mm_Mo_HE";
				count = 8;
			};
		};
		class TransportItems{};
		class TransportWeapons{};
	};
	class ACE_Box_82mm_Mo_Smoke: ACE_Box_82mm_Mo_HE
	{
		displayName = "$STR_ace_mk6mortar_SmokeBox_DisplayName";
		class TransportMagazines
		{
			class _xx_ACE_1Rnd_82mm_Mo_Smoke
			{
				magazine = "ACE_1Rnd_82mm_Mo_Smoke";
				count = 8;
			};
		};
	};
	class ACE_Box_82mm_Mo_Illum: ACE_Box_82mm_Mo_HE
	{
		displayName = "$STR_ace_mk6mortar_IllumBox_DisplayName";
		class TransportMagazines
		{
			class _xx_ACE_1Rnd_82mm_Mo_Illum
			{
				magazine = "ACE_1Rnd_82mm_Mo_Illum";
				count = 8;
			};
		};
	};
	class ACE_Box_82mm_Mo_Combo: ACE_Box_82mm_Mo_HE
	{
		displayName = "$STR_ace_mk6mortar_ComboBox_DisplayName";
		maximumLoad = 2400;
		class TransportMagazines
		{
			class _xx_ACE_1Rnd_82mm_Mo_HE
			{
				magazine = "ACE_1Rnd_82mm_Mo_HE";
				count = 32;
			};
			class _xx_ACE_1Rnd_82mm_Mo_Smoke
			{
				magazine = "ACE_1Rnd_82mm_Mo_Smoke";
				count = 8;
			};
			class _xx_ACE_1Rnd_82mm_Mo_Illum
			{
				magazine = "ACE_1Rnd_82mm_Mo_Illum";
				count = 8;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_RangeTable_82mm: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayName = "$STR_ace_mk6mortar_rangetable_name";
		descriptionShort = "$STR_ace_mk6mortar_rangetable_description";
		picture = "\z\ace\addons\mk6mortar\UI\icon_rangeTable.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.5;
		};
	};
	class CannonCore;
	class mortar_82mm: CannonCore
	{
		class Single1;
	};
	class ACE_mortar_82mm: mortar_82mm
	{
		author = "$STR_ace_common_ACETeam";
		magazines[] = {"ACE_1Rnd_82mm_Mo_HE","ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum","ACE_1Rnd_82mm_Mo_HE_Guided","ACE_1Rnd_82mm_Mo_HE_LaserGuided"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		class Single1: Single1
		{
			reloadTime = 0.5;
		};
	};
};
class cfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class ACE_1Rnd_82mm_Mo_HE: 8Rnd_82mm_Mo_shells
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_mk6mortar_magazine_HE_displayName";
		displayNameShort = "";
		descriptionShort = "$STR_ace_mk6mortar_magazine_descriptionShort";
		model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass = 50;
	};
	class 8Rnd_82mm_Mo_Smoke_white;
	class ACE_1Rnd_82mm_Mo_Smoke: 8Rnd_82mm_Mo_Smoke_white
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_mk6mortar_magazine_Smoke_displayName";
		displayNameShort = "";
		descriptionShort = "$STR_ace_mk6mortar_magazine_descriptionShort";
		model = "\z\ace\addons\mk6mortar\data\l16_ammo_smk_white.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_smk_white_ca.paa";
		mass = 50;
	};
	class 8Rnd_82mm_Mo_Flare_white;
	class ACE_1Rnd_82mm_Mo_Illum: 8Rnd_82mm_Mo_Flare_white
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_mk6mortar_magazine_Illum_displayName";
		displayNameShort = "";
		descriptionShort = "$STR_ace_mk6mortar_magazine_descriptionShort";
		model = "\z\ace\addons\mk6mortar\data\l16_ammo_illum.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_illum_ca.paa";
		mass = 50;
	};
	class 8Rnd_82mm_Mo_guided;
	class ACE_1Rnd_82mm_Mo_HE_Guided: 8Rnd_82mm_Mo_guided
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_mk6mortar_magazine_HE_Guided_displayName";
		displayNameShort = "";
		descriptionShort = "$STR_ace_mk6mortar_magazine_descriptionShort";
		model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass = 50;
	};
	class 8Rnd_82mm_Mo_LG;
	class ACE_1Rnd_82mm_Mo_HE_LaserGuided: 8Rnd_82mm_Mo_LG
	{
		count = 1;
		scope = 2;
		scopeCurator = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_mk6mortar_magazine_HE_LaserGuided_displayName";
		displayNameShort = "";
		descriptionShort = "$STR_ace_mk6mortar_magazine_descriptionShort";
		model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass = 50;
	};
};
class RscText;
class RscListbox;
class RscListNBox;
class RscPicture;
class RscControlsGroup;
class ScrollBar;
class RscActiveText;
class RscStructuredText;
class RscInGameUI
{
	class RscWeaponRangeArtillery
	{
		class CA_IGUI_elements_group: RscControlsGroup{};
	};
	class ACE_Mk6_RscWeaponRangeArtillery: RscWeaponRangeArtillery
	{
		onLoad = "uiNamespace setVariable ['ACE_Mk6_RscWeaponRangeArtillery',_this select 0]; ['ace_infoDisplayChanged',[_this select 0,'Mk6Mortar']] call CBA_fnc_localEvent;";
		controls[] = {"ACE_ChargeDisplay","ACE_MILS_GROUP","CA_IGUI_elements_group","CA_RangeElements_group"};
		class ACE_ChargeDisplay: RscStructuredText
		{
			idc = 80085;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.1};
			x = "(profilenamespace getVariable ['IGUI_GRID_WEAPON_X', ((safezoneX + safezoneW) - (12.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getVariable ['IGUI_GRID_WEAPON_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ACE_MILS_GROUP: CA_IGUI_elements_group
		{
			idc = 80170;
			class controls
			{
				class CA_Heading_MILS: RscText
				{
					idc = 80156;
					style = 2;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "015";
					x = "25.0 * (0.01875 * SafezoneH)";
					y = "6.3 * (0.025 * SafezoneH)";
					w = "3.3333 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class CA_Elev_MILS: RscText
				{
					idc = 80175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "80.5";
					x = "36.8 * (0.01875 * SafezoneH)";
					y = "29.3 * (0.025 * SafezoneH)";
					w = "5.2 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_Elev_Need_MILS: CA_Elev_MILS
				{
					idc = 80176;
					y = "30.8 * (0.025 * SafezoneH)";
				};
			};
		};
	};
};
class ACE_82mm_RangeTable_Dialog
{
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['ACE_82mm_RangeTable_Dialog', _this select 0];";
	objects[] = {};
	class ControlsBackground
	{
		class TableBackground: RscPicture
		{
			idc = -1;
			text = "\z\ace\addons\mk6mortar\UI\RangeTable_background.paa";
			x = "18 *(safeZoneH / 40) +       (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "1 * ((safeZoneH / 1.2) / 25) +   (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "16.2634559672906 * (safeZoneH / 40)";
			h = "23 * ((safeZoneH / 1.2) / 25)";
			colorBackground[] = {1,1,1,1};
		};
		class ChargeBackground: RscText
		{
			idc = -1;
			x = "14 *(safeZoneH / 40) +       (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "1 * ((safeZoneH / 1.2) / 25) +   (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "4 * (safeZoneH / 40)";
			h = "5 * ((safeZoneH / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
	};
	class controls
	{
		class TheTable: RscListNBox
		{
			idc = 20001;
			x = "18 *(safeZoneH / 40) +       (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "3.76 * ((safeZoneH / 1.2) / 25) +   (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "16.2634559672906 * (safeZoneH / 40)";
			h = "20.24 * ((safeZoneH / 1.2) / 25)";
			columns[] = {"(10/867)","(86/867)","(171/867)","(238/867)","(320/867)","(405/867)","(485/867)","(546/867)","(607/867)","(668/867)","(729/867)","(790/867)"};
			rowHeight = "0.015 * safeZoneH";
			sizeEx = "0.014 * safeZoneH";
			font = "EtelkaMonospacePro";
			drawSideArrows = 1;
			idcLeft = 14124;
			idcRight = 412343243;
			colorText[] = {0,0,0,1};
			shadow = "0";
			colorSelectBackground[] = {0,0,0,0.025};
			colorSelectBackground2[] = {0,0,0,0.025};
			colorScrollbar[] = {0.95,0,0.95,1};
			class ListScrollBar: ScrollBar
			{
				color[] = {0,0,0,0.6};
			};
		};
		class ChargeListBox: RscListbox
		{
			idc = 1501;
			style = "ST_RIGHT";
			x = "14 *(safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "1 * ((safeZoneH / 1.2) / 25) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "4 * (safeZoneH / 40)";
			h = "5 * ((safeZoneH / 1.2) / 25)";
			onLBSelChanged = "_this call ace_mk6mortar_fnc_rangeTablePageChange";
		};
		class CloseBackground: RscText
		{
			idc = -1;
			x = "33.7634559672906 *(safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "1 * ((safeZoneH / 1.2) / 25) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "0.5 * (safeZoneH / 40)";
			h = "0.5 * ((safeZoneH / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class CloseActiveText: RscActiveText
		{
			idc = -1;
			style = 48;
			color[] = {1,1,1,0.7};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "33.7634559672906 *(safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "1 * ((safeZoneH / 1.2) / 25) +   (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "0.5 * (safeZoneH / 40)";
			h = "0.5 * ((safeZoneH / 1.2) / 25)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
			onButtonClick = "closeDialog 0";
		};
	};
};
