////////////////////////////////////////////////////////////////////
//DeRap: ace_rearm\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:19 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_rearm
	{
		name = "ACE3 - Rearm";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"GitHawk","Jonpas"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"LaserBombCore","MissileBase","Missile_AA_04_F","Missile_AA_03_F","Rocket_04_HE_F","Rocket_03_HE_F","Rocket_04_AP_F","Rocket_03_AP_F","M_PG_AT","Missile_AGM_02_F","Missile_AGM_01_F","RocketBase","R_80mm_HE","R_60mm_HE","B_19mm_HE","B_20mm","B_25mm","B_30mm_AP","B_30mm_HE","Gatling_30mm_HE_Plane_CAS_01_F","B_35mm_AA","B_40mm_APFSDS","B_40mm_GPR","G_40mm_HE","R_230mm_fly","Sh_120mm_APFSDS","Sh_105mm_APFSDS","Sh_125mm_APFSDS","Sh_120mm_HE","Sh_125mm_HE","Sh_125mm_HEAT","Sh_105mm_HEAT_MP","Sh_155mm_AMOS","Sh_82mm_AMOS","Sh_155mm_AMOS_LG","Smoke_82mm_AMOS_White","Flare_82mm_AMOS_White","SmokeLauncherAmmo","CMflareAmmo","Sh_82mm_AMOS_guided","Sh_155mm_AMOS_guided","R_230mm_HE","Mine_155mm_AMOS_range","Cluster_155mm_AMOS","Smoke_120mm_AMOS_White","AT_Mine_155mm_AMOS_range","Bo_Mk82","ammo_Bomb_LaserGuidedBase","Bo_GBU12_LGB","Bomb_04_F","Bomb_03_F"};
	};
};
class ACE_Settings
{
	class ace_rearm_level
	{
		category = "$STR_ace_rearm_DisplayName";
		displayName = "$STR_ace_rearm_RearmSettings_level_DisplayName";
		description = "$STR_ace_rearm_RearmSettings_level_Description";
		value = 0;
		typeName = "SCALAR";
		values[] = {"$STR_ace_rearm_RearmSettings_vehicle","$STR_ace_rearm_RearmSettings_magazine","$STR_ace_rearm_RearmSettings_caliber"};
	};
	class ace_rearm_supply
	{
		category = "$STR_ace_rearm_DisplayName";
		displayName = "$STR_ace_rearm_RearmSettings_supply_DisplayName";
		description = "$STR_ace_rearm_RearmSettings_supply_Description";
		value = 0;
		typeName = "SCALAR";
		values[] = {"$STR_ace_rearm_RearmSettings_unlimited","$STR_ace_rearm_RearmSettings_limited","$STR_ace_rearm_RearmSettings_magazineSupply"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_rearm
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\rearm\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_rearm
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\rearm\XEH_preInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class ace_rearm_defaultCarriedObject
	{
		class ace_rearm
		{
			init = "_this call ace_cargo_fnc_initObject";
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_rearm
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\rearm\XEH_postInit.sqf'";
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_rearm
		{
			respawn = "call ace_rearm_fnc_handleRespawn";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_rearm
		{
			killed = "_this call ace_rearm_fnc_handleKilled";
		};
	};
};
class CfgAmmo
{
	class BombCore;
	class LaserBombCore: BombCore
	{
		ace_rearm_caliber = 250;
	};
	class MissileCore;
	class MissileBase: MissileCore
	{
		ace_rearm_caliber = 250;
	};
	class Missile_AA_04_F: MissileBase
	{
		ace_rearm_dummy = "ace_rearm_Missile_AA_04_F";
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		ace_rearm_dummy = "ace_rearm_Missile_AA_03_F";
	};
	class Rocket_04_HE_F: MissileBase
	{
		ace_rearm_caliber = 70;
		ace_rearm_dummy = "ace_rearm_Rocket_04_HE_F";
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		ace_rearm_dummy = "ace_rearm_Rocket_03_HE_F";
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		ace_rearm_dummy = "ace_rearm_Rocket_04_AP_F";
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		ace_rearm_dummy = "ace_rearm_Rocket_03_AP_F";
	};
	class M_PG_AT: MissileBase
	{
		ace_rearm_caliber = 70;
		ace_rearm_dummy = "ace_rearm_M_PG_AT";
	};
	class Missile_AGM_02_F: MissileBase
	{
		ace_rearm_dummy = "ace_rearm_Missile_AGM_02_F";
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		ace_rearm_dummy = "ace_rearm_Missile_AGM_01_F";
	};
	class RocketCore;
	class RocketBase: RocketCore
	{
		ace_rearm_caliber = 70;
	};
	class R_80mm_HE: RocketBase
	{
		ace_rearm_caliber = 80;
		ace_rearm_dummy = "ace_rearm_R_80mm_HE";
	};
	class R_60mm_HE: R_80mm_HE
	{
		ace_rearm_caliber = 60;
		ace_rearm_dummy = "ace_rearm_R_60mm_HE";
	};
	class BulletBase;
	class B_19mm_HE: BulletBase
	{
		ace_rearm_caliber = 19;
	};
	class B_20mm: BulletBase
	{
		ace_rearm_caliber = 20;
	};
	class B_25mm: BulletBase
	{
		ace_rearm_caliber = 25;
	};
	class B_30mm_AP: BulletBase
	{
		ace_rearm_caliber = 30;
	};
	class B_30mm_HE: B_19mm_HE
	{
		ace_rearm_caliber = 30;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		ace_rearm_caliber = 30;
	};
	class B_35mm_AA: BulletBase
	{
		ace_rearm_caliber = 35;
	};
	class B_30mm_APFSDS;
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
		ace_rearm_caliber = 40;
	};
	class B_40mm_GPR: B_30mm_HE
	{
		ace_rearm_caliber = 40;
	};
	class GrenadeBase;
	class G_40mm_HE: GrenadeBase
	{
		ace_rearm_caliber = 39;
	};
	class ShellBase;
	class R_230mm_fly: ShellBase
	{
		ace_rearm_dummy = "ace_rearm_R_230mm_fly";
	};
	class Sh_120mm_APFSDS: Shellbase
	{
		ace_rearm_caliber = 120;
	};
	class Sh_105mm_APFSDS: Sh_120mm_APFSDS
	{
		ace_rearm_caliber = 105;
	};
	class Sh_125mm_APFSDS: Sh_120mm_APFSDS
	{
		ace_rearm_caliber = 125;
	};
	class Sh_120mm_HE: ShellBase
	{
		ace_rearm_caliber = 120;
	};
	class Sh_125mm_HE: Sh_120mm_HE
	{
		ace_rearm_caliber = 125;
	};
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
		ace_rearm_caliber = 125;
	};
	class Sh_105mm_HEAT_MP: Sh_125mm_HEAT
	{
		ace_rearm_caliber = 105;
	};
	class Sh_155mm_AMOS: ShellBase
	{
		ace_rearm_caliber = 155;
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		ace_rearm_caliber = 82;
	};
	class Sh_82mm_AMOS_LG;
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		ace_rearm_caliber = 155;
	};
	class ShotDeployBase;
	class Smoke_82mm_AMOS_White: ShotDeployBase
	{
		ace_rearm_caliber = 82;
	};
	class FlareCore;
	class Flare_82mm_AMOS_White: FlareCore
	{
		ace_rearm_caliber = 82;
	};
	class SmokeLauncherAmmo: BulletBase
	{
		ace_rearm_caliber = 250;
	};
	class CMflareAmmo: BulletBase
	{
		ace_rearm_caliber = 39;
	};
	class SubmunitionBase;
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		ace_rearm_caliber = 82;
	};
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		ace_rearm_caliber = 155;
	};
	class R_230mm_HE: SubmunitionBase
	{
		ace_rearm_caliber = 230;
	};
	class Mine_155mm_AMOS_range: SubmunitionBase
	{
		ace_rearm_caliber = 155;
	};
	class Cluster_155mm_AMOS: SubmunitionBase
	{
		ace_rearm_caliber = 155;
	};
	class Smoke_120mm_AMOS_White: SubmunitionBase
	{
		ace_rearm_caliber = 155;
	};
	class AT_Mine_155mm_AMOS_range: SubmunitionBase
	{
		ace_rearm_caliber = 155;
	};
	class Bo_Mk82: BombCore
	{
		ace_rearm_dummy = "ace_rearm_Bo_Mk82";
	};
	class ammo_Bomb_LaserGuidedBase: LaserBombCore{};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		ace_rearm_caliber = 250;
		ace_rearm_dummy = "ace_rearm_Bo_GBU12_LGB";
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		ace_rearm_caliber = 250;
		ace_rearm_dummy = "ace_rearm_Bomb_04_F";
	};
	class Bomb_03_F: ammo_Bomb_LaserGuidedBase
	{
		ace_rearm_dummy = "ace_rearm_Bomb_03_F";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 60Rnd_CMFlareMagazine: CA_Magazine
	{
		displayName = "$STR_ace_rearm_Mag_60Rnd_CMFlareMagazine";
	};
	class VehicleMagazine;
	class SmokeLauncherMag: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_SmokeLauncherMag";
	};
	class SmokeLauncherMag_boat: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_SmokeLauncherMag";
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_1000Rnd_Gatling_30mm_Plane_CAS_01_F";
	};
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayName = "$STR_ace_rearm_Mag_500Rnd_Cannon_30mm_Plane_CAS_02_F";
	};
	class 2Rnd_Missile_AA_04_F: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_2Rnd_Missile_AA_04_F";
	};
	class 2Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_04_F
	{
		displayName = "$STR_ace_rearm_Mag_2Rnd_Missile_AA_03_F";
	};
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_6Rnd_Missile_AGM_02_F";
	};
	class 4Rnd_Missile_AGM_01_F: 6Rnd_Missile_AGM_02_F
	{
		displayName = "$STR_ace_rearm_Mag_4Rnd_Missile_AGM_01_F";
	};
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_7Rnd_Rocket_04_HE_F";
	};
	class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F
	{
		displayName = "$STR_ace_rearm_Mag_20Rnd_Rocket_03_HE_F";
	};
	class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F
	{
		displayName = "$STR_ace_rearm_Mag_7Rnd_Rocket_04_AP_F";
	};
	class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F
	{
		displayName = "$STR_ace_rearm_Mag_20Rnd_Rocket_03_AP_F";
	};
	class 4Rnd_Bomb_04_F: VehicleMagazine
	{
		displayName = "$STR_ace_rearm_Mag_4Rnd_Bomb_04_F";
	};
	class 2Rnd_Bomb_03_F: 4Rnd_Bomb_04_F
	{
		displayName = "$STR_ace_rearm_Mag_2Rnd_Bomb_03_F";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class ACE_Module;
	class ACE_moduleRearmSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_rearm_RearmSettings_Module_DisplayName";
		icon = "\z\ace\addons\rearm\ui\icon_module_rearm.paa";
		category = "ACE_Logistics";
		function = "ace_rearm_fnc_moduleRearmSettings";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class level
			{
				displayName = "$STR_ace_rearm_RearmSettings_level_DisplayName";
				description = "$STR_ace_rearm_RearmSettings_level_Description";
				typeName = "NUMBER";
				class values
				{
					class vehicle
					{
						name = "$STR_ace_rearm_RearmSettings_vehicle";
						value = 0;
					};
					class magazine
					{
						name = "$STR_ace_rearm_RearmSettings_magazine";
						value = 1;
					};
					class caliber
					{
						name = "$STR_ace_rearm_RearmSettings_caliber";
						value = 2;
						default = 1;
					};
				};
			};
			class supply
			{
				displayName = "$STR_ace_rearm_RearmSettings_supply_DisplayName";
				description = "$STR_ace_rearm_RearmSettings_supply_Description";
				typeName = "NUMBER";
				class values
				{
					class unlimited
					{
						name = "$STR_ace_rearm_RearmSettings_unlimited";
						value = 0;
						default = 1;
					};
					class magazine
					{
						name = "$STR_ace_rearm_RearmSettings_limited";
						value = 1;
					};
					class caliber
					{
						name = "$STR_ace_rearm_RearmSettings_magazineSupply";
						value = 2;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_rearm_RearmSettings_Module_Description";
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_rearm_Rearm
				{
					displayName = "$STR_ace_rearm_Rearm";
					distance = 9;
					condition = "_this call ace_rearm_fnc_canRearm";
					statement = "_this call ace_rearm_fnc_rearm";
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_rearm_Rearm
				{
					displayName = "$STR_ace_rearm_Rearm";
					distance = 9;
					condition = "_this call ace_rearm_fnc_canRearm";
					statement = "_this call ace_rearm_fnc_rearm";
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
				};
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_rearm_Rearm
				{
					displayName = "$STR_ace_rearm_Rearm";
					distance = 9;
					condition = "_this call ace_rearm_fnc_canRearm";
					statement = "_this call ace_rearm_fnc_rearm";
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
				};
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_rearm_Rearm
				{
					displayName = "$STR_ace_rearm_Rearm";
					distance = 9;
					condition = "_this call ace_rearm_fnc_canRearm";
					statement = "_this call ace_rearm_fnc_rearm";
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
				};
			};
		};
	};
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_rearm_Rearm
				{
					displayName = "$STR_ace_rearm_Rearm";
					distance = 9;
					condition = "_this call ace_rearm_fnc_canRearm";
					statement = "_this call ace_rearm_fnc_rearm";
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
				};
			};
		};
	};
	class Ship;
	class Ship_F: Ship
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_rearm_Rearm
				{
					displayName = "$STR_ace_rearm_Rearm";
					distance = 9;
					condition = "_this call ace_rearm_fnc_canRearm";
					statement = "_this call ace_rearm_fnc_rearm";
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
				};
			};
		};
	};
	class Truck_03_base_F;
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class Truck_02_base_F;
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class B_Truck_01_mover_F;
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class B_APC_Tracked_01_base_F;
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class Heli_Transport_04_base_F;
	class O_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class Pod_Heli_Transport_04_base_F;
	class Land_Pod_Heli_Transport_04_ammo_F: Pod_Heli_Transport_04_base_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class Slingload_01_Base_F;
	class B_Slingload_01_Ammo_F: Slingload_01_Base_F
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class ReammoBox_F;
	class NATO_Box_Base: ReammoBox_F{};
	class Box_NATO_AmmoVeh_F: NATO_Box_Base
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class EAST_Box_Base: ReammoBox_F{};
	class Box_East_AmmoVeh_F: EAST_Box_Base
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class IND_Box_Base: ReammoBox_F{};
	class Box_IND_AmmoVeh_F: IND_Box_Base
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class ThingX;
	class ace_rearm_defaultCarriedObject: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		displayName = "ace_rearm_dummy_obj";
		scope = 1;
		scopeCurator = 1;
		model = "\A3\Weapons_F\AmmoBoxes\AmmoBox_F.p3d";
		ace_cargo_size = 1;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_rearm_PickUpAmmo";
				distance = 9;
				condition = "_this call ace_rearm_fnc_canTakeAmmo";
				statement = "_this call ace_rearm_fnc_grabAmmo";
				exceptions[] = {"isNotInside"};
				showDisabled = 0;
				priority = 2;
				icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
			};
		};
	};
	class ace_rearm_Bo_GBU12_LGB: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_F.p3d";
	};
	class ace_rearm_Bo_Mk82: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
	};
	class ace_rearm_Bomb_04_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
	};
	class ace_rearm_Bomb_03_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
	};
	class ace_rearm_Missile_AA_04_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
	};
	class ace_rearm_Missile_AA_03_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
	};
	class ace_rearm_Missile_AGM_02_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
	};
	class ace_rearm_Missile_AGM_01_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
	};
	class ace_rearm_R_230mm_fly: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
	};
	class ace_rearm_R_230mm_HE: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
	};
	class ace_rearm_M_PG_AT: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	class ace_rearm_Rocket_04_HE_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
	};
	class ace_rearm_Rocket_03_HE_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class ace_rearm_Rocket_04_AP_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
	};
	class ace_rearm_Rocket_03_AP_F: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
	};
	class ace_rearm_R_80mm_HE: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class ace_rearm_R_60mm_HE: ace_rearm_defaultCarriedObject
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
};
class ACE_Tests
{
	vehicleTransportAmmo = "\z\ace\addons\rearm\dev\test_debugConfigs.sqf";
};
