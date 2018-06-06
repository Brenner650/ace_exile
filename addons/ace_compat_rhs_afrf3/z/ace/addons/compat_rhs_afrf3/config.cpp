////////////////////////////////////////////////////////////////////
//DeRap: ace_compat_rhs_afrf3\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:29 2018 : 'file' last modified on Mon Apr 16 21:50:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_compat_rhs_afrf3
	{
		name = "ACE3 - RHS AFRF Compatibility";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_rearm","ace_refuel","ace_repair","rhs_c_weapons","rhs_c_troops","rhs_c_bmd","rhs_c_bmp","rhs_c_bmp3","rhs_c_a2port_armor","rhs_c_btr","rhs_c_sprut","rhs_c_t72","rhs_c_tanks","rhs_c_a2port_air","rhs_c_a2port_car","rhs_c_cars","rhs_c_trucks","rhs_c_2s3","rhs_c_rva","rhs_c_heavyweapons"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Ruthberg","GitHawk","BaerMitUmlaut","commy2","Skengman2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"rhs_B_545x39_Ball","rhs_B_545x39_Ball_Tracer_Green","rhs_B_762x54_Ball","rhs_B_762x54_Ball_Tracer_Green","rhs_B_762x54_7N1_Ball","rhs_B_762x39_Ball","rhs_B_762x39_Tracer","rhs_B_9x19_7N21","rhs_B_9x18_57N181S","rhs_B_545x39_7U1_Ball","rhs_B_762x39_U_Ball","rhs_B_9x39_SP5","rhs_ammo_127x108mm_x5","rhs_ammo_rgd5","rhs_ammo_rgn_base","rhs_ammo_rgn","rhs_ammo_rgn_sub","rhs_ammo_rgn_exp","rhs_ammo_fakel","rhs_ammo_fakels","rhs_ammo_zarya2","rhs_ammo_plamyam","R_PG32V_F","rhs_rpg26_rocket","rhs_rpg7v2_pg7vl","rhs_rpg7v2_og7v","rhs_rpg7v2_tbg7v","rhs_rshg2_rocket","rhs_g_vog25","rhs_g_vg40tb","rhs_g_vg40sz","rhs_g_gdm40","rhs_g_vg40md_white"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_556x45_Ball;
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.42792;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {780,880,920};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.22704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {785,883,925};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class B_762x51_Ball;
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.8496;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {700,800,820,833};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680,750,798,800};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.8496;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {700,800,820,833};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650,716,750};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.5816;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {650,716,750};
		ACE_barrelLengths[] = {254.0,414.02,508.0};
	};
	class B_9x21_Ball;
	class rhs_B_9x19_7N21: B_9x21_Ball
	{
		ACE_caliber = 9.017;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 5.19696;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.14};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {445,460,480};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
	class rhs_B_9x18_57N181S: B_9x21_Ball
	{
		ACE_caliber = 9.271;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 6.00048;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.125};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {298,330,350};
		ACE_barrelLengths[] = {96.52,127.0,228.6};
	};
	class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball
	{
		ACE_ammoTempMuzzleVelocityShifts[] = {-8.85,-8.49,-7.61667,-6.70667,-5.66,-4.26667,-2.54667,-0.51,1.98667,5.05667,8.73};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball
	{
		ACE_ammoTempMuzzleVelocityShifts[] = {-8.85,-8.49,-7.61667,-6.70667,-5.66,-4.26667,-2.54667,-0.51,1.98667,5.05667,8.73};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class rhs_B_9x39_SP5: rhs_B_762x39_Ball
	{
		ACE_ammoTempMuzzleVelocityShifts[] = {};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class SubmunitionBase;
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		ACE_rearm_caliber = 13;
	};
	class GrenadeHand;
	class rhs_ammo_rgd5: GrenadeHand
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 200;
		ace_frag_charge = 110;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_small_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class rhs_ammo_rgn_base: rhs_ammo_rgd5
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 193;
		ace_frag_charge = 97;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class rhs_ammo_rgn: rhs_ammo_rgn_base
	{
		ace_advanced_throwing_replaceWith = "rhs_ammo_rgn_base";
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
	class rhs_ammo_rgn_sub: rhs_ammo_rgn_base{};
	class rhs_ammo_rgn_exp: rhs_ammo_rgn_base{};
	class rhs_ammo_fakel: GrenadeHand
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
	class rhs_ammo_fakels: rhs_ammo_fakel{};
	class rhs_ammo_zarya2: rhs_ammo_fakels{};
	class rhs_ammo_plamyam: rhs_ammo_fakels{};
	class RocketBase;
	class R_PG32V_F: RocketBase{};
	class rhs_rpg26_rocket: R_PG32V_F{};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket{};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 400;
		ace_frag_charge = 210;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_medium_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
	class G_40mm_HE;
	class rhs_g_vog25: G_40mm_HE{};
	class rhs_g_vg40tb: rhs_g_vog25
	{
		ace_frag_force = 0;
	};
	class rhs_g_vg40sz: rhs_g_vog25
	{
		ace_frag_force = 0;
	};
	class rhs_g_gdm40: rhs_g_vog25
	{
		ace_frag_force = 0;
	};
	class rhs_g_vg40md_white: rhs_g_vog25
	{
		ace_frag_force = 0;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_compat_rhs_afrf3
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\compat_rhs_afrf3\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_compat_rhs_afrf3
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\compat_rhs_afrf3\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_compat_rhs_afrf3
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\compat_rhs_afrf3\XEH_postInit.sqf'";
	};
};
class cfgMagazines
{
	class VehicleMagazine;
	class rhs_30Rnd_545x39_AK;
	class rhs_100Rnd_762x54mmR: rhs_30Rnd_545x39_AK
	{
		ace_isbelt = 1;
	};
	class rhs_mag_127x108mm_50: VehicleMagazine
	{
		ace_isbelt = 1;
	};
	class rhs_mag_127x108mm_150: rhs_mag_127x108mm_50
	{
		ace_isbelt = 0;
	};
	class rhs_mag_127x108mm_1470: rhs_mag_127x108mm_50
	{
		ace_isbelt = 0;
	};
};
class CfgWeapons
{
	class NVGoggles;
	class rhs_1PN138: NVGoggles
	{
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius = 0.13;
	};
	class hgun_Rook40_F;
	class rhs_weap_pya: hgun_Rook40_F
	{
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 111.76;
	};
	class Pistol_Base_F;
	class rhs_weap_makarov_pm: rhs_weap_pya
	{
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 93.472;
	};
	class rhs_weap_ak74m_Base_F;
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		ACE_RailHeightAboveBore = -0.456233;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
	};
	class rhs_weap_akm: rhs_weap_ak74m
	{
		ACE_RailHeightAboveBore = -0.456233;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
	};
	class rhs_weap_aks74;
	class rhs_weap_aks74u: rhs_weap_aks74
	{
		ACE_RailHeightAboveBore = -0.30262;
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 210.82;
	};
	class rhs_weap_svd: rhs_weap_ak74m
	{
		ACE_RailHeightAboveBore = -0.617396;
		ACE_barrelTwist = 238.76;
		ACE_barrelLength = 619.76;
	};
	class rhs_weap_svdp;
	class rhs_weap_svdp_npz: rhs_weap_svdp
	{
		ACE_RailHeightAboveBore = 4.3348;
	};
	class rhs_weap_svdp_wd: rhs_weap_svdp
	{
		ACE_RailHeightAboveBore = -0.617396;
	};
	class rhs_weap_svdp_wd_npz: rhs_weap_svdp_wd
	{
		ACE_RailHeightAboveBore = 4.3348;
	};
	class rhs_weap_svds: rhs_weap_svdp
	{
		ACE_RailHeightAboveBore = -0.617396;
		ACE_barrelTwist = 238.76;
		ACE_barrelLength = 563.88;
	};
	class rhs_weap_svds_npz: rhs_weap_svds
	{
		ACE_RailHeightAboveBore = 4.3348;
	};
	class rhs_pkp_base;
	class rhs_weap_pkp: rhs_pkp_base
	{
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 657.86;
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 645.16;
	};
	class rhs_weap_rpk74m: rhs_weap_pkp
	{
		ACE_barrelTwist = 195.072;
		ACE_barrelLength = 589.28;
	};
	class rhs_weap_orsis_Base_F;
	class rhs_weap_t5000: rhs_weap_orsis_Base_F
	{
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 698.5;
		ACE_RailHeightAboveBore = 2.12198;
	};
	class rhs_acc_sniper_base;
	class rhs_acc_pso1m2: rhs_acc_sniper_base
	{
		ACE_ScopeHeightAboveRail = 4.41386;
		ACE_ScopeAdjust_Vertical[] = {0,0};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.5;
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
	};
	class rhs_acc_pso1m21: rhs_acc_sniper_base
	{
		ACE_ScopeHeightAboveRail = 7.75566;
		ACE_ScopeAdjust_Vertical[] = {0,0};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.5;
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class rhs_acc_dh520x56: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.71476;
		ACE_ScopeAdjust_Vertical[] = {0,33};
		ACE_ScopeAdjust_Horizontal[] = {-9,9};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class dedal_520
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class Launcher_Base_F;
	class rhs_weap_rpg7: Launcher_Base_F
	{
		ace_reloadlaunchers_enabled = 1;
	};
	class H_HelmetB;
	class rhs_tsh4: H_HelmetB
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	class rhs_zsh7a: H_HelmetB
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	class rhs_gssh18: H_HelmetB
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.5;
	};
	class rhs_weap_d81;
	class rhs_weap_2a70: rhs_weap_d81
	{
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.5;
	};
	class cannon_120mm;
	class rhs_weap_2a28_base: cannon_120mm
	{
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.5;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
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
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions{};
		};
	};
	class Car_F: Car
	{
		class ViewPilot;
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class CommanderOptics;
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class rhs_bmd_base: Tank_F
	{
		ace_refuel_fuelCapacity = 300;
	};
	class rhs_bmp1tank_base: Tank_F
	{
		ace_map_vehicleLightColor[] = {0,1,0,0.1};
		ace_refuel_fuelCapacity = 460;
	};
	class rhs_bmp3tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 460;
	};
	class rhs_btr_base: Wheeled_APC_F
	{
		ace_map_vehicleLightColor[] = {0,0,1,0.1};
		ace_refuel_fuelCapacity = 300;
	};
	class rhs_a3spruttank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 400;
	};
	class rhs_a3t72tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 1200;
	};
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint"}}};
	};
	class rhs_t72bc_tv: rhs_a3t72tank_base
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint","era_32_hitpoint"}}};
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint","era_32_hitpoint"}}};
	};
	class rhs_tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 1200;
	};
	class rhs_infantry_msv_base;
	class rhs_pilot_base: rhs_infantry_msv_base
	{
		ace_gforcecoef = 0.55;
	};
	class O_Plane_CAS_02_F;
	class RHS_su25_base: O_Plane_CAS_02_F
	{
		ace_refuel_fuelCapacity = 3600;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H{};
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		ace_map_vehicleLightColor[] = {1,0,0,0.1};
		ace_refuel_fuelCapacity = 3700;
		ace_fastroping_enabled = 0;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers;
		};
	};
	class RHS_Mi8amt_base: RHS_Mi8_base
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{-1.13,4.67,-0.89}};
		ace_fastroping_onCut = "ace_compat_rhs_afrf3_fnc_onCut";
		ace_fastroping_onPrepare = "ace_compat_rhs_afrf3_fnc_onPrepare";
		class UserActions
		{
			class openDoor;
			class closeDoor_L: openDoor
			{
				condition = "(this doorPhase 'LeftDoor' > 0.5) && {alive this} && {!(this getVariable [""ace_fastroping_doorsLocked"", false])}";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getOut = "if !((_this select 0) getVariable [""ace_fastroping_doorsLocked"",false]) then {_this call rhs_fnc_mi8_doors}";
			};
		};
	};
	class RHS_Mi8_VVS_Base: RHS_Mi8_base{};
	class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base{};
	class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{-1.13,4.67,-0.89}};
		ace_fastroping_onCut = "ace_compat_rhs_afrf3_fnc_onCut";
		ace_fastroping_onPrepare = "ace_compat_rhs_afrf3_fnc_onPrepare";
		class UserActions
		{
			class openDoor_L;
			class closeDoor_L: openDoor_L
			{
				condition = "(this doorPhase 'LeftDoor' > 0.5) && {alive this} && {!(this getVariable [""ace_fastroping_doorsLocked"", false])}";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getOut = "if !((_this select 0) getVariable [""ace_fastroping_doorsLocked"",false]) then {_this call rhs_fnc_mi8_doors}";
			};
		};
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F{};
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		ace_refuel_fuelCapacity = 1870;
		ace_fastroping_enabled = 0;
	};
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		ace_map_vehicleLightColor[] = {1,0,0,0.1};
		ace_refuel_fuelCapacity = 1851;
		ace_fastroping_enabled = 0;
	};
	class rhs_t80b: rhs_tank_base
	{
		ace_refuel_fuelCapacity = 1100;
	};
	class rhs_t80bv: rhs_t80b
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint"}}};
	};
	class rhs_t80a: rhs_t80bv{};
	class rhs_t80u: rhs_t80a
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint","era_32_hitpoint","era_33_hitpoint","era_34_hitpoint","era_35_hitpoint"}}};
	};
	class rhs_t80uk: rhs_t80u
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint","era_32_hitpoint","era_33_hitpoint","era_34_hitpoint","era_35_hitpoint","era_36_hitpoint"}}};
	};
	class rhs_t80ue1: rhs_t80a
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint","era_32_hitpoint","era_33_hitpoint","era_34_hitpoint","era_35_hitpoint","era_36_hitpoint"}}};
	};
	class rhs_t80um: rhs_t80u
	{
		ace_repair_hitpointPositions[] = {{"era_1_hitpoint",{0,0,0}}};
		ace_repair_hitpointGroups[] = {{"era_1_hitpoint",{"era_2_hitpoint","era_3_hitpoint","era_4_hitpoint","era_5_hitpoint","era_6_hitpoint","era_7_hitpoint","era_8_hitpoint","era_9_hitpoint","era_10_hitpoint","era_11_hitpoint","era_12_hitpoint","era_13_hitpoint","era_14_hitpoint","era_15_hitpoint","era_16_hitpoint","era_17_hitpoint","era_18_hitpoint","era_19_hitpoint","era_20_hitpoint","era_21_hitpoint","era_22_hitpoint","era_23_hitpoint","era_24_hitpoint","era_25_hitpoint","era_26_hitpoint","era_27_hitpoint","era_28_hitpoint","era_29_hitpoint","era_30_hitpoint","era_31_hitpoint","era_32_hitpoint","era_33_hitpoint","era_34_hitpoint","era_35_hitpoint","era_36_hitpoint"}}};
	};
	class Truck_F: Car_F{};
	class RHS_Ural_BaseTurret: Truck_F
	{
		ace_refuel_fuelCapacity = 360;
	};
	class RHS_Ural_Base: RHS_Ural_BaseTurret{};
	class RHS_Ural_MSV_Base: RHS_Ural_Base{};
	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base{};
	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{-0.05,-3.6,-0.45}};
		ace_refuel_fuelCargo = 10000;
	};
	class RHS_Ural_Repair_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		transportRepair = 0;
		ace_repair_canRepair = 1;
	};
	class rhs_truck: Truck_F
	{
		ace_refuel_fuelCapacity = 210;
	};
	class rhs_gaz66_vmf: rhs_truck{};
	class rhs_gaz66_repair_base: rhs_gaz66_vmf
	{
		transportRepair = 0;
		ace_repair_canRepair = 1;
	};
	class rhs_gaz66_ammo_base: rhs_gaz66_vmf
	{
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1200;
	};
	class MRAP_02_base_F;
	class rhs_tigr_base: MRAP_02_base_F
	{
		ace_refuel_fuelCapacity = 138;
	};
	class Offroad_01_base_f;
	class RHS_UAZ_Base: Offroad_01_base_f
	{
		ace_refuel_fuelCapacity = 78;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class rhs_zsutank_base: APC_Tracked_02_base_F
	{
		ace_refuel_fuelCapacity = 515;
	};
	class rhs_btr60_base: rhs_btr_base
	{
		ace_refuel_fuelCapacity = 290;
	};
	class rhs_btr70_vmf: rhs_btr_base
	{
		ace_refuel_fuelCapacity = 350;
	};
	class rhs_btr70_msv: rhs_btr70_vmf{};
	class rhs_btr80_msv: rhs_btr70_msv
	{
		ace_refuel_fuelCapacity = 300;
	};
	class rhs_2s3tank_base: Tank_F
	{
		ace_refuel_fuelCapacity = 830;
	};
	class OTR21_Base: Truck_F
	{
		ace_refuel_fuelCapacity = 500;
	};
};
