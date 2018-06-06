////////////////////////////////////////////////////////////////////
//DeRap: ace_fcs\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:43:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_fcs
	{
		name = "ACE3 - FCS";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","BadGuy (simon84)","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		addonRootClass = "A3_Characters_F";
		magazines[] = {};
		ammo[] = {"ACE_B_35mm_ABM","ACE_B_35mm_ABM_Tracer_Red","ACE_B_35mm_ABM_Tracer_Green","ACE_B_35mm_ABM_Tracer_Yellow","ACE_B_35mm_ABM_Helper"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_fcs
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\fcs\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_fcs
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\fcs\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_fcs
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\fcs\XEH_postInit.sqf'";
	};
};
class Extended_InitPost_EventHandlers
{
	class Tank
	{
		class ace_fcs
		{
			serverInit = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Car
	{
		class ace_fcs
		{
			serverInit = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Helicopter
	{
		class ace_fcs
		{
			serverInit = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Plane
	{
		class ace_fcs
		{
			serverInit = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Ship_F
	{
		class ace_fcs
		{
			serverInit = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class StaticWeapon
	{
		class ace_fcs
		{
			serverInit = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
};
class Extended_Respawn_EventHandlers
{
	class Tank
	{
		class ace_fcs
		{
			respawn = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Car
	{
		class ace_fcs
		{
			respawn = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Helicopter
	{
		class ace_fcs
		{
			respawn = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Plane
	{
		class ace_fcs
		{
			respawn = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class Ship_F
	{
		class ace_fcs
		{
			respawn = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
	class StaticWeapon
	{
		class ace_fcs
		{
			respawn = "_this call ace_fcs_fnc_vehicleInit";
		};
	};
};
class ACE_UI
{
	class gunnerZeroing
	{
		class conditions
		{
			ace_fcs = "getNumber ([vehicle ACE_player,ACE_player call CBA_fnc_turretPath] call CBA_fnc_getTurret >> 'ace_fcs_enabled') != 1";
		};
	};
};
class CfgAmmo
{
	class B_35mm_AA;
	class ACE_B_35mm_ABM: B_35mm_AA
	{
		ace_fcs_Airburst = 1;
		deflecting = 0;
	};
	class B_35mm_AA_Tracer_Red;
	class ACE_B_35mm_ABM_Tracer_Red: B_35mm_AA_Tracer_Red
	{
		ace_fcs_Airburst = 1;
		deflecting = 0;
	};
	class B_35mm_AA_Tracer_Green;
	class ACE_B_35mm_ABM_Tracer_Green: B_35mm_AA_Tracer_Green
	{
		ace_fcs_Airburst = 1;
		deflecting = 0;
	};
	class B_35mm_AA_Tracer_Yellow;
	class ACE_B_35mm_ABM_Tracer_Yellow: B_35mm_AA_Tracer_Yellow
	{
		ace_fcs_Airburst = 1;
		deflecting = 0;
	};
	class ACE_B_35mm_ABM_Helper: B_35mm_AA
	{
		indirectHitRange = 6;
		simulation = "shotRocket";
		timeToLive = 0;
	};
};
class CfgMagazines
{
	class 680Rnd_35mm_AA_shells;
	class ACE_120Rnd_35mm_ABM_shells: 680Rnd_35mm_AA_shells
	{
		ammo = "ACE_B_35mm_ABM";
		count = 120;
		displayName = "35mm ABM Shells";
		displayNameShort = "35mm ABM";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Red;
	class ACE_120Rnd_35mm_ABM_shells_Tracer_Red: 680Rnd_35mm_AA_shells_Tracer_Red
	{
		ammo = "ACE_B_35mm_ABM_Tracer_Red";
		count = 120;
		displayName = "35mm ABM Shells";
		displayNameShort = "35mm ABM-T";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Green;
	class ACE_120Rnd_35mm_ABM_shells_Tracer_Green: 680Rnd_35mm_AA_shells_Tracer_Green
	{
		ammo = "ACE_B_35mm_ABM_Tracer_Green";
		count = 120;
		displayName = "35mm ABM Shells";
		displayNameShort = "35mm ABM-T";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Yellow;
	class ACE_120Rnd_35mm_ABM_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells_Tracer_Yellow
	{
		ammo = "ACE_B_35mm_ABM_Tracer_Yellow";
		count = 120;
		displayName = "35mm ABM Shells";
		displayNameShort = "35mm ABM-T";
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
			ace_fcs_Enabled = 0;
			ace_fcs_MinDistance = 200;
			ace_fcs_MaxDistance = 5500;
			ace_fcs_DistanceInterval = 5;
			class Turrets;
		};
		class CargoTurret;
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics;
	};
	class Car: LandVehicle
	{
		class ACE_SelfActions
		{
			class ResetFCS
			{
				displayName = "$STR_ace_fcs_ResetFCS";
				condition = "_player call ace_fcs_fnc_canResetFCS";
				statement = "[vehicle _player,[_player] call ace_common_fnc_getTurretIndex] call ace_fcs_fnc_reset;";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_SelfActions
		{
			class ResetFCS
			{
				displayName = "$STR_ace_fcs_ResetFCS";
				condition = "_player call ace_fcs_fnc_canResetFCS";
				statement = "[vehicle _player,[_player] call ace_common_fnc_getTurretIndex] call ace_fcs_fnc_reset;";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};
		};
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F{};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 1;
				turretinfotype = "ACE_RscOptics_APC_Tracked_01_gunner";
				ace_fcs_MaxDistance = 2000;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				magazines[] += {"ACE_120Rnd_35mm_ABM_shells_Tracer_Red"};
			};
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F{};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 1;
				turretinfotype = "ACE_RscOptics_APC_Tracked_01_gunner";
				ace_fcs_MaxDistance = 2000;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				magazines[] += {"ACE_120Rnd_35mm_ABM_shells_Tracer_Green"};
			};
		};
	};
};
class CfgWeapons
{
	class CannonCore;
	class autocannon_35mm: CannonCore
	{
		canLock = 0;
		ballisticsComputer = 4;
		magazines[] += {"ACE_120Rnd_35mm_ABM_shells","ACE_120Rnd_35mm_ABM_shells_Tracer_Red","ACE_120Rnd_35mm_ABM_shells_Tracer_Green","ACE_120Rnd_35mm_ABM_shells_Tracer_Yellow"};
	};
	class ItemCore;
	class optic_MRCO: ItemCore
	{
		weaponInfoType = "RscWeaponZeroing";
	};
};
class RscText;
class RscControlsGroup;
class RscMapControl;
class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_Heli_Attack_02_gunner: RscUnitInfo
	{
		class CA_IGUI_elements_group: RscControlsGroup
		{
			class controls
			{
				class CA_Distance;
				class ACE_CA_Distance: CA_Distance
				{
					idc = 1713151;
					text = "----";
				};
				class ACE_Rangehelper: RscMapControl
				{
					onDraw = "((ctrlParent (_this select 0)) displayCtrl 1713151) ctrlShow (cameraView == 'GUNNER');";
					w = 0;
					h = 0;
				};
			};
		};
	};
	class Rsc_ACE_Helo_UI_Turret: RscUnitInfo
	{
		onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call    (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNamespace setVariable ['ACE_dlgRangefinder', _this select 0]; ((_this select 0) displayCtrl 151) ctrlSetTextColor [0, 0, 0, 0];";
		class CA_IGUI_elements_group: RscControlsGroup
		{
			class controls
			{
				class CA_Distance;
				class ACE_CA_Distance: CA_Distance
				{
					idc = 1713151;
					text = "----";
				};
				class ACE_Rangehelper: RscMapControl
				{
					onDraw = "((ctrlParent (_this select 0)) displayCtrl 1713151) ctrlShow (cameraView == 'GUNNER');";
					w = 0;
					h = 0;
				};
			};
		};
	};
	class RscOptics_APC_Tracked_01_gunner: RscUnitInfo
	{
		class CA_IGUI_elements_group: RscControlsGroup
		{
			class controls
			{
				class CA_Distance: RscText{};
			};
		};
	};
	class ACE_RscOptics_APC_Tracked_01_gunner: RscOptics_APC_Tracked_01_gunner
	{
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class controls: controls
			{
				class CA_Distance: CA_Distance
				{
					idc = 151;
				};
				class ACE_CA_Distance: CA_Distance
				{
					idc = 1713151;
					text = "----";
				};
				class ACE_Rangehelper: RscMapControl
				{
					onDraw = "((ctrlParent (_this select 0)) displayCtrl 1713151) ctrlShow (cameraView == 'GUNNER');";
					w = 0;
					h = 0;
				};
			};
		};
	};
};
class ACE_Extensions
{
	extensions[] += {"ace_fcs"};
};
class ACE_Tests
{
	fcs = "\z\ace\addons\fcs\dev\test_debugConfigs.sqf";
};
