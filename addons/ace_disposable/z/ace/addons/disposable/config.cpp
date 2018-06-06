////////////////////////////////////////////////////////////////////
//DeRap: ace_disposable\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:42:49 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_disposable
	{
		name = "ACE3 - Disposable";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_disposable
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\disposable\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_disposable
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\disposable\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_disposable
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\disposable\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayInventory
	{
		ace_disposable = "[ACE_player,_this select 0] call ace_disposable_fnc_updateInventoryDisplay";
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class ace_disposable
		{
			init = "[_this select 0] call ace_disposable_fnc_takeLoadedATWeapon";
		};
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class launch_NLAW_F: Launcher_Base_F
	{
		ACE_UsedTube = "ACE_launch_NLAW_Used_F";
		magazines[] = {"ACE_PreloadedMissileDummy"};
	};
	class ACE_launch_NLAW_Used_F: launch_NLAW_F
	{
		ace_nlaw_enabled = 0;
		scope = 1;
		ACE_isUsedLauncher = 1;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_disposable_UsedTube";
		descriptionShort = "$STR_ace_disposable_UsedTubeDescription";
		magazines[] = {"ACE_FiredMissileDummy"};
		weaponPoolAvailable = 0;
	};
};
class CfgMagazines
{
	class NLAW_F;
	class ACE_PreloadedMissileDummy: NLAW_F
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 1;
		displayName = "$STR_ace_disposable_PreloadedMissileDummy";
		picture = "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa";
		weaponPoolAvailable = 0;
		mass = 0;
	};
	class ACE_FiredMissileDummy: ACE_PreloadedMissileDummy
	{
		count = 0;
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class NATO_Box_Base: ReammoBox_F{};
	class Box_NATO_Ammo_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class Box_NATO_WpsLaunch_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class IND_Box_Base: ReammoBox_F{};
	class Box_IND_WpsLaunch_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class Box_IND_Ammo_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class B_AssaultPack_rgr;
	class B_AssaultPack_rgr_LAT: B_AssaultPack_rgr
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class B_AssaultPack_rgr_ReconLAT: B_AssaultPack_rgr
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class B_Carryall_mcamo;
	class B_AssaultPack_mcamo_Ammo: B_Carryall_mcamo
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class B_Carryall_oli;
	class I_Fieldpack_oli_Ammo: B_Carryall_oli
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class B_AssaultPack_dgtl;
	class I_Fieldpack_oli_LAT: B_AssaultPack_dgtl
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class CargoNet_01_ammo_base_F;
	class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class Slingload_01_Base_F;
	class B_Slingload_01_Cargo_F: Slingload_01_Base_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class Tank_F;
	class APC_Tracked_01_base_F: Tank_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class Car_F;
	class MRAP_01_base_F: Car_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class MRAP_03_base_F: Car_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class Wheeled_APC_F: Car_F{};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				count = 0;
			};
		};
	};
};
