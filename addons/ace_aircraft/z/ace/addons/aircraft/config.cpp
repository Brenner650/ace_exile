////////////////////////////////////////////////////////////////////
//DeRap: ace_aircraft\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:40:23 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_aircraft
	{
		name = "ACE3 - Aircraft";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","Crusty","commy2","jaynus","Kimi"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		addonRootClass = "A3_Characters_F";
		magazines[] = {};
		ammo[] = {"B_20mm","ACE_20mm_HE","ACE_20mm_AP","B_65x39_Minigun_Caseless","B_762x51_Minigun_Tracer_Red","Gatling_30mm_HE_Plane_CAS_01_F","Cannon_30mm_HE_Plane_CAS_02_F"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_20mm: BulletBase
	{
		hit = 80;
		indirectHit = 12;
		indirectHitRange = 2;
		caliber = 1.4;
		tracerStartTime = 0.02;
		timeToLive = 40;
		explosive = 1.8;
		tracersEvery = 3;
		tracerEndTime = 3.5;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class ACE_20mm_HE: B_20mm{};
	class ACE_20mm_AP: B_20mm
	{
		hit = 50;
		indirectHit = 12;
		indirectHitRange = 0.3;
		explosive = 0;
		CraterEffects = "";
		explosionEffects = "";
	};
	class SubmunitionBullet;
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		caliber = 1;
		deflecting = 15;
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		caliber = 1.6;
		deflecting = 15;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		hit = 80;
		indirectHit = 12;
		indirectHitRange = 3;
		caliber = 1.4;
		deflecting = 3;
		fuseDistance = 3;
		tracerStartTime = 0.02;
		timeToLive = 40;
	};
	class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		hit = 70;
		indirectHit = 11;
		indirectHitRange = 3;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_aircraft
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\aircraft\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_aircraft
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\aircraft\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_aircraft
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\aircraft\XEH_postInitClient.sqf'";
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		count = 1170;
	};
	class 300Rnd_20mm_shells;
	class ACE_500Rnd_20mm_shells_Comanche: 300Rnd_20mm_shells
	{
		ammo = "ACE_20mm_HE";
		count = 500;
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
	class Air: AllVehicles{};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Plane: Air{};
	class ParachuteBase: Helicopter
	{
		class Turrets;
	};
	class UAV: Plane{};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		incomingMissileDetectionSystem = 16;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				showHMD = 1;
			};
		};
	};
	class Heli_Light_01_armed_base_F: Heli_Light_01_base_F
	{
		incomingMissileDetectionSystem = 16;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		incomingMissileDetectionSystem = 16;
		magazines[] = {"2000Rnd_762x51_Belt_T_Green","12Rnd_PG_missiles","168Rnd_CMFlare_Chaff_Magazine"};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				showHMD = 1;
			};
		};
	};
	class Plane_Base_F: Plane
	{
		class Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		incomingMissileDetectionSystem = 16;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_gatling_20mm_Comanche","missiles_DAGR","missiles_ASRAAM"};
				magazines[] = {"ACE_500Rnd_20mm_shells_Comanche","4Rnd_AAA_missiles","24Rnd_PG_missiles"};
				turretInfoType = "Rsc_ACE_Helo_UI_Turret";
				class OpticsIn
				{
					delete Narrow;
					delete Medium;
					delete Wide;
					class ACE_WideUnstabilized
					{
						opticsDisplayName = "W NS";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 0;
						horizontallyStabilized = 1;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class ACE_Wide: ACE_WideUnstabilized
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						horizontallyStabilized = 1;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class ACE_Medium: ACE_Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						horizontallyStabilized = 1;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class ACE_Narrow: ACE_Wide
					{
						opticsDisplayName = "N";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						horizontallyStabilized = 1;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
					class ACE_Narrower: ACE_Wide
					{
						opticsDisplayName = "Z";
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						horizontallyStabilized = 1;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
						hideUnitInfo = 1;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				weapon = "ACE_gatling_20mm_Comanche";
			};
			class Muzzle_flash
			{
				weapon = "ACE_gatling_20mm_Comanche";
			};
		};
	};
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ACE_gatling_20mm_Comanche"};
				magazines[] = {"ACE_500Rnd_20mm_shells_Comanche"};
			};
		};
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		incomingMissileDetectionSystem = 16;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		incomingMissileDetectionSystem = 16;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				showHMD = 1;
			};
			class MainTurret: MainTurret
			{
				magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
			};
			class RightDoorGun: MainTurret
			{
				magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
			};
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		incomingMissileDetectionSystem = 16;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				showHMD = 1;
			};
		};
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 16;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				showHMD = 1;
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
			};
		};
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		lockDetectionSystem = 12;
		incomingMissileDetectionSystem = 16;
	};
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		lockDetectionSystem = 12;
		incomingMissileDetectionSystem = 16;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		lockDetectionSystem = 12;
		incomingMissileDetectionSystem = 16;
	};
	class UAV_02_base_F: UAV
	{
		weapons[] = {};
		magazines[] = {};
	};
	class UAV_02_CAS_base_F: UAV_02_base_F
	{
		weapons[] = {};
		magazines[] = {};
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		incomingMissileDetectionSystem = 16;
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		incomingMissileDetectionSystem = 16;
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class RocketPods;
	class ACE_AIR_SAFETY: RocketPods
	{
		CanLock = 0;
		displayName = "SAFE";
		displayNameMagazine = "SAFE";
		shortNameMagazine = "SAFE";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"FakeMagazine"};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;
	};
	class CannonCore;
	class gatling_20mm: CannonCore
	{
		magazines[] += {"ACE_500Rnd_20mm_shells_Comanche"};
		class manual: CannonCore
		{
			reloadTime = 0.023;
			dispersion = 0.006;
		};
		class close: manual{};
		class short: close{};
		class medium: close{};
		class far: close{};
	};
	class ACE_gatling_20mm_Comanche: gatling_20mm
	{
		displayName = "$STR_ace_aircraft_gatling_20mm_Name";
		class manual: manual
		{
			reloadTime = 0.04;
			dispersion = 0.006;
			displayName = "$STR_ace_aircraft_gatling_20mm_Name";
		};
		class close: close
		{
			reloadTime = 0.04;
			dispersion = 0.006;
		};
		class short: short
		{
			reloadTime = 0.04;
			dispersion = 0.006;
		};
		class medium: medium
		{
			reloadTime = 0.04;
			dispersion = 0.006;
		};
		class far: far
		{
			reloadTime = 0.04;
			dispersion = 0.006;
		};
	};
	class MGunCore;
	class MGun: MGunCore{};
	class LMG_RCWS: MGun{};
	class LMG_Minigun: LMG_RCWS
	{
		class manual: MGun
		{
			reloadTime = 0.075;
			dispersion = 0.00093;
		};
		class close: manual{};
		class short: close{};
		class medium: close{};
		class far: close{};
	};
	class LMG_Minigun_heli: LMG_Minigun
	{
		showAimCursorInternal = 0;
		class manual: manual
		{
			reloadTime = 0.015;
			dispersion = 0.006;
		};
		class close: manual{};
		class short: close{};
		class medium: close{};
		class far: close{};
	};
	class M134_minigun: MGunCore
	{
		class LowROF: Mode_FullAuto
		{
			reloadTime = 0.03;
			dispersion = 0.0064;
			multiplier = 1;
		};
		class HighROF: LowROF
		{
			reloadTime = 0.02;
			dispersion = 0.0064;
			multiplier = 1;
		};
	};
};
class RscControlsGroup;
class RscText;
class RangeText: RscText{};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscControlsGroupNoScrollbars;
class RscInGameUI
{
	class RscUnitInfo;
	class Rsc_ACE_Helo_UI_Turret: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group","CA_VehicleToggles"};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * (0.025 * SafezoneH) + (SafezoneY)";
			w = "53.5 * (0.01875 * SafezoneH)";
			h = "40 * (0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "24.78 * (0.01875 * SafezoneH)";
					y = "30.88 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc = 188;
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "120";
					x = "14.78 * (0.01875 * SafezoneH)";
					y = "30.88 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc = 189;
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "3825";
					x = "34.78 * (0.01875 * SafezoneH)";
					y = "30.88 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "12.58 * (0.01875 * SafezoneH)";
					y = "8 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "15.78 * (0.01875 * SafezoneH)";
					y = "8 * (0.025 * SafezoneH)";
					w = "4.5 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					idc = 172;
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					x = "12.20 * (0.01875 * SafezoneH)";
					y = "3.5 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class TextTADS: RangeText
				{
					idc = 1010;
					text = "TADS";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = "12.30 * (0.01875 * SafezoneH)";
					y = "5 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc = 190;
					text = "20:28:35";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					x = "12.1 * (0.01875 * SafezoneH)";
					y = "6.5 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\z\ace\addons\aircraft\data\Helo_LaserON.paa";
					x = "20.45 * (0.01875 * SafezoneH)";
					y = "14.1 * (0.025 * SafezoneH)";
					w = "12.5 * (0.01875 * SafezoneH)";
					h = "12 * (0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "24.83 * (0.01875 * SafezoneH)";
					y = "6 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
			};
		};
	};
	class Rsc_ACE_Helo_UI_01: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight","CA_TextFlaresMode","CA_TextFlares","CA_VehicleToggles","CA_Radar"};
	};
	class Rsc_ACE_Helo_UI_02: RscUnitInfo
	{
		controls[] = {"CA_TextFlaresMode","CA_TextFlares","CA_VehicleToggles","CA_Radar"};
	};
	class Rsc_ACE_Drones_UI_Turret: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_VehicleToggles"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * (0.025 * SafezoneH) + (SafezoneY)";
			w = "53.5 * (0.01875 * SafezoneH)";
			h = "40 * (0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "24.78 * (0.01875 * SafezoneH)";
					y = "30.88 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc = 188;
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "120";
					x = "14.78 * (0.01875 * SafezoneH)";
					y = "30.88 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc = 189;
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "3825";
					x = "34.78 * (0.01875 * SafezoneH)";
					y = "30.88 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc = 190;
					text = "20:28:35";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					x = "1.75 * (0.01875 * SafezoneH)";
					y = "10.5 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					align = "right";
					x = "2.6 * (0.01875 * SafezoneH)";
					y = "12.0 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.0 * (0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					align = "right";
					x = "6.18 * (0.01875 * SafezoneH)";
					y = "12.0 * (0.025 * SafezoneH)";
					w = "4.5 * (0.01875 * SafezoneH)";
					h = "1.0 * (0.025 * SafezoneH)";
				};
				class TgT_Grid_text: RangeText
				{
					idc = 1005;
					text = "TGT:";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					x = "1.20 * (0.01875 * SafezoneH)";
					y = "13.5 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class TGT_ValueGrid: RangeText
				{
					idc = 172;
					font = "EtelkaMonospacePro";
					colorText[] = {0.706,0.0745,0.0196,0.8};
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "5.20 * (0.01875 * SafezoneH)";
					y = "13.5 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class OWN_Grid_text: RangeText
				{
					idc = 1005;
					text = "OWN:";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					x = "1.20 * (0.01875 * SafezoneH)";
					y = "15 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class OWN_ValueGrid: RangeText
				{
					idc = 171;
					font = "EtelkaMonospacePro";
					colorText[] = {0.15,1,0.15,0.8};
					style = 2;
					sizeEx = "0.0295 * SafezoneH";
					shadow = 0;
					x = "5.20 * (0.01875 * SafezoneH)";
					y = "15 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038 * SafezoneH";
					shadow = 0;
					align = "right";
					font = "EtelkaMonospacePro";
					text = "\z\ace\addons\aircraft\data\Helo_LaserON.paa";
					x = "20.45 * (0.01875 * SafezoneH)";
					y = "14.1 * (0.025 * SafezoneH)";
					w = "12.5 * (0.01875 * SafezoneH)";
					h = "12 * (0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					align = "right";
					x = "25 * (0.01875 * SafezoneH)";
					y = "5 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
			};
		};
	};
	class Rsc_ACE_Drones_UI_Pilots: RscUnitInfo
	{
		idd = 300;
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_VehicleToggles","CA_Radar","DriverOpticsGroup"};
		class DriverOpticsGroup: RscControlsGroup
		{
			idc = 392;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * (0.025 * SafezoneH) + (SafezoneY)";
			w = "53.5 * (0.01875 * SafezoneH)";
			h = "40 * (0.025 * SafezoneH)";
			class controls
			{
				class TextGrid: RscText
				{
					style = 0;
					sizeEx = "0.02 * SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1005;
					text = "GRID:";
					x = "5.8 * (0.01875 * SafezoneH)";
					y = "31.8 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class ValueGrid: TextGrid
				{
					idc = 189;
					text = "382546";
					x = "10.3 * (0.01875 * SafezoneH)";
					y = "31.8 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class TextTime: TextGrid
				{
					idc = 1010;
					text = "TIME [UTC]:";
					x = "5.8 * (0.01875 * SafezoneH)";
					y = "32.6 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class ValueTime: TextGrid
				{
					idc = 101;
					text = "20:28:35";
					x = "10 * (0.01875 * SafezoneH)";
					y = "32.6 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class TextMag: TextGrid
				{
					idc = 1011;
					text = "CAM MAG:";
					x = "5.8 * (0.01875 * SafezoneH)";
					y = "7 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class OpticsZoom: TextGrid
				{
					idc = 192;
					text = "28x";
					x = "10.3 * (0.01875 * SafezoneH)";
					y = "7 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class BorderLineSpdTop: RscPicture
				{
					idc = 1203;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "3.343 * (0.01875 * SafezoneH)";
					y = "12.4 * (0.025 * SafezoneH)";
					w = "3 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class BorderLineSpdBottom: RscPicture
				{
					idc = 1207;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "3.343 * (0.01875 * SafezoneH)";
					y = "26.5 * (0.025 * SafezoneH)";
					w = "3 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class BorderLineAltTop: RscPicture
				{
					idc = 1205;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "47.16 * (0.01875 * SafezoneH)";
					y = "12.4 * (0.025 * SafezoneH)";
					w = "3 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class BorderLineAltBottom: RscPicture
				{
					idc = 1206;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					x = "47.16 * (0.01875 * SafezoneH)";
					y = "26.5 * (0.025 * SafezoneH)";
					w = "3 * (0.01875 * SafezoneH)";
					h = "1 * (0.025 * SafezoneH)";
				};
				class TextSpd: TextGrid
				{
					idc = 1004;
					text = "SPD";
					x = "4.8 * (0.01875 * SafezoneH)";
					y = "11.8 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class SpeedValueBorder: RscPicture
				{
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\altimeter_value_ca.paa";
					x = "6.3 * (0.01875 * SafezoneH)";
					y = "19 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "2 * (0.025 * SafezoneH)";
				};
				class CA_Speed: TextGrid
				{
					idc = 190;
					sizeEx = "0.03*SafezoneH";
					text = "120";
					x = "7.5 * (0.01875 * SafezoneH)";
					y = "19.5 * (0.025 * SafezoneH)";
					w = "6 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class AnalogueSpeed: RscLadderPicture
				{
					idc = 384;
					topValue = 1312;
					bottomValue = -345;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UAVspeedLadder_ca.paa";
					x = "1.5 * (0.01875 * SafezoneH)";
					y = "13 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "14 * (0.025 * SafezoneH)";
				};
				class TextAlt: TextGrid
				{
					idc = 1006;
					text = "ALT";
					x = "46.9 * (0.01875 * SafezoneH)";
					y = "11.8 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class AltValueBorder: RscPicture
				{
					idc = 1201;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\airspeed_value_ca.paa";
					x = "42.25 * (0.01875 * SafezoneH)";
					y = "19 * (0.025 * SafezoneH)";
					w = "5 * (0.01875 * SafezoneH)";
					h = "2 * (0.025 * SafezoneH)";
				};
				class CA_Alt: TextGrid
				{
					idc = 191;
					sizeEx = "0.03 * SafezoneH";
					style = 1;
					text = "3825";
					x = "43 * (0.01875 * SafezoneH)";
					y = "19.5 * (0.025 * SafezoneH)";
					w = "3.2 * (0.01875 * SafezoneH)";
					h = "1.2 * (0.025 * SafezoneH)";
				};
				class AnalogueAlt: RscLadderPicture
				{
					idc = 385;
					topValue = 14430;
					bottomValue = -2110;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UAValtLadder_ca.paa";
					x = "47 * (0.01875 * SafezoneH)";
					y = "13 * (0.025 * SafezoneH)";
					w = "2.5 * (0.01875 * SafezoneH)";
					h = "14 * (0.025 * SafezoneH)";
				};
				class AnalogueHorizon: RscLadderPicture
				{
					idc = 383;
					topValue = 90;
					bottomValue = -90;
					visibleRange = -1;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\horizon_ladder_ca.paa";
					x = "16.75 * (0.01875 * SafezoneH)";
					y = "5 * (0.025 * SafezoneH)";
					w = "20 * (0.01875 * SafezoneH)";
					h = "30 * (0.025 * SafezoneH)";
				};
				class HorizonCenter: RscPicture
				{
					idc = 1202;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\horizon_aircraft_ca.paa";
					x = "24.75 * (0.01875 * SafezoneH)";
					y = "19 * (0.025 * SafezoneH)";
					w = "4 * (0.01875 * SafezoneH)";
					h = "2 * (0.025 * SafezoneH)";
				};
			};
		};
	};
};
