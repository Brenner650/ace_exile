////////////////////////////////////////////////////////////////////
//DeRap: ace_flashlights\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:43:17 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_flashlights
	{
		name = "ACE3 - Flashlights";
		units[] = {"ACE_Flashlight_MX991Item","ACE_Flashlight_KSF1Item","ACE_Flashlight_XL50Item"};
		weapons[] = {"ACE_Flashlight_MX991","ACE_Flashlight_KSF1","ACE_Flashlight_XL50"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"voiper"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_flashlights
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\flashlights\XEH_postInitClient.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions{};
	};
	class Item_Base_F;
	class ACE_Flashlight_MX991Item: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_flashlights_MX991_DisplayName";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class ACE_Flashlight_MX991
			{
				name = "ACE_Flashlight_MX991";
				count = 1;
			};
		};
	};
	class ACE_Flashlight_KSF1Item: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_flashlights_KSF1_DisplayName";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class ACE_Flashlight_KSF1
			{
				name = "ACE_Flashlight_KSF1";
				count = 1;
			};
		};
	};
	class ACE_Flashlight_XL50Item: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_flashlights_XL50_DisplayName";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class ACE_Flashlight_XL50
			{
				name = "ACE_Flashlight_XL50";
				count = 1;
			};
		};
	};
	class NATO_Box_Base;
	class EAST_Box_Base;
	class IND_Box_Base;
	class FIA_Box_Base_F;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Flashlight_MX991
			{
				name = "ACE_Flashlight_MX991";
				count = 12;
			};
		};
	};
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Flashlight_KSF1
			{
				name = "ACE_Flashlight_KSF1";
				count = 12;
			};
		};
	};
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Flashlight_XL50
			{
				name = "ACE_Flashlight_XL50";
				count = 12;
			};
		};
	};
	class Box_FIA_Support_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_Flashlight_MX991
			{
				name = "ACE_Flashlight_MX991";
				count = 12;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Flashlight_MX991
			{
				name = "ACE_Flashlight_MX991";
				count = 12;
			};
			class _xx_ACE_Flashlight_KSF1
			{
				name = "ACE_Flashlight_KSF1";
				count = 12;
			};
			class _xx_ACE_Flashlight_XL50
			{
				name = "ACE_Flashlight_XL50";
				count = 12;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_Flashlight_MX991: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_flashlights_MX991_DisplayName";
		descriptionShort = "$STR_ace_flashlights_MX991_Description";
		model = "\z\ace\addons\flashlights\data\MX_991.p3d";
		picture = "\z\ace\addons\flashlights\UI\mx991_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "red";
				ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_red_ca.paa";
				ACE_Flashlight_Size = 1.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class ACE_Flashlight_KSF1: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_flashlights_KSF1_DisplayName";
		descriptionShort = "$STR_ace_flashlights_KSF1_Description";
		model = "\z\ace\addons\flashlights\data\KSF_1.p3d";
		picture = "\z\ace\addons\flashlights\UI\ksf1_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "red";
				ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_red_ca.paa";
				ACE_Flashlight_Size = 1.5;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class ACE_Flashlight_XL50: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_flashlights_XL50_DisplayName";
		descriptionShort = "$STR_ace_flashlights_XL50_Description";
		model = "\z\ace\addons\flashlights\data\Maglight.p3d";
		picture = "\z\ace\addons\flashlights\UI\xl50_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\flashlights\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.15;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
};
class ace_arsenal_stats
{
	class statBase;
	class ACE_flashlightColor: statBase
	{
		scope = 2;
		priority = 1;
		stats[] = {"ACE_Flashlight_Colour"};
		displayName = "$STR_ace_flashlights_statMapLightColor";
		showText = 1;
		textStatement = "getText (_this select 1 >> 'itemInfo' >> 'FlashLight' >> (_this select 0) select 0)";
		condition = "getText (_this select 1 >> 'itemInfo' >> 'FlashLight' >> (_this select 0) select 0) != ''";
		tabs[] = {{},{1,7}};
	};
};
