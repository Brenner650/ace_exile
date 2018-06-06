////////////////////////////////////////////////////////////////////
//DeRap: ace_vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:49:05 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_vehicles
	{
		name = "ACE3 - Vehicles";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		addonRootClass = "A3_Characters_F";
		ammo[] = {"M_Mo_82mm_AT"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_vehicles
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vehicles\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_vehicles
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vehicles\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_vehicles
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vehicles\XEH_postInit.sqf'";
	};
};
class Extended_Engine_EventHandlers
{
	class Car
	{
		class ACE_EngineStartDelay
		{
			clientEngine = "if (local driver (_this select 0)) then {_this call ace_vehicles_fnc_startEngine};";
		};
	};
};
class Extended_Init_EventHandlers
{
	class StaticWeapon
	{
		class ACE_FixMass
		{
			init = "if (local (_this select 0)) then {(_this select 0) setMass (getMass (_this select 0) max 250)};";
			exclude[] = {"TargetSoldierBase","Static_Designator_01_base_F","Static_Designator_02_base_F","Pod_Heli_Transport_04_base_F"};
		};
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_Mo_82mm_AT: MissileBase
	{
		cost = 400000;
	};
};
class CfgVehicles
{
	class All
	{
		class Turrets;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class Turrets;
		};
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics;
	};
	class Car: LandVehicle{};
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class Ship: AllVehicles
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		fuelCapacity = "500 * 0.165";
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		fuelCapacity = "600 * 0.165";
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		fuelCapacity = "660 * 0.165";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"autocannon_30mm","ACE_LMG_coax_L94A1_mem3"};
			};
		};
	};
	class MBT_03_base_F: Tank_F
	{
		fuelCapacity = "550 * 0.165";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"cannon_120mm_long","ACE_LMG_coax_MAG58_mem3"};
			};
		};
	};
	class MBT_01_base_F: Tank_F
	{
		fuelCapacity = "500 * 0.165";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"cannon_120mm","ACE_LMG_coax_MAG58_mem3"};
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F{};
	class B_MBT_01_cannon_F: B_MBT_01_base_F{};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"cannon_120mm","ACE_LMG_coax_MAG58_mem3"};
			};
		};
	};
	class MBT_02_base_F: Tank_F
	{
		fuelCapacity = "600 * 0.165";
	};
	class Ship_F: Ship{};
	class Boat_F: Ship_F{};
	class Boat_Armed_01_base_F: Boat_F
	{
		class Turrets: Turrets
		{
			class FrontTurret;
			class RearTurret: FrontTurret{};
		};
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
		class Turrets: Turrets
		{
			class RearTurret: RearTurret
			{
				magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
			};
		};
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
		class Turrets: Turrets
		{
			class RearTurret: RearTurret
			{
				magazines[] = {"2000Rnd_762x51_Belt_T_Yellow"};
			};
		};
	};
	class Truck_F: Car_F{};
	class MRAP_01_base_F: Car_F
	{
		fuelCapacity = "510 * 0.165";
	};
	class MRAP_02_base_F: Car_F
	{
		fuelCapacity = "500 * 0.165";
	};
	class MRAP_03_base_F: Car_F
	{
		fuelCapacity = "860 * 0.165";
		smokeLauncherGrenadeCount = 3;
		smokeLauncherAngle = 80;
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret
			{
				stabilizedInAxes = 3;
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		smokeLauncherGrenadeCount = 3;
		smokeLauncherAngle = 80;
		class Turrets: Turrets
		{
			class CommanderTurret: CommanderTurret
			{
				stabilizedInAxes = 3;
			};
		};
	};
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F
	{
		smokeLauncherGrenadeCount = 3;
		smokeLauncherAngle = 80;
		class Turrets: Turrets
		{
			class CommanderTurret: CommanderTurret
			{
				stabilizedInAxes = 3;
			};
		};
	};
	class Truck_01_base_F: Truck_F
	{
		fuelCapacity = "644 * 0.165";
	};
	class Truck_02_base_F: Truck_F
	{
		fuelCapacity = "1100 * 0.165";
	};
	class Truck_03_base_F: Truck_F
	{
		fuelCapacity = "900 * 0.165";
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		fuelCapacity = "800 * 0.165";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F{};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"autocannon_40mm_CTWS","ACE_LMG_coax_MAG58_mem3"};
			};
		};
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		fuelCapacity = "700 * 0.165";
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		fuelCapacity = "700 * 0.165";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F{};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"autocannon_30mm_CTWS","ACE_LMG_coax_ext_MAG58","missiles_titan"};
			};
		};
	};
};
class CfgWeapons
{
	class MGunCore;
	class MGun: MGunCore{};
	class LMG_RCWS: MGun{};
	class LMG_coax: LMG_RCWS{};
	class LMG_coax_ext: LMG_coax{};
	class ACE_LMG_coax_L94A1_mem3: LMG_coax{};
	class ACE_LMG_coax_MAG58_mem3: LMG_coax{};
	class ACE_LMG_coax_ext_MAG58: LMG_coax_ext{};
	class LMG_Minigun: LMG_RCWS
	{
		magazines[] = {"PylonWeapon_2000Rnd_65x39_belt","1000Rnd_65x39_Belt","1000Rnd_65x39_Belt_Green","1000Rnd_65x39_Belt_Tracer_Green","1000Rnd_65x39_Belt_Tracer_Red","1000Rnd_65x39_Belt_Tracer_Yellow","1000Rnd_65x39_Belt_Yellow","2000Rnd_65x39_Belt","2000Rnd_65x39_Belt_Green","2000Rnd_65x39_Belt_Tracer_Green","2000Rnd_65x39_Belt_Tracer_Green_Splash","2000Rnd_65x39_Belt_Tracer_Red","2000Rnd_65x39_Belt_Tracer_Yellow","2000Rnd_65x39_Belt_Tracer_Yellow_Splash","2000Rnd_65x39_Belt_Yellow","2000Rnd_762x51_Belt_T_Green","2000Rnd_762x51_Belt_T_Red","2000Rnd_762x51_Belt_T_Yellow","200Rnd_65x39_Belt","200Rnd_65x39_Belt_Tracer_Green","200Rnd_65x39_Belt_Tracer_Red","200Rnd_65x39_Belt_Tracer_Yellow","5000Rnd_762x51_Belt","5000Rnd_762x51_Yellow_Belt","500Rnd_65x39_Belt","500Rnd_65x39_Belt_Tracer_Red_Splash","500Rnd_65x39_Belt_Tracer_Green_Splash","500Rnd_65x39_Belt_Tracer_Yellow_Splash"};
	};
	class HMG_127: LMG_RCWS
	{
		class manual: MGun{};
	};
	class HMG_01: HMG_127
	{
		reloadTime = 0.23;
		class manual: manual
		{
			reloadTime = 0.23;
		};
	};
};
