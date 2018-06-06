////////////////////////////////////////////////////////////////////
//DeRap: ace_laserpointer\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:45:39 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_laserpointer
	{
		name = "ACE3 - Laser Pointer";
		units[] = {};
		weapons[] = {"ACE_acc_pointer_red","ACE_acc_pointer_green","ACE_acc_pointer_green_IR"};
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
	class ace_laserpointer_enabled
	{
		category = "$STR_ace_common_ACEKeybindCategoryWeapons";
		displayName = "$STR_ace_laserpointer_DisplayName";
		typeName = "BOOL";
		value = 1;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_laserpointer
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\laserpointer\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_laserpointer
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\laserpointer\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_laserpointer
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\laserpointer\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_acc_pointer_green
			{
				name = "ACE_acc_pointer_green";
				count = 4;
			};
		};
	};
	class EAST_Box_Base;
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_acc_pointer_green
			{
				name = "ACE_acc_pointer_green";
				count = 4;
			};
		};
	};
	class IND_Box_Base;
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_acc_pointer_green
			{
				name = "ACE_acc_pointer_green";
				count = 4;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Support_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_acc_pointer_green
			{
				name = "ACE_acc_pointer_green";
				count = 4;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_acc_pointer_green
			{
				name = "ACE_acc_pointer_green";
				count = 4;
			};
		};
	};
};
class SlotInfo;
class PointerSlot: SlotInfo
{
	compatibleItems[] += {"ACE_acc_pointer_red","ACE_acc_pointer_green_IR","ACE_acc_pointer_green"};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_pointer_IR: ItemCore
	{
		MRT_SwitchItemNextClass = "ACE_acc_pointer_red";
		MRT_SwitchItemPrevClass = "ACE_acc_pointer_red";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		displayName = "$STR_ace_laserpointer_red";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
	};
	class ACE_acc_pointer_red: ItemCore
	{
		MRT_SwitchItemNextClass = "acc_pointer_IR";
		MRT_SwitchItemPrevClass = "acc_pointer_IR";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		ACE_laserpointer = 1;
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_acc_pointer_red";
		scope = 1;
		displayName = "$STR_ace_laserpointer_red";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\A3\weapons_f\acc\accv_pointer_F";
		descriptionShort = "$STR_ace_laserpointer_Description";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class Pointer{};
			class FlashLight
			{
				color[] = {0,0,0};
				ambient[] = {0,0,0};
				intensity = 0;
				size = 0;
				innerAngle = 0;
				outerAngle = 0;
				coneFadeCoef = 5;
				position = "flash dir";
				direction = "flash";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ACE_acc_pointer_green_IR: acc_pointer_IR
	{
		MRT_SwitchItemNextClass = "ACE_acc_pointer_green";
		MRT_SwitchItemPrevClass = "ACE_acc_pointer_green";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_acc_pointer_green";
		scope = 1;
		displayName = "$STR_ace_laserpointer_green";
	};
	class ACE_acc_pointer_green: ACE_acc_pointer_red
	{
		MRT_SwitchItemNextClass = "ACE_acc_pointer_green_IR";
		MRT_SwitchItemPrevClass = "ACE_acc_pointer_green_IR";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		ACE_laserpointer = 2;
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_acc_pointer_green";
		scope = 2;
		displayName = "$STR_ace_laserpointer_green";
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		ACE_acc_pointer_red = 1;
		ACE_acc_pointer_green = 1;
		ACE_acc_pointer_green_IR = 1;
	};
};
