////////////////////////////////////////////////////////////////////
//DeRap: ace_realisticnames\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:05 2018 : 'file' last modified on Mon Apr 16 21:47:19 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_realisticnames
	{
		name = "ACE3 - Realistic Names";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","TaoSensai","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		addonRootClass = "A3_Characters_F";
		magazines[] = {};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		displayNameShort = "30mm HEI";
	};
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
	{
		displayNameShort = "70mm HE";
	};
	class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F
	{
		displayNameShort = "70mm AP";
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
		displayNameShort = "70mm HE";
	};
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		displayNameShort = "70mm HE";
	};
	class 2000Rnd_65x39_Belt;
	class 5000Rnd_762x51_Belt: 2000Rnd_65x39_Belt
	{
		displayNameShort = "7.62mm";
	};
	class 5000Rnd_762x51_Yellow_Belt: 5000Rnd_762x51_Belt
	{
		displayNameShort = "7.62mm";
	};
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		displayNameShort = "12.7mm";
	};
	class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 200Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 100Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag
	{
		displayNameShort = "12.7mm";
	};
	class 200Rnd_40mm_G_belt: VehicleMagazine
	{
		displayNameShort = "40mm HE";
	};
	class 24Rnd_missiles: VehicleMagazine
	{
		displayNameShort = "70mm HE";
	};
	class 300Rnd_20mm_shells: VehicleMagazine
	{
		displayNameShort = "20mm HE";
	};
	class 14Rnd_80mm_rockets: VehicleMagazine
	{
		displayNameShort = "70mm HE";
	};
	class 250Rnd_30mm_HE_shells: VehicleMagazine
	{
		displayNameShort = "30mm HE";
	};
	class 250Rnd_30mm_APDS_shells: 250Rnd_30mm_HE_shells
	{
		displayNameShort = "30mm APDS";
	};
	class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F
	{
		displayNameShort = "80mm HE";
	};
	class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F
	{
		displayNameShort = "80mm AP";
	};
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayNameShort = "30mm HEI-T";
	};
	class 680Rnd_35mm_AA_shells: VehicleMagazine
	{
		displayNameShort = "35mm HEI";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells
	{
		displayNameShort = "35mm HEI-T";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells
	{
		displayNameShort = "35mm HEI-T";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells
	{
		displayNameShort = "35mm HEI-T";
	};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine
	{
		displayNameShort = "155mm HE";
	};
	class 6Rnd_155mm_Mo_smoke: 32Rnd_155mm_Mo_shells
	{
		displayNameShort = "155mm Smoke";
	};
	class 6Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_smoke
	{
		displayNameShort = "155mm Mines";
	};
	class 6Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_smoke
	{
		displayNameShort = "155mm AT Mines";
	};
	class 2Rnd_155mm_Mo_Cluster: 6Rnd_155mm_Mo_smoke
	{
		displayNameShort = "155mm Cluster";
	};
	class 2Rnd_155mm_Mo_guided: 6Rnd_155mm_Mo_smoke
	{
		displayNameShort = "155mm Guided";
	};
	class 2Rnd_155mm_Mo_LG: 6Rnd_155mm_Mo_smoke
	{
		displayNameShort = "155mm Laser Guided";
	};
	class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets
	{
		displayName = "227mm HE Missile";
		displayNameShort = "227mm HE";
	};
	class 30Rnd_120mm_HE_shells: VehicleMagazine
	{
		displayNameShort = "120mm HE";
	};
	class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells
	{
		displayNameShort = "120mm HE-T";
	};
	class 30Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells
	{
		displayNameShort = "120mm HE-T";
	};
	class 30Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells
	{
		displayNameShort = "120mm HE-T";
	};
	class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells
	{
		displayNameShort = "120mm AP";
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells
	{
		displayNameShort = "120mm AP-T";
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells
	{
		displayNameShort = "120mm AP-T";
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells
	{
		displayNameShort = "120mm AP-T";
	};
	class 200Rnd_762x51_Belt: VehicleMagazine
	{
		displayNameShort = "7.62mm";
	};
	class 200Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt{};
	class 200Rnd_762x51_Belt_Green: 200Rnd_762x51_Belt{};
	class 200Rnd_762x51_Belt_Yellow: 200Rnd_762x51_Belt{};
	class 200Rnd_762x51_Belt_T_Red: 200Rnd_762x51_Belt_Red
	{
		displayNameShort = "7.62mm";
	};
	class 200Rnd_762x51_Belt_T_Green: 200Rnd_762x51_Belt_Green
	{
		displayNameShort = "7.62mm";
	};
	class 200Rnd_762x51_Belt_T_Yellow: 200Rnd_762x51_Belt_Yellow
	{
		displayNameShort = "7.62mm";
	};
	class 2000Rnd_762x51_Belt_Red;
	class 2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_Red
	{
		displayNameShort = "7.62mm";
	};
	class 2000Rnd_762x51_Belt_Green;
	class 2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_Green
	{
		displayNameShort = "7.62mm";
	};
	class 2000Rnd_762x51_Belt_Yellow;
	class 2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_Yellow
	{
		displayNameShort = "7.62mm";
	};
	class 1000Rnd_762x51_Belt_Red;
	class 1000Rnd_762x51_Belt_T_Red: 1000Rnd_762x51_Belt_Red
	{
		displayNameShort = "7.62mm";
	};
	class 1000Rnd_762x51_Belt_Green;
	class 1000Rnd_762x51_Belt_T_Green: 1000Rnd_762x51_Belt_Green
	{
		displayNameShort = "7.62mm";
	};
	class 1000Rnd_762x51_Belt_Yellow;
	class 1000Rnd_762x51_Belt_T_Yellow: 1000Rnd_762x51_Belt_Yellow
	{
		displayNameShort = "7.62mm";
	};
	class 16Rnd_120mm_HE_shells;
	class 12Rnd_125mm_HE: 16Rnd_120mm_HE_shells
	{
		displayNameShort = "125mm HE";
	};
	class 16Rnd_120mm_HE_shells_Tracer_Red;
	class 12Rnd_125mm_HE_T_Red: 16Rnd_120mm_HE_shells_Tracer_Red
	{
		displayNameShort = "125mm HE-T";
	};
	class 16Rnd_120mm_HE_shells_Tracer_Green;
	class 12Rnd_125mm_HE_T_Green: 16Rnd_120mm_HE_shells_Tracer_Green
	{
		displayNameShort = "125mm HE-T";
	};
	class 16Rnd_120mm_HE_shells_Tracer_Yellow;
	class 12Rnd_125mm_HE_T_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow
	{
		displayNameShort = "125mm HE-T";
	};
	class 12Rnd_125mm_HEAT: 12Rnd_125mm_HE
	{
		displayNameShort = "125mm MP";
	};
	class 12Rnd_125mm_HEAT_T_Red: 12Rnd_125mm_HEAT
	{
		displayNameShort = "125mm MP-T";
	};
	class 12Rnd_125mm_HEAT_T_Green: 12Rnd_125mm_HEAT
	{
		displayNameShort = "125mm MP-T";
	};
	class 12Rnd_125mm_HEAT_T_Yellow: 12Rnd_125mm_HEAT
	{
		displayNameShort = "125mm MP-T";
	};
	class 20Rnd_125mm_APFSDS;
	class 24Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		displayNameShort = "125mm AP";
	};
	class 20Rnd_125mm_APFSDS_T_Red;
	class 24Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		displayNameShort = "125mm AP-T";
	};
	class 20Rnd_125mm_APFSDS_T_Green;
	class 24Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		displayNameShort = "125mm AP-T";
	};
	class 20Rnd_125mm_APFSDS_T_Yellow;
	class 24Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		displayNameShort = "125mm AP-T";
	};
	class 20Rnd_105mm_HEAT_MP: 12Rnd_125mm_HEAT
	{
		displayNameShort = "105mm MP";
	};
	class 20Rnd_105mm_HEAT_MP_T_Red: 20Rnd_105mm_HEAT_MP
	{
		displayNameShort = "105mm MP-T";
	};
	class 20Rnd_105mm_HEAT_MP_T_Green: 20Rnd_105mm_HEAT_MP
	{
		displayNameShort = "105mm MP-T";
	};
	class 20Rnd_105mm_HEAT_MP_T_Yellow: 20Rnd_105mm_HEAT_MP
	{
		displayNameShort = "105mm MP-T";
	};
	class 40Rnd_105mm_APFSDS: 24Rnd_125mm_APFSDS
	{
		displayNameShort = "105mm AP";
	};
	class 40Rnd_105mm_APFSDS_T_Red: 40Rnd_105mm_APFSDS
	{
		displayNameShort = "105mm AP-T";
	};
	class 40Rnd_105mm_APFSDS_T_Green: 40Rnd_105mm_APFSDS
	{
		displayNameShort = "105mm AP-T";
	};
	class 40Rnd_105mm_APFSDS_T_Yellow: 40Rnd_105mm_APFSDS
	{
		displayNameShort = "105mm AP-T";
	};
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
	{
		displayNameShort = "40mm GPR";
	};
	class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells
	{
		displayNameShort = "40mm GPR-T";
	};
	class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells
	{
		displayNameShort = "40mm GPR-T";
	};
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells
	{
		displayNameShort = "40mm GPR-T";
	};
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells
	{
		displayNameShort = "40mm AP";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells
	{
		displayNameShort = "40mm AP-T";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayNameShort = "40mm AP-T";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayNameShort = "40mm AP-T";
	};
	class 450Rnd_127x108_Ball: VehicleMagazine
	{
		displayNameShort = "12.7mm";
	};
	class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells
	{
		displayNameShort = "30mm MP";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		displayNameShort = "30mm MP-T";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayNameShort = "30mm MP-T";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayNameShort = "30mm MP-T";
	};
	class 60Rnd_30mm_APFSDS_shells: 250Rnd_30mm_HE_shells
	{
		displayNameShort = "30mm AP";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		displayNameShort = "30mm AP-T";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells
	{
		displayNameShort = "30mm AP-T";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells
	{
		displayNameShort = "30mm AP-T";
	};
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		displayNameShort = "20mm HE";
	};
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
	{
		displayNameShort = "20mm HE";
	};
	class CA_Magazine;
	class ATMine_Range_Mag: CA_Magazine
	{
		displayName = "$STR_ace_realisticnames_ATMine_Name";
	};
	class APERSMine_Range_Mag: ATMine_Range_Mag
	{
		displayName = "$STR_ace_realisticnames_APERSMine_Name";
	};
	class APERSBoundingMine_Range_Mag: ATMine_Range_Mag
	{
		displayName = "$STR_ace_realisticnames_APERSBoundingMine_Name";
	};
	class APERSTripMine_Wire_Mag: ATMine_Range_Mag
	{
		displayName = "$STR_ace_realisticnames_APERSTripwireMine_Name";
	};
	class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag
	{
		displayName = "$STR_ace_realisticnames_SLAM_Name";
	};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine
	{
		displayName = "$STR_ace_realisticnames_Claymore_Name";
	};
	class SatchelCharge_Remote_Mag: CA_Magazine
	{
		displayName = "$STR_ace_realisticnames_SatchelCharge_Name";
	};
	class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag
	{
		displayName = "$STR_ace_realisticnames_DemoCharge_Name";
	};
	class HandGrenade: CA_Magazine
	{
		displayName = "$STR_ace_realisticnames_HandGrenade_Name";
		displayNameShort = "M67";
	};
	class SmokeShell: HandGrenade
	{
		displayName = "$STR_ace_realisticnames_SmokeShell_Name";
	};
	class SmokeShellBlue: SmokeShell
	{
		displayName = "$STR_ace_realisticnames_SmokeShellBlue_Name";
	};
	class SmokeShellGreen: SmokeShell
	{
		displayName = "$STR_ace_realisticnames_SmokeShellGreen_Name";
	};
	class SmokeShellOrange: SmokeShell
	{
		displayName = "$STR_ace_realisticnames_SmokeShellOrange_Name";
	};
	class SmokeShellPurple: SmokeShell
	{
		displayName = "$STR_ace_realisticnames_SmokeShellPurple_Name";
	};
	class SmokeShellRed: SmokeShell
	{
		displayName = "$STR_ace_realisticnames_SmokeShellRed_Name";
	};
	class SmokeShellYellow: SmokeShell
	{
		displayName = "$STR_ace_realisticnames_SmokeShellYellow_Name";
	};
	class 2Rnd_Missile_AA_04_F;
	class PylonRack_1Rnd_Missile_AA_04_F: 2Rnd_Missile_AA_04_F
	{
		displayName = "AIM-9 Sidewinder";
	};
	class 4Rnd_AAA_missiles;
	class PylonRack_1Rnd_AAA_missiles: 4Rnd_AAA_missiles
	{
		displayName = "AIM-132 ASRAAM";
	};
	class 4Rnd_GAA_missiles;
	class PylonRack_1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		displayName = "AIM-120A AMRAAM";
	};
	class 6Rnd_Missile_AGM_02_F;
	class PylonRack_1Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F
	{
		displayName = "AGM-65 Maverick G";
	};
	class PylonRack_3Rnd_Missile_AGM_02_F: PylonRack_1Rnd_Missile_AGM_02_F
	{
		displayName = "AGM-65 Maverick G 3x";
	};
	class magazine_Missile_AGM_02_x1: VehicleMagazine
	{
		displayName = "AGM-65 Maverick G";
	};
	class PylonMissile_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		displayName = "AGM-65 Maverick G";
	};
	class PylonMissile_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		displayName = "AGM-65 Maverick G 2x";
	};
	class PylonRack_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		displayName = "AGM-65 Maverick G";
	};
	class PylonRack_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		displayName = "AGM-65 Maverick G 2x";
	};
	class 2Rnd_LG_scalpel;
	class PylonRack_1Rnd_LG_scalpel: 2Rnd_LG_scalpel
	{
		displayName = "9K121 Vikhr";
	};
	class PylonRack_3Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		displayName = "9K121 Vikhr 3x";
	};
	class PylonRack_4Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		displayName = "9K121 Vikhr 4x";
	};
	class PylonRack_7Rnd_Rocket_04_HE_F: 7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra 70 7x HE";
	};
	class PylonRack_7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F
	{
		displayName = "Hydra 70 7x AP";
	};
	class 12Rnd_missiles;
	class PylonRack_12Rnd_missiles: 12Rnd_missiles
	{
		displayName = "Hydra 70 12x HE";
	};
	class PylonRack_20Rnd_Rocket_03_HE_F: 20Rnd_Rocket_03_HE_F
	{
		displayName = "S-8 20x HE";
	};
	class PylonRack_20Rnd_Rocket_03_AP_F: 20Rnd_Rocket_03_AP_F
	{
		displayName = "S-8 20x AP";
	};
	class 2Rnd_Missile_AA_03_F;
	class PylonRack_1Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_03_F
	{
		displayName = "Wympel R-73";
	};
	class 4Rnd_Missile_AGM_01_F;
	class PylonRack_1Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F
	{
		displayName = "Kh-25MTP";
	};
	class 2Rnd_Bomb_03_F;
	class PylonMissile_1Rnd_Bomb_03_F: 2Rnd_Bomb_03_F
	{
		displayName = "FAB-250M-54";
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class HMG_01_base_F: StaticMGWeapon
	{
		displayName = "$STR_ace_realisticnames_HMG_01_Name";
	};
	class HMG_01_A_base_F: HMG_01_base_F
	{
		displayName = "$STR_ace_realisticnames_HMG_01_A_Name";
	};
	class HMG_01_high_base_F: HMG_01_base_F
	{
		displayName = "$STR_ace_realisticnames_HMG_01_high_Name";
	};
	class AT_01_base_F;
	class B_static_AT_F: AT_01_base_F
	{
		displayName = "$STR_ace_realisticnames_static_AT_Name";
	};
	class O_static_AT_F: AT_01_base_F
	{
		displayName = "$STR_ace_realisticnames_static_AT_Name";
	};
	class I_static_AT_F: AT_01_base_F
	{
		displayName = "$STR_ace_realisticnames_static_AT_Name";
	};
	class AA_01_base_F;
	class B_static_AA_F: AA_01_base_F
	{
		displayName = "$STR_ace_realisticnames_static_AA_Name";
	};
	class O_static_AA_F: AA_01_base_F
	{
		displayName = "$STR_ace_realisticnames_static_AA_Name";
	};
	class I_static_AA_F: AA_01_base_F
	{
		displayName = "$STR_ace_realisticnames_static_AA_Name";
	};
	class GMG_TriPod;
	class GMG_01_base_F: GMG_TriPod
	{
		displayName = "$STR_ace_realisticnames_GMG_01_Name";
	};
	class GMG_01_A_base_F: GMG_01_base_F
	{
		displayName = "$STR_ace_realisticnames_GMG_01_A_Name";
	};
	class GMG_01_high_base_F: GMG_01_base_F
	{
		displayName = "$STR_ace_realisticnames_GMG_01_high_Name";
	};
	class MRAP_01_base_F;
	class B_MRAP_01_F: MRAP_01_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_01_Name";
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F{};
	class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_01_gmg_Name";
	};
	class MRAP_01_hmg_base_F: MRAP_01_gmg_base_F{};
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_01_hmg_Name";
	};
	class MRAP_02_base_F;
	class O_MRAP_02_F: MRAP_02_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_02_Name";
	};
	class O_T_MRAP_02_ghex_F: MRAP_02_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_02_Name";
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F{};
	class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_02_hmg_Name";
	};
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_02_hmg_Name";
	};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F{};
	class O_MRAP_02_gmg_F: MRAP_02_gmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_02_gmg_Name";
	};
	class O_T_MRAP_02_gmg_ghex_F: MRAP_02_gmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_02_gmg_Name";
	};
	class MRAP_03_base_F;
	class I_MRAP_03_F: MRAP_03_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_03_Name";
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F{};
	class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_03_hmg_Name";
	};
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F{};
	class I_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		displayName = "$STR_ace_realisticnames_MRAP_03_gmg_Name";
	};
	class MBT_01_base_F;
	class B_MBT_01_base_F: MBT_01_base_F{};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		displayName = "$STR_ace_realisticnames_MBT_01_cannon_Name";
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		displayName = "$STR_ace_realisticnames_MBT_01_TUSK_Name";
	};
	class MBT_01_arty_base_F: MBT_01_base_F{};
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F{};
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F
	{
		displayName = "$STR_ace_realisticnames_MBT_01_arty_Name";
	};
	class MBT_01_mlrs_base_F: MBT_01_base_F{};
	class B_MBT_01_mlrs_base_F: MBT_01_mlrs_base_F{};
	class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F
	{
		displayName = "$STR_ace_realisticnames_MBT_01_mlrs_Name";
	};
	class MBT_02_base_F;
	class O_MBT_02_base_F: MBT_02_base_F{};
	class O_MBT_02_cannon_F: O_MBT_02_base_F
	{
		displayName = "$STR_ace_realisticnames_MBT_02_cannon_Name";
	};
	class MBT_02_arty_base_F: MBT_02_base_F{};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F{};
	class O_MBT_02_arty_F: O_MBT_02_arty_base_F
	{
		displayName = "$STR_ace_realisticnames_MBT_02_arty_Name";
	};
	class I_MBT_03_base_F;
	class I_MBT_03_cannon_F: I_MBT_03_base_F
	{
		displayName = "$STR_ace_realisticnames_MBT_03_cannon_Name";
	};
	class B_APC_Tracked_01_base_F;
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Tracked_01_rcws_Name";
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Tracked_01_AA_Name";
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Tracked_01_CRV_Name";
	};
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Tracked_02_cannon_Name";
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Tracked_02_AA_Name";
	};
	class I_APC_tracked_03_base_F;
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_tracked_03_cannon_Name";
	};
	class B_APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Wheeled_01_cannon_Name";
	};
	class APC_Wheeled_02_base_F;
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Wheeled_02_rcws_Name";
	};
	class I_APC_Wheeled_03_base_F;
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		displayName = "$STR_ace_realisticnames_APC_Wheeled_03_cannon_Name";
	};
	class Truck_01_base_F;
	class B_Truck_01_transport_F: Truck_01_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_transport_Name";
	};
	class B_Truck_01_covered_F: B_Truck_01_transport_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_covered_Name";
	};
	class B_Truck_01_mover_F: B_Truck_01_transport_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_mover_Name";
	};
	class B_Truck_01_box_F: B_Truck_01_mover_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_box_Name";
	};
	class B_Truck_01_medical_F: B_Truck_01_transport_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_medical_Name";
	};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_ammo_Name";
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_fuel_Name";
	};
	class B_Truck_01_Repair_F: B_Truck_01_mover_F
	{
		displayName = "$STR_ace_realisticnames_Truck_01_Repair_Name";
	};
	class Truck_02_transport_base_F;
	class O_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_transport_Name";
	};
	class Truck_02_base_F;
	class O_Truck_02_covered_F: Truck_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_covered_Name";
	};
	class Truck_02_Ammo_base_F;
	class O_Truck_02_ammo_F: Truck_02_Ammo_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_ammo_Name";
	};
	class Truck_02_fuel_base_F;
	class O_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_fuel_Name";
	};
	class Truck_02_box_base_F;
	class O_Truck_02_box_F: Truck_02_box_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_box_Name";
	};
	class Truck_02_medical_base_F;
	class O_Truck_02_medical_F: Truck_02_medical_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_medical_Name";
	};
	class I_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_transport_Name";
	};
	class I_Truck_02_covered_F: Truck_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_covered_Name";
	};
	class I_Truck_02_ammo_F: Truck_02_Ammo_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_ammo_Name";
	};
	class I_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_fuel_Name";
	};
	class I_Truck_02_box_F: Truck_02_box_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_box_Name";
	};
	class I_Truck_02_medical_F: Truck_02_medical_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_medical_Name";
	};
	class C_Truck_02_transport_F: Truck_02_transport_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_transport_Name";
	};
	class C_Truck_02_covered_F: Truck_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_covered_Name";
	};
	class C_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_fuel_Name";
	};
	class C_Truck_02_box_F: Truck_02_box_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_02_box_Name";
	};
	class Truck_03_base_F;
	class O_Truck_03_transport_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_transport_Name";
	};
	class O_Truck_03_covered_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_covered_Name";
	};
	class O_Truck_03_device_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_device_Name";
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_ammo_Name";
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_fuel_Name";
	};
	class O_Truck_03_repair_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_repair_Name";
	};
	class O_Truck_03_medical_F: Truck_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Truck_03_medical_Name";
	};
	class Heli_Attack_01_base_F;
	class B_Heli_Attack_01_F: Heli_Attack_01_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Attack_01_Name";
	};
	class Heli_Attack_01_dynamicLoadout_base_F;
	class B_Heli_Attack_01_dynamicLoadout_F: Heli_Attack_01_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Attack_01_Name";
	};
	class Heli_Light_01_unarmed_base_F;
	class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_01_Name";
	};
	class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_01_civil_Name";
	};
	class I_C_Heli_Light_01_civil_F: Heli_Light_01_civil_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_01_civil_Name";
	};
	class Heli_Light_01_armed_base_F;
	class B_Heli_Light_01_armed_F: Heli_Light_01_armed_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_01_armed_Name";
	};
	class Heli_Light_01_dynamicLoadout_base_F;
	class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_01_armed_Name";
	};
	class Heli_Transport_03_base_F;
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Transport_03_Name";
	};
	class Heli_Transport_03_unarmed_base_F;
	class B_Heli_Transport_03_unarmed_F: Heli_Transport_03_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Transport_03_unarmed_Name";
	};
	class Heli_Light_02_base_F;
	class O_Heli_Light_02_F: Heli_Light_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_02_Name";
	};
	class O_Heli_Light_02_v2_F: Heli_Light_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_02_v2_Name";
	};
	class Heli_Light_02_unarmed_base_F;
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_02_unarmed_Name";
	};
	class Heli_Light_02_dynamicLoadout_base_F;
	class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Light_02_Name";
	};
	class Heli_light_03_base_F;
	class I_Heli_light_03_F: Heli_light_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_light_03_Name";
	};
	class Heli_light_03_unarmed_base_F;
	class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_light_03_unarmed_Name";
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_light_03_Name";
	};
	class Heli_Transport_02_base_F;
	class I_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Heli_Transport_02_Name";
	};
	class Plane_CAS_01_base_F;
	class B_Plane_CAS_01_F: Plane_CAS_01_base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_CAS_01_Name";
	};
	class Plane_CAS_01_dynamicLoadout_base_F;
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_CAS_01_Name";
	};
	class Plane_CAS_02_base_F;
	class O_Plane_CAS_02_F: Plane_CAS_02_base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_CAS_02_Name";
	};
	class Plane_CAS_02_dynamicLoadout_base_F;
	class O_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_CAS_02_Name";
	};
	class Plane_Fighter_03_base_F;
	class I_Plane_Fighter_03_CAS_F: Plane_Fighter_03_base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_Fighter_03_CAS_Name";
	};
	class I_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_CAS_F
	{
		displayName = "$STR_ace_realisticnames_Plane_Fighter_03_AA_Name";
	};
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_Fighter_03_Name";
	};
	class Plane_Fighter_04_Base_F;
	class I_Plane_Fighter_04_F: Plane_Fighter_04_Base_F
	{
		displayName = "$STR_ace_realisticnames_Plane_Fighter_04_Name";
	};
	class UAV_02_base_F;
	class B_UAV_02_F: UAV_02_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_Name";
	};
	class O_UAV_02_F: UAV_02_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_Name";
	};
	class I_UAV_02_F: UAV_02_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_Name";
	};
	class UAV_02_CAS_base_F;
	class B_UAV_02_CAS_F: UAV_02_CAS_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_CAS_Name";
	};
	class O_UAV_02_CAS_F: UAV_02_CAS_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_CAS_Name";
	};
	class I_UAV_02_CAS_F: UAV_02_CAS_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_CAS_Name";
	};
	class UAV_02_dynamicLoadout_base_F;
	class B_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_Name";
	};
	class O_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_Name";
	};
	class I_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		displayName = "$STR_ace_realisticnames_UAV_02_Name";
	};
	class Pistol_Base_F;
	class Weapon_hgun_P07_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_P07_Name";
	};
	class Weapon_hgun_Rook40_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Rook40_Name";
	};
	class Weapon_hgun_ACPC2_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_ACPC2_Name";
	};
	class Weapon_hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_heavy_01_Name";
	};
	class Weapon_hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_heavy_02_Name";
	};
	class Weapon_hgun_Pistol_Signal_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_Signal_Name";
	};
	class Launcher_Base_F;
	class Weapon_launch_NLAW_F: Launcher_Base_F
	{
		displayName = "$STR_ace_realisticnames_launch_NLAW_Name";
	};
	class Weapon_launch_RPG32_F: Launcher_Base_F
	{
		displayName = "$STR_ace_realisticnames_launch_RPG32_Name";
	};
	class Weapon_Base_F;
	class Weapon_arifle_MX_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_Name";
	};
	class Weapon_arifle_MXC_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MXC_Name";
	};
	class Weapon_arifle_MX_GL_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_GL_Name";
	};
	class Weapon_arifle_MX_SW_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_SW_Name";
	};
	class Weapon_arifle_MXM_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MXM_Name";
	};
	class Weapon_arifle_Katiba_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Katiba_Name";
	};
	class Weapon_arifle_Katiba_C_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Katiba_C_Name";
	};
	class Weapon_arifle_Katiba_GL_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Katiba_GL_Name";
	};
	class Weapon_arifle_Mk20_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_Name";
	};
	class Weapon_arifle_Mk20_plain_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_plain_Name";
	};
	class Weapon_arifle_Mk20C_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20C_Name";
	};
	class Weapon_arifle_Mk20C_plain_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20C_plain_Name";
	};
	class Weapon_arifle_Mk20_GL_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_GL_Name";
	};
	class Weapon_arifle_Mk20_GL_plain_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_GL_plain_Name";
	};
	class Weapon_arifle_TRG21_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_TRG21_Name";
	};
	class Weapon_arifle_TRG20_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_TRG20_Name";
	};
	class Weapon_arifle_TRG21_GL_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_TRG21_GL_Name";
	};
	class Weapon_SMG_01_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_SMG_01_Name";
	};
	class Weapon_SMG_02_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_SMG_02_Name";
	};
	class Weapon_SMG_05_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_SMG_05";
	};
	class Weapon_hgun_PDW2000_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_PDW2000_Name";
	};
	class Weapon_arifle_SDAR_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SDAR_Name";
	};
	class Weapon_LMG_Mk200_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_LMG_Mk200_Name";
	};
	class Weapon_LMG_Zafir_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_LMG_Zafir_Name";
	};
	class Weapon_srifle_EBR_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_EBR_Name";
	};
	class Weapon_srifle_GM6_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_GM6_Name";
	};
	class Weapon_srifle_GM6_camo_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_GM6_camo_Name";
	};
	class Weapon_srifle_LRR_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_LRR_Name";
	};
	class Weapon_srifle_LRR_camo_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_LRR_camo_Name";
	};
	class Weapon_srifle_DMR_01_F: Weapon_Base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_01_Name";
	};
	class Item_Base_F;
	class Item_acc_flashlight: Item_Base_F
	{
		displayName = "UTG Defender 126";
	};
	class Offroad_02_unarmed_base_F;
	class C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_C_Offroad_02_unarmed";
	};
	class I_C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F
	{
		displayName = "$STR_ace_realisticnames_C_Offroad_02_unarmed";
	};
	class Plane_Civil_01_base_F;
	class C_Plane_Civil_01_F: Plane_Civil_01_base_F
	{
		displayName = "$STR_ace_realisticnames_C_Plane_Civil_01";
	};
	class C_Plane_Civil_01_racing_F: Plane_Civil_01_base_F
	{
		displayName = "$STR_ace_realisticnames_C_Plane_Civil_01_racing";
	};
	class I_C_Plane_Civil_01_F: Plane_Civil_01_base_F
	{
		displayName = "$STR_ace_realisticnames_C_Plane_Civil_01";
	};
	class UAV_04_base_F;
	class O_T_UAV_04_CAS_F: UAV_04_base_F
	{
		displayName = "$STR_ace_realisticnames_O_T_UAV_04_CAS";
	};
	class LSV_01_base_F;
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		displayName = "$STR_ace_realisticnames_lsv_01_armed";
	};
	class LSV_01_unarmed_base_F: LSV_01_base_F
	{
		displayName = "$STR_ace_realisticnames_lsv_01_unarmed";
	};
	class LSV_01_light_base_F: LSV_01_base_F
	{
		displayName = "$STR_ace_realisticnames_lsv_01_light";
	};
	class LSV_02_base_F;
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		displayName = "$STR_ace_realisticnames_lsv_02_armed";
	};
	class LSV_02_unarmed_base_F: LSV_02_base_F
	{
		displayName = "$STR_ace_realisticnames_lsv_02_unarmed";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class arifle_MX_Base_F;
	class arifle_MX_F: arifle_MX_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_Name";
	};
	class arifle_MX_Black_F: arifle_MX_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_Black_Name";
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MXC_Name";
	};
	class arifle_MXC_Black_F: arifle_MXC_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MXC_Black_Name";
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_GL_Name";
	};
	class arifle_MX_GL_Black_F: arifle_MX_GL_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_GL_Black_Name";
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_SW_Name";
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MX_SW_Black_Name";
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MXM_Name";
	};
	class arifle_MXM_Black_F: arifle_MXM_F
	{
		displayName = "$STR_ace_realisticnames_arifle_MXM_Black_Name";
	};
	class arifle_katiba_Base_F;
	class arifle_Katiba_F: arifle_katiba_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Katiba_Name";
	};
	class arifle_Katiba_GL_F: arifle_katiba_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Katiba_GL_Name";
	};
	class arifle_Katiba_C_F: arifle_katiba_Base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Katiba_C_Name";
	};
	class SDAR_base_F;
	class arifle_SDAR_F: SDAR_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SDAR_Name";
	};
	class Tavor_base_F;
	class arifle_TRG21_F: Tavor_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_TRG21_Name";
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		displayName = "$STR_ace_realisticnames_arifle_TRG21_GL_Name";
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_TRG20_Name";
	};
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_Name";
	};
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_plain_Name";
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20C_Name";
	};
	class arifle_Mk20C_plain_F: arifle_Mk20C_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20C_plain_Name";
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_GL_Name";
	};
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		displayName = "$STR_ace_realisticnames_arifle_Mk20_GL_plain_Name";
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		displayName = "$STR_ace_realisticnames_SMG_01_Name";
	};
	class SMG_02_base_F;
	class SMG_02_F: SMG_02_base_F
	{
		displayName = "$STR_ace_realisticnames_SMG_02_Name";
	};
	class pdw2000_base_F;
	class hgun_pdw2000_F: pdw2000_base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_PDW2000_Name";
	};
	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_P07_Name";
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Rook40_Name";
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_ACPC2_Name";
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_heavy_01_Name";
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_heavy_02_Name";
	};
	class hgun_Pistol_Signal_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_Signal_Name";
	};
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_LMG_Mk200_Name";
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_LMG_Zafir_Name";
	};
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_EBR_Name";
	};
	class LRR_base_F;
	class srifle_LRR_F: LRR_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_LRR_Name";
	};
	class srifle_LRR_camo_F: srifle_LRR_F
	{
		displayName = "$STR_ace_realisticnames_srifle_LRR_camo_Name";
	};
	class GM6_base_F;
	class srifle_GM6_F: GM6_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_GM6_Name";
	};
	class srifle_GM6_camo_F: srifle_GM6_F
	{
		displayName = "$STR_ace_realisticnames_srifle_GM6_camo_Name";
	};
	class DMR_01_base_F;
	class srifle_DMR_01_F: DMR_01_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_01_Name";
	};
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		displayName = "$STR_ace_realisticnames_launch_RPG32_Name";
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		displayName = "$STR_ace_realisticnames_launch_NLAW_Name";
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_DMR_02";
	};
	class srifle_DMR_02_F: DMR_02_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_02";
	};
	class srifle_DMR_02_camo_F: srifle_DMR_02_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_02_camo";
	};
	class srifle_DMR_02_sniper_F: srifle_DMR_02_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_02_sniper";
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_DMR_03";
	};
	class srifle_DMR_03_F: DMR_03_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_03";
	};
	class srifle_DMR_03_khaki_F: srifle_DMR_03_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_03_khaki";
	};
	class srifle_DMR_03_tan_F: srifle_DMR_03_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_03_tan";
	};
	class srifle_DMR_03_multicam_F: srifle_DMR_03_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_03_multicam";
	};
	class srifle_DMR_03_woodland_F: srifle_DMR_03_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_03_woodland";
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_DMR_04";
	};
	class srifle_DMR_04_F: DMR_04_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_04";
	};
	class srifle_DMR_04_Tan_F: srifle_DMR_04_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_04_Tan";
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_DMR_05";
	};
	class srifle_DMR_05_blk_F: DMR_05_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_05_blk";
	};
	class srifle_DMR_05_hex_F: srifle_DMR_05_blk_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_05_hex";
	};
	class srifle_DMR_05_tan_f: srifle_DMR_05_blk_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_05_tan";
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_DMR_06";
	};
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_06_camo";
	};
	class srifle_DMR_06_olive_F: srifle_DMR_06_camo_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_06_olive";
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_MMG_01";
	};
	class MMG_01_hex_F: MMG_01_base_F
	{
		displayName = "$STR_ace_realisticnames_MMG_01_hex";
	};
	class MMG_01_tan_F: MMG_01_hex_F
	{
		displayName = "$STR_ace_realisticnames_MMG_01_tan";
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		displayName = "$STR_ace_realisticnames_MMG_02";
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		displayName = "$STR_ace_realisticnames_MMG_02_camo";
	};
	class MMG_02_black_F: MMG_02_camo_F
	{
		displayName = "$STR_ace_realisticnames_MMG_02_black";
	};
	class MMG_02_sand_F: MMG_02_camo_F
	{
		displayName = "$STR_ace_realisticnames_MMG_02_sand";
	};
	class CannonCore;
	class gatling_20mm: CannonCore
	{
		class manual: CannonCore{};
	};
	class Twin_Cannon_20mm: gatling_20mm
	{
		displayName = "Plamen PL-20";
		class manual: manual
		{
			displayName = "Plamen PL-20";
		};
	};
	class gatling_30mm_base: CannonCore
	{
		displayName = "GSh-3-30";
		class LowROF: Mode_FullAuto
		{
			displayName = "GSh-3-30";
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		displayName = "GAU-8";
		class LowROF: Mode_FullAuto
		{
			displayName = "GAU-8";
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		displayName = "GSh-301";
		class LowROF: Mode_FullAuto
		{
			displayName = "GSh-301";
		};
	};
	class RocketPods;
	class Missile_AA_04_Plane_CAS_01_F: RocketPods
	{
		displayName = "AIM-9 Sidewinder";
	};
	class Missile_AA_03_Plane_CAS_02_F: Missile_AA_04_Plane_CAS_01_F
	{
		displayName = "Wympel R-73";
	};
	class MissileLauncher;
	class Missile_AGM_02_Plane_CAS_01_F: MissileLauncher
	{
		displayName = "AGM-65 Maverick G";
	};
	class weapon_AGM_65Launcher: RocketPods
	{
		displayName = "AGM-65 Maverick G";
	};
	class Missile_AGM_01_Plane_CAS_02_F: Missile_AGM_02_Plane_CAS_01_F
	{
		displayName = "Kh-25MTP";
	};
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	{
		displayName = "Hydra 70";
		class Burst: RocketPods
		{
			displayName = "Hydra 70";
		};
	};
	class Rocket_04_AP_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra 70";
	};
	class Rocket_03_HE_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "S-8";
		class Burst: Burst
		{
			displayName = "S-8";
		};
	};
	class Rocket_03_AP_Plane_CAS_02_F: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "S-8";
		class Burst: Burst
		{
			displayName = "S-8";
		};
	};
	class rockets_Skyfire: RocketPods
	{
		displayName = "Skyfire-70";
		class Burst: RocketPods
		{
			displayName = "Skyfire-70";
		};
	};
	class missiles_DAR: RocketPods
	{
		displayName = "Hydra 70";
		class Burst: RocketPods
		{
			displayName = "Hydra 70";
		};
	};
	class missiles_DAGR: RocketPods
	{
		displayName = "DAGR";
		class Burst: RocketPods
		{
			displayName = "DAGR";
		};
	};
	class missiles_ASRAAM: MissileLauncher
	{
		displayName = "AIM-132 ASRAAM";
	};
	class missiles_Zephyr: MissileLauncher
	{
		displayName = "AIM-120A AMRAAM";
	};
	class missiles_SCALPEL: RocketPods
	{
		displayName = "9K121 Vikhr";
	};
	class Bomb_04_Plane_CAS_01_F;
	class Bomb_03_Plane_CAS_02_F: Bomb_04_Plane_CAS_01_F
	{
		displayName = "FAB-250M-54";
	};
	class MGunCore;
	class M134_minigun: MGunCore
	{
		displayName = "2x M134 Minigun";
	};
	class LMG_RCWS;
	class MGun;
	class LMG_Minigun: LMG_RCWS
	{
		displayName = "M134 Minigun";
		class manual: MGun
		{
			displayName = "M134 Minigun";
		};
	};
	class HMG_127: LMG_RCWS
	{
		displayName = "M2";
		class manual: MGun
		{
			displayName = "M2";
		};
	};
	class HMG_01: HMG_127
	{
		displayName = "XM312";
	};
	class HMG_M2: HMG_01
	{
		displayName = "M2";
	};
	class HMG_NSVT: HMG_127
	{
		displayName = "NSVT";
		class manual: manual
		{
			displayName = "NSVT";
		};
	};
	class GMG_F;
	class GMG_20mm: GMG_F
	{
		displayName = "XM307";
		class manual: GMG_F
		{
			displayName = "XM307";
		};
	};
	class GMG_40mm: GMG_F
	{
		displayName = "Mk 19";
		class manual: GMG_F
		{
			displayName = "Mk 19";
		};
	};
	class autocannon_35mm: CannonCore
	{
		displayName = "GDF-001";
		class manual: CannonCore
		{
			displayName = "GDF-001";
		};
	};
	class missiles_titan: MissileLauncher
	{
		displayName = "Mini-Spike";
	};
	class mortar_155mm_AMOS: CannonCore
	{
		displayName = "L/52";
	};
	class rockets_230mm_GAT: RocketPods
	{
		displayName = "M269";
	};
	class cannon_120mm: CannonCore
	{
		class player;
		displayName = "MG251";
	};
	class cannon_120mm_long: cannon_120mm
	{
		displayName = "L/55";
		class player: player{};
	};
	class cannon_105mm: CannonCore
	{
		displayName = "M68";
		class player: Mode_SemiAuto
		{
			displayName = "M68";
		};
	};
	class cannon_125mm: CannonCore
	{
		displayName = "2A46";
	};
	class LMG_coax: LMG_RCWS
	{
		displayName = "PKT";
	};
	class LMG_coax_ext: LMG_coax{};
	class ACE_LMG_coax_ext_MAG58: LMG_coax_ext
	{
		displayName = "MAG 58M";
	};
	class ACE_LMG_coax_MAG58_mem3: LMG_coax
	{
		displayName = "MAG 58M";
	};
	class ACE_LMG_coax_L94A1_mem3: LMG_coax
	{
		displayName = "L94A1";
	};
	class autocannon_Base_F;
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		displayName = "Mk44 Bushmaster II";
		class AP: autocannon_Base_F
		{
			displayName = "Mk44 Bushmaster II";
		};
		class HE: autocannon_Base_F
		{
			displayName = "Mk44 Bushmaster II";
		};
	};
	class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS
	{
		displayName = "L/60 Bofors Autocannon";
		class AP: AP
		{
			displayName = "L/60 Bofors Autocannon";
		};
		class HE: HE
		{
			displayName = "L/60 Bofors Autocannon";
		};
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		displayName = "Mk44 Bushmaster II";
		class AP: autocannon_Base_F
		{
			displayName = "Mk44 Bushmaster II";
		};
		class HE: autocannon_Base_F
		{
			displayName = "Mk44 Bushmaster II";
		};
	};
	class autocannon_30mm: autocannon_30mm_CTWS
	{
		displayName = "L21A1 RARDEN";
		class AP: AP
		{
			displayName = "L21A1 RARDEN";
		};
		class HE: HE
		{
			displayName = "L21A1 RARDEN";
		};
	};
	class Itemcore;
	class acc_flashlight: ItemCore
	{
		displayName = "UTG Defender 126";
	};
	class arifle_CTAR_base_F;
	class arifle_CTAR_blk_F: arifle_CTAR_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTAR_blk";
	};
	class arifle_CTAR_ghex_F: arifle_CTAR_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTAR_ghex";
	};
	class arifle_CTAR_hex_F: arifle_CTAR_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTAR_hex";
	};
	class arifle_CTAR_GL_base_F;
	class arifle_CTAR_GL_blk_F: arifle_CTAR_GL_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTAR_GL_blk";
	};
	class arifle_CTAR_GL_ghex_F: arifle_CTAR_GL_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTAR_GL_ghex";
	};
	class arifle_CTAR_GL_hex_F: arifle_CTAR_GL_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTAR_GL_hex";
	};
	class arifle_CTARS_base_F;
	class arifle_CTARS_blk_F: arifle_CTARS_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTARS_blk";
	};
	class arifle_CTARS_ghex_F: arifle_CTARS_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTARS_ghex";
	};
	class arifle_CTARS_hex_F: arifle_CTARS_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_CTARS_hex";
	};
	class DMR_07_base_F;
	class srifle_DMR_07_blk_F: DMR_07_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_07_blk";
	};
	class srifle_DMR_07_ghex_F: DMR_07_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_07_ghex";
	};
	class srifle_DMR_07_hex_F: DMR_07_base_F
	{
		displayName = "$STR_ace_realisticnames_srifle_DMR_07_hex";
	};
	class srifle_GM6_ghex_F: srifle_GM6_F
	{
		displayName = "$STR_ace_realisticnames_srifle_GM6_ghex";
	};
	class LMG_03_base_F;
	class LMG_03_F: LMG_03_base_F
	{
		displayName = "$STR_ace_realisticnames_LMG_03";
	};
	class srifle_LRR_tna_F: srifle_LRR_camo_F
	{
		displayName = "$STR_ace_realisticnames_srifle_LRR_tna";
	};
	class SMG_05_base_F;
	class SMG_05_F: SMG_05_base_F
	{
		displayName = "$STR_ace_realisticnames_SMG_05";
	};
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_01_blk";
	};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_01_khk";
	};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_01_snd";
	};
	class arifle_SPAR_01_GL_base_F;
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_01_GL_blk";
	};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_01_GL_khk";
	};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_01_GL_snd";
	};
	class arifle_SPAR_02_base_F;
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_02_blk";
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_02_khk";
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_02_snd";
	};
	class arifle_SPAR_03_base_F;
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_03_blk";
	};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_03_khk";
	};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F
	{
		displayName = "$STR_ace_realisticnames_arifle_SPAR_03_snd";
	};
	class launch_RPG32_ghex_F: launch_RPG32_F
	{
		displayName = "$STR_ace_realisticnames_launch_RPG32_ghex";
	};
	class hgun_P07_khk_F: hgun_P07_F
	{
		displayName = "$STR_ace_realisticnames_hgun_P07_khk";
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		displayName = "$STR_ace_realisticnames_hgun_Pistol_01";
	};
};
