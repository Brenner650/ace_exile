////////////////////////////////////////////////////////////////////
//DeRap: ace_chemlights\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:53 2018 : 'file' last modified on Mon Apr 16 21:42:35 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_chemlights
	{
		units[] = {"ACE_Box_Chemlights","ACE_Item_Chemlight_Shield","ACE_Item_Chemlight_Shield_Green","ACE_Item_Chemlight_Shield_Red","ACE_Item_Chemlight_Shield_Blue","ACE_Item_Chemlight_Shield_Yellow","ACE_Item_Chemlight_Shield_Orange","ACE_Item_Chemlight_Shield_White"};
		weapons[] = {"ACE_Chemlight_Shield","ACE_Chemlight_Shield_Green","ACE_Chemlight_Shield_Red","ACE_Chemlight_Shield_Blue","ACE_Chemlight_Shield_Yellow","ACE_Chemlight_Shield_Orange","ACE_Chemlight_Shield_White"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"voiper"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"Chemlight_Blue","Chemlight_Red","Chemlight_Green","Chemlight_Yellow","ACE_G_Chemlight_Orange","ACE_G_Chemlight_Orange_Infinite","ACE_G_Chemlight_White","ACE_G_Chemlight_White_Infinite","ACE_G_Chemlight_HiRed","ACE_G_Chemlight_HiRed_Infinite","ACE_G_Chemlight_HiYellow","ACE_G_Chemlight_HiYellow_Infinite","ACE_G_Chemlight_HiOrange","ACE_G_Chemlight_HiOrange_Infinite","ACE_G_Chemlight_HiWhite","ACE_G_Chemlight_HiWhite_Infinite","ACE_G_Chemlight_IR"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_chemlights
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\chemlights\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_chemlights
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\chemlights\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_chemlights
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\chemlights\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class ACE_Chemlight_IR_Dummy
	{
		class ace_chemlights
		{
			serverInit = "_this call ace_chemlights_fnc_initIR";
		};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ACE_Chemlights
				{
					displayName = "$STR_ace_chemlights_Action_Chemlights";
					icon = "\a3\ui_f\data\gui\cfg\Hints\chemlights_ca.paa";
					condition = "count ([ACE_player] call ace_chemlights_fnc_getShieldComponents) > 0";
					statement = "true";
					exceptions[] = {"isNotDragging","isNotSwimming","notOnMap","isNotInside","isNotSitting"};
					insertChildren = "_this call ace_chemlights_fnc_compileChemlightMenu";
					showDisabled = 0;
					priority = 99;
				};
			};
		};
	};
	class Thing;
	class ThingX;
	class ACE_Chemlight_IR_Marker: Thing
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "ACE Chemlight IR Marker";
		mapSize = 0.2;
		scope = 1;
		type = 1;
		vehicleClass = "";
		simulation = "nvmarker";
		nvTarget = 1;
		brightness = 0.2;
		class NVGMarker
		{
			diffuse[] = {0.1,0.1,0.1};
			ambient[] = {0.01,0.01,0.01};
			brightness = 0.015;
			name = "pozicni blik";
			drawLight = 0;
			drawLightSize = 0;
			drawLightCenterSize = 0;
			activeLight = 0;
			blinking = 0;
			dayLight = 0;
			onlyInNvg = 1;
			useFlare = 0;
		};
	};
	class ACE_Chemlight_IR_Dummy: ThingX
	{
		ACE_Attachable = "ACE_G_Chemlight_IR";
		author = "$STR_ace_common_ACETeam";
		displayName = "ACE Chemlight IR Phys Dummy";
		mass = 0.75;
		model = "\A3\Weapons_f\chemlight\chemlight_blue";
		scope = 1;
		vehicleClass = "";
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
	};
	class Item_Base_F;
	class ACE_Item_Chemlight_Shield: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_chemlights_Shield_Empty_DisplayName";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 1;
			};
		};
	};
	class ACE_Item_Chemlight_Shield_Green: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_chemlights_Shield_Green_DisplayName";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class ACE_Chemlight_Shield_Green
			{
				name = "ACE_Chemlight_Shield_Green";
				count = 1;
			};
		};
	};
	class ACE_Item_Chemlight_Shield_Red: ACE_Item_Chemlight_Shield_Green
	{
		displayName = "$STR_ace_chemlights_Shield_Red_DisplayName";
		class TransportItems
		{
			class ACE_Chemlight_Shield_Red
			{
				name = "ACE_Chemlight_Shield_Red";
				count = 1;
			};
		};
	};
	class ACE_Item_Chemlight_Shield_Blue: ACE_Item_Chemlight_Shield_Green
	{
		displayName = "$STR_ace_chemlights_Shield_Blue_DisplayName";
		class TransportItems
		{
			class ACE_Chemlight_Shield_Blue
			{
				name = "ACE_Chemlight_Shield_Blue";
				count = 1;
			};
		};
	};
	class ACE_Item_Chemlight_Shield_Yellow: ACE_Item_Chemlight_Shield_Green
	{
		displayName = "$STR_ace_chemlights_Shield_Yellow_DisplayName";
		class TransportItems
		{
			class ACE_Chemlight_Shield_Yellow
			{
				name = "ACE_Chemlight_Shield_Yellow";
				count = 1;
			};
		};
	};
	class ACE_Item_Chemlight_Shield_Orange: ACE_Item_Chemlight_Shield_Green
	{
		displayName = "$STR_ace_chemlights_Shield_Orange_DisplayName";
		class TransportItems
		{
			class ACE_Chemlight_Shield_Orange
			{
				name = "ACE_Chemlight_Shield_Orange";
				count = 1;
			};
		};
	};
	class ACE_Item_Chemlight_Shield_White: ACE_Item_Chemlight_Shield_Green
	{
		displayName = "$STR_ace_chemlights_Shield_White_DisplayName";
		class TransportItems
		{
			class ACE_Chemlight_Shield_White
			{
				name = "ACE_Chemlight_Shield_White";
				count = 1;
			};
		};
	};
	class NATO_Box_Base;
	class EAST_Box_Base;
	class IND_Box_Base;
	class FIA_Box_Base_F;
	class ReammoBox_F;
	class Box_NATO_Grenades_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class Box_East_Grenades_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class O_supplyCrate_F: B_supplyCrate_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class Box_IND_Grenades_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class Box_FIA_Ammo_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class IG_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 12;
			};
		};
		class TransportMagazines
		{
			class _xx_ACE_Chemlight_Orange
			{
				magazine = "ACE_Chemlight_Orange";
				count = 20;
			};
			class _xx_ACE_Chemlight_White
			{
				magazine = "ACE_Chemlight_White";
				count = 20;
			};
			class _xx_ACE_Chemlight_HiRed
			{
				magazine = "ACE_Chemlight_HiRed";
				count = 10;
			};
			class _xx_ACE_Chemlight_HiYellow
			{
				magazine = "ACE_Chemlight_HiYellow";
				count = 10;
			};
			class _xx_ACE_Chemlight_HiOrange
			{
				magazine = "ACE_Chemlight_HiOrange";
				count = 10;
			};
			class _xx_ACE_Chemlight_HiWhite
			{
				magazine = "ACE_Chemlight_HiWhite";
				count = 10;
			};
			class _xx_ACE_Chemlight_IR
			{
				magazine = "ACE_Chemlight_IR";
				count = 20;
			};
		};
	};
	class ACE_Box_Chemlights: NATO_Box_Base
	{
		scope = 2;
		accuracy = 1;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_chemlights_Box_DisplayName";
		transportMaxWeapons = 9002;
		transportMaxMagazines = 9002;
		transportMaxItems = 9002;
		maximumload = 9002;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportItems
		{
			class _xx_ACE_Chemlight_Shield
			{
				name = "ACE_Chemlight_Shield";
				count = 20;
			};
		};
		class TransportMagazines
		{
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 20;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 20;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 20;
			};
			class _xx_Chemlight_yellow
			{
				magazine = "Chemlight_yellow";
				count = 20;
			};
			class _xx_ACE_Chemlight_Orange
			{
				magazine = "ACE_Chemlight_Orange";
				count = 20;
			};
			class _xx_ACE_Chemlight_White
			{
				magazine = "ACE_Chemlight_White";
				count = 20;
			};
			class _xx_ACE_Chemlight_HiRed
			{
				magazine = "ACE_Chemlight_HiRed";
				count = 10;
			};
			class _xx_ACE_Chemlight_HiYellow
			{
				magazine = "ACE_Chemlight_HiYellow";
				count = 10;
			};
			class _xx_ACE_Chemlight_HiOrange
			{
				magazine = "ACE_Chemlight_HiOrange";
				count = 10;
			};
			class _xx_ACE_Chemlight_HiWhite
			{
				magazine = "ACE_Chemlight_HiWhite";
				count = 10;
			};
			class _xx_ACE_Chemlight_IR
			{
				magazine = "ACE_Chemlight_IR";
				count = 20;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class AmmoOrd_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Grenades_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Support_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"ACE_Chemlight_OrangeMuzzle","ACE_Chemlight_WhiteMuzzle","ACE_Chemlight_HiRedMuzzle","ACE_Chemlight_HiYellowMuzzle","ACE_Chemlight_HiOrangeMuzzle","ACE_Chemlight_HiWhiteMuzzle","ACE_Chemlight_IRMuzzle"};
		class ThrowMuzzle;
		class ACE_Chemlight_OrangeMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_Orange"};
		};
		class ACE_Chemlight_WhiteMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_White"};
		};
		class ACE_Chemlight_HiRedMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_HiRed"};
		};
		class ACE_Chemlight_HiYellowMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_HiYellow"};
		};
		class ACE_Chemlight_HiOrangeMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_HiOrange"};
		};
		class ACE_Chemlight_HiWhiteMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_HiWhite"};
		};
		class ACE_Chemlight_IRMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_Chemlight_IR"};
		};
	};
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_Chemlight_Shield: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_chemlights_Shield_Empty_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_Empty_DescriptionShort";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_x_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_Chemlight_Shield_Green: ACE_ItemCore
	{
		ACE_Chemlight = "Chemlight_green";
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_chemlights_Shield_Green_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_Green_DescriptionShort";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_green_x_ca.paa";
		ace_arsenal_uniqueBase = "ACE_Chemlight_Shield";
		scope = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "green";
				ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_green_ca.paa";
				ACE_Flashlight_Size = 0.8;
			};
		};
	};
	class ACE_Chemlight_Shield_Red: ACE_Chemlight_Shield_Green
	{
		ACE_Chemlight = "Chemlight_red";
		displayName = "$STR_ace_chemlights_Shield_Red_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_Red_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_red_x_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "red";
				ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_red_ca.paa";
				ACE_Flashlight_Size = 0.8;
			};
		};
	};
	class ACE_Chemlight_Shield_Blue: ACE_Chemlight_Shield_Green
	{
		ACE_Chemlight = "Chemlight_blue";
		displayName = "$STR_ace_chemlights_Shield_Blue_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_Blue_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_blue_x_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "blue";
				ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_blue_ca.paa";
				ACE_Flashlight_Size = 0.8;
			};
		};
	};
	class ACE_Chemlight_Shield_Yellow: ACE_Chemlight_Shield_Green
	{
		ACE_Chemlight = "Chemlight_yellow";
		displayName = "$STR_ace_chemlights_Shield_Yellow_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_Yellow_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_yellow_x_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "yellow";
				ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_yellow_ca.paa";
				ACE_Flashlight_Size = 0.8;
			};
		};
	};
	class ACE_Chemlight_Shield_Orange: ACE_Chemlight_Shield_Green
	{
		ACE_Chemlight = "ACE_Chemlight_Orange";
		displayName = "$STR_ace_chemlights_Shield_Orange_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_Orange_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_orange_x_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "orange";
				ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_orange_ca.paa";
				ACE_Flashlight_Size = 0.8;
			};
		};
	};
	class ACE_Chemlight_Shield_White: ACE_Chemlight_Shield_Green
	{
		ACE_Chemlight = "ACE_Chemlight_White";
		displayName = "$STR_ace_chemlights_Shield_White_DisplayName";
		descriptionShort = "$STR_ace_chemlights_Shield_White_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_shield_white_x_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\chemlights\UI\chemlight_shield_beam_white_ca.paa";
				ACE_Flashlight_Size = 0.8;
			};
		};
	};
};
class CfgMagazines
{
	class SmokeShell;
	class Chemlight_Green: Smokeshell
	{
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Green";
	};
	class Chemlight_Blue: Chemlight_Green
	{
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Blue";
	};
	class Chemlight_Red: Chemlight_Green
	{
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Red";
	};
	class Chemlight_Yellow: Chemlight_Green
	{
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Yellow";
	};
	class ACE_Chemlight_Orange: Chemlight_Green
	{
		ACE_Attachable = "ACE_G_Chemlight_Orange";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Orange";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_Orange";
		displayName = "$STR_ace_chemlights_Orange_DisplayName";
		displayNameShort = "$STR_ace_chemlights_Orange_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_Orange_DescriptionShort";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_orange_x_ca.paa";
	};
	class ACE_Chemlight_White: Chemlight_Green
	{
		ACE_Attachable = "ACE_G_Chemlight_White";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_White";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_White";
		displayName = "$STR_ace_chemlights_White_DisplayName";
		displayNameShort = "$STR_ace_chemlights_White_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_White_DescriptionShort";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_white_x_ca.paa";
	};
	class ACE_Chemlight_HiRed: Chemlight_Red
	{
		ACE_Attachable = "ACE_G_Chemlight_HiRed";
		ACE_Chemlight_Shield = "";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_HiRed";
		displayName = "$STR_ace_chemlights_HiRed_DisplayName";
		displayNameShort = "$STR_ace_chemlights_HiRed_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiRed_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hired_x_ca.paa";
	};
	class ACE_Chemlight_HiYellow: Chemlight_Yellow
	{
		ACE_Attachable = "ACE_G_Chemlight_HiYellow";
		ACE_Chemlight_Shield = "";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_HiYellow";
		displayName = "$STR_ace_chemlights_HiYellow_DisplayName";
		displayNameShort = "$STR_ace_chemlights_HiYellow_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiYellow_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiyellow_x_ca.paa";
	};
	class ACE_Chemlight_HiOrange: ACE_Chemlight_Orange
	{
		ACE_Attachable = "ACE_G_Chemlight_HiOrange";
		ACE_Chemlight_Shield = "";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_HiOrange";
		displayName = "$STR_ace_chemlights_HiOrange_DisplayName";
		displayNameShort = "$STR_ace_chemlights_HiOrange_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiOrange_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiorange_x_ca.paa";
	};
	class ACE_Chemlight_HiWhite: ACE_Chemlight_White
	{
		ACE_Attachable = "ACE_G_Chemlight_HiWhite";
		ACE_Chemlight_Shield = "";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_HiWhite";
		displayName = "$STR_ace_chemlights_HiWhite_DisplayName";
		displayNameShort = "$STR_ace_chemlights_HiWhite_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_HiWhite_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_hiwhite_x_ca.paa";
	};
	class ACE_Chemlight_IR: Chemlight_Green
	{
		ACE_Attachable = "ACE_Chemlight_IR_Dummy";
		ACE_Chemlight_Shield = "";
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_G_Chemlight_IR";
		displayName = "$STR_ace_chemlights_IR_DisplayName";
		displayNameShort = "$STR_ace_chemlights_IR_DisplayNameShort";
		descriptionShort = "$STR_ace_chemlights_IR_DescriptionShort";
		picture = "\z\ace\addons\chemlights\UI\ace_chemlight_ir_x_ca.paa";
	};
};
class CfgAmmo
{
	class Chemlight_base;
	class Chemlight_Blue: Chemlight_base
	{
		timeToLive = 1500;
	};
	class Chemlight_Red: Chemlight_base
	{
		timeToLive = 1800;
	};
	class Chemlight_Green: Chemlight_base
	{
		timeToLive = 1800;
	};
	class Chemlight_Yellow: Chemlight_base
	{
		timeToLive = 1800;
	};
	class ACE_G_Chemlight_Orange: Chemlight_base
	{
		timeToLive = 1800;
		effectsSmoke = "ACE_ChemlightEffect_Orange";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
	};
	class ACE_G_Chemlight_Orange_Infinite: ACE_G_Chemlight_Orange
	{
		timeToLive = "1e10";
	};
	class ACE_G_Chemlight_White: Chemlight_base
	{
		timeToLive = 1500;
		effectsSmoke = "ACE_ChemlightEffect_White";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
	};
	class ACE_G_Chemlight_White_Infinite: ACE_G_Chemlight_White
	{
		timeToLive = "1e10";
	};
	class ACE_G_Chemlight_HiRed: Chemlight_Red
	{
		effectsSmoke = "ACE_ChemlightEffect_HiRed";
		timeToLive = 300;
	};
	class ACE_G_Chemlight_HiRed_Infinite: ACE_G_Chemlight_HiRed
	{
		timeToLive = "1e10";
	};
	class ACE_G_Chemlight_HiYellow: Chemlight_Yellow
	{
		effectsSmoke = "ACE_ChemlightEffect_HiYellow";
		timeToLive = 300;
	};
	class ACE_G_Chemlight_HiYellow_Infinite: ACE_G_Chemlight_HiYellow
	{
		timeToLive = "1e10";
	};
	class ACE_G_Chemlight_HiOrange: ACE_G_Chemlight_Orange
	{
		effectsSmoke = "ACE_ChemlightEffect_HiOrange";
		timeToLive = 300;
	};
	class ACE_G_Chemlight_HiOrange_Infinite: ACE_G_Chemlight_HiOrange
	{
		timeToLive = "1e10";
	};
	class ACE_G_Chemlight_HiWhite: ACE_G_Chemlight_White
	{
		effectsSmoke = "ACE_ChemlightEffect_HiWhite";
		timeToLive = 300;
	};
	class ACE_G_Chemlight_HiWhite_Infinite: ACE_G_Chemlight_HiWhite
	{
		timeToLive = "1e10";
	};
	class ACE_G_Chemlight_IR: Chemlight_base
	{
		ACE_Chemlight_IR = "ACE_Chemlight_IR_Dummy";
		effectsSmoke = "ACE_ChemlightEffect_IR";
		timeToLive = 1500;
		model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
	};
};
class CfgLights
{
	class ChemLight_Green
	{
		ambient[] = {0,0,0,0};
		brightness = 1;
		color[] = {0.1,1,0.1,1};
		diffuse[] = {0.1,1,0.1};
		drawLight = 0;
		intensity = 4000;
		position[] = {0,0,0};
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 200;
			hardLimitStart = 1.75;
			hardLimitEnd = 3;
		};
	};
	class ChemLight_Blue: ChemLight_Green
	{
		color[] = {0,0.6,1,1};
		diffuse[] = {0,0.6,1};
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 200;
			hardLimitStart = 1.75;
			hardLimitEnd = 3;
		};
	};
	class ChemLight_Red: ChemLight_Green
	{
		color[] = {1,0.1,0.1,1};
		diffuse[] = {1,0.1,0.1};
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 200;
			hardLimitStart = 1.75;
			hardLimitEnd = 3;
		};
	};
	class ChemLight_Yellow: ChemLight_Green
	{
		color[] = {1,1,0.1,1};
		diffuse[] = {1,1,0.1};
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 200;
			hardLimitStart = 1.75;
			hardLimitEnd = 3;
		};
	};
	class ACE_ChemlightLight_Orange: ChemLight_Green
	{
		color[] = {1,0.64,0,1};
		diffuse[] = {1,0.4,0};
	};
	class ACE_ChemlightLight_White: ChemLight_Green
	{
		color[] = {1,1,1,1};
		diffuse[] = {1,1,1};
	};
	class ACE_ChemlightLight_HiRed: ChemLight_Red
	{
		intensity = 12000;
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 20;
			hardLimitStart = 3;
			hardLimitEnd = 4;
		};
	};
	class ACE_ChemlightLight_HiYellow: ChemLight_Yellow
	{
		intensity = 12000;
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 20;
			hardLimitStart = 3;
			hardLimitEnd = 4;
		};
	};
	class ACE_ChemlightLight_HiOrange: ACE_ChemlightLight_Orange
	{
		intensity = 12000;
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 20;
			hardLimitStart = 3;
			hardLimitEnd = 4;
		};
	};
	class ACE_ChemlightLight_HiWhite: ACE_ChemlightLight_White
	{
		intensity = 12000;
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 20;
			hardLimitStart = 3;
			hardLimitEnd = 4;
		};
	};
	class ACE_ChemlightLight_IR: ChemLight_Green
	{
		intensity = 0;
	};
};
class ACE_ChemlightEffect_Orange
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_Orange";
	};
};
class ACE_ChemlightEffect_White
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_White";
	};
};
class ACE_ChemlightEffect_HiRed
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_HiRed";
	};
};
class ACE_ChemlightEffect_HiYellow
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_HiYellow";
	};
};
class ACE_ChemlightEffect_HiOrange
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_HiOrange";
	};
};
class ACE_ChemlightEffect_HiWhite
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_HiWhite";
	};
};
class ACE_ChemlightEffect_IR
{
	class Light1
	{
		simulation = "light";
		type = "ACE_ChemlightLight_IR";
	};
};
