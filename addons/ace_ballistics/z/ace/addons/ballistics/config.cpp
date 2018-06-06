////////////////////////////////////////////////////////////////////
//DeRap: ace_ballistics\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:53 2018 : 'file' last modified on Mon Apr 16 21:42:12 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_ballistics
	{
		name = "ACE3 - Ballistics";
		units[] = {"ACE_TargetWall","ACE_Box_Ammo"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"BulletBase","B_556x45_Ball","ACE_556x45_Ball_Mk262","ACE_556x45_Ball_Mk318","ACE_556x45_Ball_M995_AP","ACE_B_556x45_Ball_Tracer_Dim","B_545x39_Ball_F","B_56x15_dual","B_580x42_Ball_F","B_65x39_Caseless","ACE_65x39_Caseless_Tracer_Dim","ACE_65x39_Caseless_green_Tracer_Dim","ACE_65x47_Ball_Scenar","ACE_65_Creedmor_Ball","B_65x39_Minigun_Caseless","B_762x51_Ball","ACE_B_762x51_Tracer_Dim","ACE_762x51_Ball_M118LR","ACE_762x51_Ball_Mk316_Mod_0","ACE_762x51_Ball_Mk319_Mod_0","ACE_762x51_Ball_M993_AP","ACE_762x51_Ball_Subsonic","ACE_762x67_Ball_Mk248_Mod_0","ACE_762x67_Ball_Mk248_Mod_1","ACE_762x67_Ball_Berger_Hybrid_OTM","B_762x54_Ball","ACE_762x54_Ball_7T2","B_762x39_Ball_F","B_9x21_Ball","B_9x21_Ball_Tracer_Green","ACE_9x19_Ball","B_93x64_Ball","B_408_Ball","ACE_408_Ball","B_338_Ball","B_338_NM_Ball","ACE_338_Ball","ACE_338_Ball_API526","B_127x33_Ball","B_127x54_Ball","B_127x99_Ball","ACE_127x99_API","ACE_127x99_Ball_AMAX","B_127x108_Ball","B_127x108_APDS","B_45ACP_Ball","B_50BW_Ball_F","B_19mm_HE","B_30mm_HE","B_20mm","B_25mm","B_30mm_AP","B_35mm_AA","Sh_120mm_HE","Sh_120mm_APFSDS","Gatling_30mm_HE_Plane_CAS_01_F"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_ballistics
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ballistics\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_ballistics
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ballistics\XEH_preInit.sqf'";
	};
};
class CfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore
	{
		timeToLive = 6;
	};
	class B_556x45_Ball: BulletBase
	{
		airFriction = -0.00130094;
		tracerScale = 1;
		tracerStartTime = 0.073;
		tracerEndTime = 1.57123;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21.0,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[] = {210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508.0,609.6};
	};
	class ACE_556x45_Ball_Mk262: B_556x45_Ball
	{
		airFriction = -0.00111805;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.9896;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.361};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {624,816,832,838};
		ACE_barrelLengths[] = {190.5,368.3,457.2,508.0};
	};
	class ACE_556x45_Ball_Mk318: B_556x45_Ball
	{
		airFriction = -0.0012588;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.307};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {780,886,950};
		ACE_barrelLengths[] = {254.0,393.7,508.0};
	};
	class ACE_556x45_Ball_M995_AP: B_556x45_Ball
	{
		airFriction = -0.00126182;
		caliber = 1.6;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.5359235;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820,865,880};
		ACE_barrelLengths[] = {254.0,368.3,508.0};
	};
	class B_556x45_Ball_Tracer_Red;
	class ACE_B_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red
	{
		nvgOnly = 1;
	};
	class B_545x39_Ball_F: BulletBase
	{
		airFriction = -0.00119458;
		ACE_caliber = 5.588;
		ACE_bulletLength = 21.59;
		ACE_bulletMass = 3.42792;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.168};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {735,883,892};
		ACE_barrelLengths[] = {206.5,414.02,508.0};
	};
	class B_56x15_dual: BulletBase
	{
		tracerScale = 0.5;
	};
	class B_580x42_Ball_F: BulletBase
	{
		airFriction = -0.00121087;
		ACE_caliber = 5.9944;
		ACE_bulletLength = 24.2;
		ACE_bulletMass = 4.15;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.156};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {790,930,950};
		ACE_barrelLengths[] = {369.0,463.0,600.0};
	};
	class B_65x39_Caseless: BulletBase
	{
		airFriction = -0.00077363;
		tracerScale = 1.1;
		ACE_caliber = 6.706;
		ACE_bulletLength = 32.893;
		ACE_bulletMass = 7.9704;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.263};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {730,760,788,800,810,830};
		ACE_barrelLengths[] = {254.0,406.4,508.0,609.6,660.4,762.0};
	};
	class B_65x39_Case_yellow;
	class ACE_65x39_Caseless_Tracer_Dim: B_65x39_Case_yellow
	{
		nvgOnly = 1;
	};
	class B_65x39_Caseless_green;
	class ACE_65x39_Caseless_green_Tracer_Dim: B_65x39_Caseless_green
	{
		nvgOnly = 1;
	};
	class ACE_65x47_Ball_Scenar: B_65x39_Caseless
	{
		airFriction = -0.00069003;
		caliber = 0.9;
		ACE_caliber = 6.706;
		ACE_bulletLength = 34.646;
		ACE_bulletMass = 9.0072;
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.29};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {730,760,790,820,830};
		ACE_barrelLengths[] = {254.0,406.4,508.0,609.6,660.4};
	};
	class ACE_65_Creedmor_Ball: B_65x39_Caseless
	{
		airFriction = -0.00062437;
		caliber = 1.1;
		ACE_caliber = 6.706;
		ACE_bulletLength = 36.22;
		ACE_bulletMass = 9.072;
		ACE_muzzleVelocityVariationSD = 0.3;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.317};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750,820,840,852,860};
		ACE_barrelLengths[] = {254.0,406.4,508.0,609.6,660.4};
	};
	class SubmunitionBullet;
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		tracerScale = 1.1;
	};
	class B_762x51_Ball: BulletBase
	{
		airFriction = -0.00103711;
		tracerScale = 1.2;
		tracerStartTime = 0.073;
		tracerEndTime = 2.15957;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700,800,820,833,845};
		ACE_barrelLengths[] = {254.0,406.4,508.0,609.6,660.4};
	};
	class B_762x51_Tracer_Yellow;
	class ACE_B_762x51_Tracer_Dim: B_762x51_Tracer_Yellow
	{
		nvgOnly = 1;
	};
	class ACE_762x51_Ball_M118LR: B_762x51_Ball
	{
		airFriction = -0.00085157;
		caliber = 1.8;
		hit = 16;
		typicalSpeed = 790;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 11.34;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750,780,790,794};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class ACE_762x51_Ball_Mk316_Mod_0: B_762x51_Ball
	{
		airFriction = -0.00084311;
		caliber = 1.8;
		hit = 16;
		typicalSpeed = 790;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 11.34;
		ACE_muzzleVelocityVariationSD = 0.45;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3.0,5.2};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {775,790,805,810};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class ACE_762x51_Ball_Mk319_Mod_0: B_762x51_Ball
	{
		airFriction = -0.00104515;
		caliber = 1.5;
		hit = 14;
		typicalSpeed = 900;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.424;
		ACE_muzzleVelocityVariationSD = 0.45;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.377};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {838,892,910};
		ACE_barrelLengths[] = {330.2,406.4,508.0};
	};
	class ACE_762x51_Ball_M993_AP: B_762x51_Ball
	{
		airFriction = -0.0010939;
		caliber = 2.2;
		hit = 11;
		typicalSpeed = 910;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.229462;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.359};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {875,910,930};
		ACE_barrelLengths[] = {330.2,406.4,508.0};
	};
	class ACE_762x51_Ball_Subsonic: B_762x51_Ball
	{
		airFriction = -0.00060194;
		caliber = 1;
		hit = 6;
		typicalSpeed = 320;
		ACE_caliber = 7.823;
		ACE_bulletLength = 34.036;
		ACE_bulletMass = 12.96;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.235};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {305,325,335,340};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
	class ACE_762x67_Ball_Mk248_Mod_0: B_762x51_Ball
	{
		airFriction = -0.00072468;
		caliber = 1.8;
		hit = 17;
		typicalSpeed = 900;
		ACE_caliber = 7.823;
		ACE_bulletLength = 34.366;
		ACE_bulletMass = 12.312;
		ACE_muzzleVelocityVariationSD = 0.45;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3.0,5.2};
		ACE_ballisticCoefficients[] = {0.268};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {865,900,924};
		ACE_barrelLengths[] = {508.0,609.6,660.4};
	};
	class ACE_762x67_Ball_Mk248_Mod_1: B_762x51_Ball
	{
		airFriction = -0.00063027;
		caliber = 1.9;
		hit = 18;
		typicalSpeed = 867;
		ACE_caliber = 7.823;
		ACE_bulletLength = 37.821;
		ACE_bulletMass = 14.256;
		ACE_muzzleVelocityVariationSD = 0.45;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3.0,5.2};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {847,867,877};
		ACE_barrelLengths[] = {508.0,609.6,660.4};
	};
	class ACE_762x67_Ball_Berger_Hybrid_OTM: B_762x51_Ball
	{
		airFriction = -0.00055262;
		caliber = 2.0;
		hit = 19;
		typicalSpeed = 853;
		ACE_caliber = 7.823;
		ACE_bulletLength = 40.691;
		ACE_bulletMass = 14.904;
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.368};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {800,853,884};
		ACE_barrelLengths[] = {508.0,609.6,660.4};
	};
	class B_762x54_Ball: B_762x51_Ball
	{
		airFriction = -0.00101071;
		typicalSpeed = 835;
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.8496;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {760,795,835,865};
		ACE_barrelLengths[] = {406.4,508.0,604.5,736.6};
	};
	class B_762x54_Tracer_Green;
	class ACE_762x54_Ball_7T2: B_762x54_Tracer_Green
	{
		airFriction = -0.00103739;
		typicalSpeed = 800;
		tracerStartTime = 0.073;
		tracerEndTime = 3;
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.6552;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.395};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {735,770,809,838};
		ACE_barrelLengths[] = {406.4,508.0,604.5,736.6};
	};
	class B_762x39_Ball_F: BulletBase
	{
		airFriction = -0.00154815;
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
	class B_9x21_Ball: BulletBase
	{
		airFriction = -0.00211064;
		tracerScale = 0.5;
		ACE_caliber = 9.042;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 7.452;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.17};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {380,390,420,435};
		ACE_barrelLengths[] = {93.5,101.6,127.0,228.6};
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		tracerScale = 0.5;
	};
	class ACE_9x19_Ball: B_9x21_Ball
	{
		airFriction = -0.00201185;
		ACE_caliber = 9.017;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.165};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {340,370,400};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
	class B_93x64_Ball: BulletBase
	{
		airFriction = -0.00110727;
		ACE_caliber = 9.296;
		ACE_bulletLength = 34.29;
		ACE_bulletMass = 14.904;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.368};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {850,870,880};
		ACE_barrelLengths[] = {508.0,620.014,660.4};
	};
	class B_408_Ball: BulletBase
	{
		timeToLive = 10;
		airFriction = -0.00046249;
		tracerScale = 1.3;
		ACE_caliber = 10.363;
		ACE_bulletLength = 55.1942;
		ACE_bulletMass = 27.1507;
		ACE_transonicStabilityCoef = 1;
		ACE_muzzleVelocityVariationSD = 0.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.434};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {867};
		ACE_barrelLengths[] = {736.6};
	};
	class ACE_408_Ball: BulletBase
	{
		timeToLive = 10;
		airFriction = -0.00065414;
		typicalSpeed = 1067;
		tracerScale = 1.3;
		ACE_caliber = 10.363;
		ACE_bulletLength = 41.4528;
		ACE_bulletMass = 19.7637;
		ACE_transonicStabilityCoef = 1;
		ACE_muzzleVelocityVariationSD = 0.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.279};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {1067};
		ACE_barrelLengths[] = {736.6};
	};
	class B_338_Ball: BulletBase
	{
		timeToLive = 10;
		airFriction = -0.00060841;
		ACE_caliber = 8.585;
		ACE_bulletLength = 39.573;
		ACE_bulletMass = 16.2;
		ACE_muzzleVelocityVariationSD = 0.3;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.322};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {880,915,925};
		ACE_barrelLengths[] = {508.0,660.4,711.2};
	};
	class B_338_NM_Ball: BulletBase
	{
		airFriction = -0.00053639;
		ACE_caliber = 8.585;
		ACE_bulletLength = 43.18;
		ACE_bulletMass = 19.44;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.381};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {790,807,820};
		ACE_barrelLengths[] = {508.0,609.6,660.4};
	};
	class ACE_338_Ball: B_338_Ball
	{
		timeToLive = 10;
		airFriction = -0.00055706;
		typicalSpeed = 826;
		ACE_caliber = 8.585;
		ACE_bulletLength = 44.0182;
		ACE_bulletMass = 19.44;
		ACE_muzzleVelocityVariationSD = 0.3;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.368};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {800,820,826,830};
		ACE_barrelLengths[] = {508.0,609.6,673.1,711.2};
	};
	class ACE_338_Ball_API526: B_338_Ball
	{
		timeToLive = 10;
		airFriction = -0.0006922;
		caliber = 2.8;
		typicalSpeed = 895;
		ACE_caliber = 8.585;
		ACE_bulletLength = 38.989;
		ACE_bulletMass = 16.394125;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.29};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {880,895,900};
		ACE_barrelLengths[] = {508.0,685.8,711.2};
	};
	class B_127x33_Ball: BulletBase
	{
		tracerScale = 1.3;
	};
	class B_127x54_Ball: BulletBase
	{
		airFriction = -0.00019568;
		tracerScale = 1.3;
		ACE_caliber = 12.954;
		ACE_bulletLength = 64.516;
		ACE_bulletMass = 48.6;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {1.05};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {300};
		ACE_barrelLengths[] = {436.88};
	};
	class B_127x99_Ball: BulletBase
	{
		timeToLive = 10;
		airFriction = -0.00058679;
		tracerScale = 1.3;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.6};
	};
	class ACE_127x99_API: B_127x99_Ball
	{
		timeToLive = 10;
		airFriction = -0.00058679;
		tracerScale = 1.3;
		hit = 25;
		caliber = 4.0;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9904;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.6};
	};
	class ACE_127x99_Ball_AMAX: B_127x99_Ball
	{
		timeToLive = 10;
		airFriction = -0.00037397;
		caliber = 3.0;
		ACE_caliber = 12.954;
		ACE_bulletLength = 64.516;
		ACE_bulletMass = 48.6;
		ACE_muzzleVelocityVariationSD = 0.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {1.05};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {860};
		ACE_barrelLengths[] = {736.6};
	};
	class B_127x108_Ball: BulletBase
	{
		timeToLive = 10;
		airFriction = -0.00065098;
		tracerScale = 1.3;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		typicalSpeed = 820;
		airFriction = -0.00065098;
	};
	class B_45ACP_Ball: BulletBase
	{
		airFriction = -0.00082143;
		tracerScale = 0.6;
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.195};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {230,250,285};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
	class B_50BW_Ball_F: BulletBase
	{
		airFriction = -0.00205896;
		ACE_caliber = 12.7;
		ACE_bulletLength = 24.13;
		ACE_bulletMass = 21.7076;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.21};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {510,550,596};
		ACE_barrelLengths[] = {304.8,406.4,609.6};
	};
	class B_19mm_HE: BulletBase
	{
		tracerScale = 1;
	};
	class B_30mm_HE: B_19mm_HE
	{
		tracerScale = 2.5;
	};
	class B_20mm: BulletBase
	{
		timeToLive = 30;
		tracerScale = 1.5;
	};
	class B_25mm: BulletBase
	{
		timeToLive = 30;
		tracerScale = 2.0;
	};
	class B_30mm_AP: BulletBase
	{
		timeToLive = 30;
		tracerScale = 2.5;
	};
	class B_35mm_AA: BulletBase
	{
		timeToLive = 30;
		tracerScale = 2.75;
	};
	class ShellBase;
	class Sh_120mm_HE: ShellBase
	{
		tracerScale = 3;
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		tracerScale = 3;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		tracerScale = 2.5;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class 30Rnd_580x42_Mag_F: CA_Magazine
	{
		initSpeed = 950;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		initSpeed = 806;
	};
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		initSpeed = 774;
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		initSpeed = 788;
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		initSpeed = 774;
	};
	class 100Rnd_65x39_caseless_mag_Tracer;
	class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim: 100Rnd_65x39_caseless_mag_Tracer
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65x39_Caseless_Tracer_Dim";
		displayName = "$STR_ace_ballistics_100Rnd_65x39_caseless_mag_Tracer_DimName";
		displayNameShort = "$STR_ace_ballistics_100Rnd_65x39_caseless_mag_Tracer_DimNameShort";
		descriptionShort = "$STR_ace_ballistics_100Rnd_65x39_caseless_mag_Tracer_DimDescription";
		picture = "\A3\weapons_f\data\ui\m_100rnd_65x39_yellow_ca.paa";
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		initSpeed = 743;
	};
	class ACE_200Rnd_65x39_cased_Box_Tracer_Dim: 200Rnd_65x39_cased_Box
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65x39_Caseless_Tracer_Dim";
		displayName = "$STR_ace_ballistics_200Rnd_65x39_cased_Box_Tracer_DimName";
		displayNameShort = "$STR_ace_ballistics_200Rnd_65x39_cased_Box_Tracer_DimNameShort";
		descriptionShort = "$STR_ace_ballistics_200Rnd_65x39_cased_Box_Tracer_DimDescription";
		picture = "\A3\weapons_f\data\ui\m_200rnd_65x39_yellow_ca.paa";
		initSpeed = 774;
	};
	class 30Rnd_65x39_caseless_mag_Tracer;
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim: 30Rnd_65x39_caseless_mag_Tracer
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65x39_Caseless_Tracer_Dim";
		displayName = "$STR_ace_ballistics_30Rnd_65x39_caseless_mag_Tracer_DimName";
		displayNameShort = "$STR_ace_ballistics_30Rnd_65x39_caseless_mag_Tracer_DimNameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_65x39_caseless_mag_Tracer_DimDescription";
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer;
	class ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65x39_Caseless_green_Tracer_Dim";
		displayName = "$STR_ace_ballistics_30Rnd_65x39_caseless_green_mag_Tracer_DimName";
		displayNameShort = "$STR_ace_ballistics_30Rnd_65x39_caseless_green_mag_Tracer_DimNameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_65x39_caseless_green_mag_Tracer_DimDescription";
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		initSpeed = 735;
	};
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		initSpeed = 909;
	};
	class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag
	{
		initSpeed = 869;
	};
	class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag
	{
		initSpeed = 869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		initSpeed = 869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag
	{
		initSpeed = 869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag
	{
		initSpeed = 889;
	};
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag: 30Rnd_556x45_Stanag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_556x45_Ball_M995_AP";
		displayName = "$STR_ace_ballistics_30Rnd_556x45_Stanag_M995_AP_mag_Name";
		displayNameShort = "$STR_ace_ballistics_30Rnd_556x45_Stanag_M995_AP_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_556x45_Stanag_M995_AP_mag_Description";
		initSpeed = 875;
	};
	class ACE_30Rnd_556x45_Stanag_Mk262_mag: 30Rnd_556x45_Stanag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_556x45_Ball_Mk262";
		displayName = "$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk262_mag_Name";
		displayNameShort = "$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk262_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk262_mag_Description";
		initSpeed = 832;
	};
	class ACE_30Rnd_556x45_Stanag_Mk318_mag: 30Rnd_556x45_Stanag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_556x45_Ball_Mk318";
		displayName = "$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk318_mag_Name";
		displayNameShort = "$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk318_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk318_mag_Description";
		initSpeed = 923;
	};
	class ACE_30Rnd_556x45_Stanag_Tracer_Dim: 30Rnd_556x45_Stanag_Tracer_Red
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_B_556x45_Ball_Tracer_Dim";
		displayName = "$STR_ace_ballistics_30Rnd_556x45_mag_Tracer_DimName";
		displayNameShort = "$STR_ace_ballistics_30Rnd_556x45_mag_Tracer_DimNameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_556x45_mag_Tracer_DimDescription";
		picture = "\A3\weapons_f\data\ui\m_20stanag_red_ca.paa";
	};
	class 200Rnd_556x45_Box_F: CA_Magazine
	{
		initSpeed = 889;
	};
	class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
	{
		initSpeed = 869;
	};
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		initSpeed = 716;
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		initSpeed = 827;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 833;
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		initSpeed = 833;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		initSpeed = 833;
	};
	class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "B_762x51_Tracer_Red";
		displayName = "$STR_ace_ballistics_20Rnd_762x51_mag_TracerName";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_mag_TracerNameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_mag_TracerDescription";
		tracersEvery = 1;
	};
	class ACE_20Rnd_762x51_Mag_Tracer_Dim: ACE_20Rnd_762x51_Mag_Tracer
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_B_762x51_Tracer_Dim";
		displayName = "$STR_ace_ballistics_20Rnd_762x51_mag_Tracer_DimName";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_mag_Tracer_DimNameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_mag_Tracer_DimDescription";
	};
	class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_Subsonic";
		displayName = "$STR_ace_ballistics_20Rnd_762x51_mag_SDName";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_mag_SDNameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_mag_SDDescription";
		initSpeed = 330;
	};
	class ACE_10Rnd_762x51_M118LR_Mag: 10Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_M118LR";
		count = 10;
		displayName = "$STR_ace_ballistics_10Rnd_762x51_M118LR_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_762x51_M118LR_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_762x51_M118LR_Mag_Description";
		initSpeed = 780;
	};
	class ACE_10Rnd_762x51_Mk316_Mod_0_Mag: 10Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_Mk316_Mod_0";
		count = 10;
		displayName = "$STR_ace_ballistics_10Rnd_762x51_Mk316_Mod_0_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_762x51_Mk316_Mod_0_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_762x51_Mk316_Mod_0_Mag_Description";
		initSpeed = 790;
	};
	class ACE_10Rnd_762x51_Mk319_Mod_0_Mag: 10Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_Mk319_Mod_0";
		count = 10;
		displayName = "$STR_ace_ballistics_10Rnd_762x51_Mk319_Mod_0_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_762x51_Mk319_Mod_0_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_762x51_Mk319_Mod_0_Mag_Description";
		initSpeed = 900;
	};
	class ACE_10Rnd_762x51_M993_AP_Mag: 10Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_M993_AP";
		count = 10;
		displayName = "$STR_ace_ballistics_10Rnd_762x51_M993_AP_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_762x51_M993_AP_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_762x51_M993_AP_Mag_Description";
		initSpeed = 920;
	};
	class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_M118LR";
		displayName = "$STR_ace_ballistics_20Rnd_762x51_M118LR_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_M118LR_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_M118LR_Mag_Description";
		initSpeed = 785;
	};
	class ACE_20Rnd_762x51_Mk316_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_Mk316_Mod_0";
		count = 20;
		displayName = "$STR_ace_ballistics_20Rnd_762x51_Mk316_Mod_0_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_Mk316_Mod_0_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_Mk316_Mod_0_Mag_Description";
		initSpeed = 798;
	};
	class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_Mk319_Mod_0";
		displayName = "$STR_ace_ballistics_20Rnd_762x51_Mk319_Mod_0_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_Mk319_Mod_0_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_Mk319_Mod_0_Mag_Description";
		initSpeed = 910;
	};
	class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x51_Ball_M993_AP";
		count = 20;
		displayName = "$STR_ace_ballistics_20Rnd_762x51_M993_AP_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x51_M993_AP_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x51_M993_AP_Mag_Description";
		initSpeed = 930;
	};
	class ACE_20Rnd_762x67_Mk248_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x67_Ball_Mk248_Mod_0";
		displayName = "$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_0_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_0_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_0_Mag_Description";
		initSpeed = 865;
	};
	class ACE_20Rnd_762x67_Mk248_Mod_1_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x67_Ball_Mk248_Mod_1";
		displayName = "$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_1_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_1_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_1_Mag_Description";
		initSpeed = 847;
	};
	class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag: 20Rnd_762x51_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x67_Ball_Berger_Hybrid_OTM";
		displayName = "$STR_ace_ballistics_20Rnd_762x67_Berger_Hybrid_OTM_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_762x67_Berger_Hybrid_OTM_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_762x67_Berger_Hybrid_OTM_Mag_Description";
		initSpeed = 800;
	};
	class ACE_30Rnd_65x47_Scenar_mag: 30Rnd_65x39_caseless_mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65x47_Ball_Scenar";
		initSpeed = 826;
		displayName = "$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_Name";
		displayNameShort = "$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_Description";
	};
	class ACE_20Rnd_65x47_Scenar_mag: 20Rnd_650x39_Cased_Mag_F
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65x47_Ball_Scenar";
		initSpeed = 826;
		displayName = "$STR_ace_ballistics_20Rnd_65x47_Scenar_mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_65x47_Scenar_mag_Description";
	};
	class ACE_30Rnd_65_Creedmor_mag: 30Rnd_65x39_caseless_mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65_Creedmor_Ball";
		initSpeed = 857;
		displayName = "$STR_ace_ballistics_30Rnd_65_Creedmor_mag_Name";
		displayNameShort = "$STR_ace_ballistics_30Rnd_65_Creedmor_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_30Rnd_65_Creedmor_mag_Description";
	};
	class ACE_20Rnd_65_Creedmor_mag: 20Rnd_650x39_Cased_Mag_F
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_65_Creedmor_Ball";
		initSpeed = 857;
		displayName = "$STR_ace_ballistics_20Rnd_65_Creedmor_mag_Name";
		displayNameShort = "$STR_ace_ballistics_20Rnd_65_Creedmor_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_20Rnd_65_Creedmor_mag_Description";
	};
	class 10Rnd_338_Mag: CA_Magazine
	{
		initSpeed = 880;
	};
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_338_Ball";
		displayName = "$STR_ace_ballistics_10Rnd_338_300gr_HPBT_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_338_300gr_HPBT_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_338_300gr_HPBT_Mag_Description";
		initSpeed = 800;
	};
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_338_Ball_API526";
		displayName = "$STR_ace_ballistics_10Rnd_338_API526_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_338_API526_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_338_API526_Mag_Description";
		initSpeed = 880;
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		initSpeed = 867;
	};
	class ACE_7Rnd_408_305gr_Mag: 7Rnd_408_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_408_Ball";
		displayName = "$STR_ace_ballistics_7Rnd_408_305gr_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_7Rnd_408_305gr_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_7Rnd_408_305gr_Mag_Description";
		initSpeed = 1067;
	};
	class 5Rnd_127x108_Mag;
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
	{
		initSpeed = 820;
	};
	class ACE_5Rnd_127x99_Mag: 5Rnd_127x108_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "B_127x99_Ball";
		displayName = "$STR_ace_ballistics_5Rnd_127x99_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_5Rnd_127x99_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_5Rnd_127x99_Mag_Description";
		initSpeed = 900;
	};
	class ACE_5Rnd_127x99_API_Mag: 5Rnd_127x108_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_127x99_API";
		displayName = "$STR_ace_ballistics_5Rnd_127x99_API_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_5Rnd_127x99_API_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_5Rnd_127x99_API_Mag_Description";
		initSpeed = 900;
	};
	class ACE_5Rnd_127x99_AMAX_Mag: 5Rnd_127x108_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_127x99_Ball_AMAX";
		displayName = "$STR_ace_ballistics_5Rnd_127x99_AMAX_Mag_Name";
		displayNameShort = "$STR_ace_ballistics_5Rnd_127x99_AMAX_Mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_5Rnd_127x99_AMAX_Mag_Description";
		initSpeed = 860;
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		initSpeed = 430;
	};
	class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag
	{
		initSpeed = 402;
	};
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag
	{
		initSpeed = 430;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02
	{
		initSpeed = 402;
	};
	class 10Rnd_50BW_Mag_F: CA_Magazine
	{
		initSpeed = 552;
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		initSpeed = 254;
	};
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
	{
		initSpeed = 254;
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		initSpeed = 254;
	};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		initSpeed = 254;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		initSpeed = 254;
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		initSpeed = 430;
	};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		initSpeed = 430;
	};
	class ACE_16Rnd_9x19_mag: 16Rnd_9x21_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_9x19_Ball";
		displayName = "$STR_ace_ballistics_16Rnd_9x19_mag_Name";
		displayNameShort = "$STR_ace_ballistics_16Rnd_9x19_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_16Rnd_9x19_mag_Description";
		initSpeed = 370;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		initSpeed = 836;
	};
	class ACE_10Rnd_762x54_Tracer_mag: 10Rnd_762x54_Mag
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "ACE_762x54_Ball_7T2";
		displayName = "$STR_ace_ballistics_10Rnd_762x54_Tracer_mag_Name";
		displayNameShort = "$STR_ace_ballistics_10Rnd_762x54_Tracer_mag_NameShort";
		descriptionShort = "$STR_ace_ballistics_10Rnd_762x54_Tracer_mag_Description";
		initSpeed = 810;
		tracersEvery = 1;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		initSpeed = 778;
	};
	class 10Rnd_127x54_Mag: CA_Magazine
	{
		initSpeed = 300;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		initSpeed = 869;
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		initSpeed = 807;
	};
	class 200Rnd_65x39_Belt: VehicleMagazine
	{
		initSpeed = 806;
	};
	class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag
	{
		initSpeed = 267;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		initSpeed = 870;
	};
	class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
	{
		initSpeed = 870;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class LMG_RCWS;
	class MGun;
	class MGunCore;
	class MMG_01_base_F;
	class MMG_02_base_F;
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F{};
	class Rifle_Long_Base_F: Rifle_Base_F{};
	class GM6_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.45) * 0.00029088)";
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.50) * 0.00029088)";
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class arifle_katiba_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.61) * 0.00029088)";
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.0) * 0.00029088)";
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.67) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.67) * 0.00029088)";
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","ACE_100Rnd_65x39_caseless_mag_Tracer_Dim","ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
		initSpeed = -0.981912;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 406.4;
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","ACE_30Rnd_65x39_caseless_mag_Tracer_Dim","ACE_30Rnd_65x47_Scenar_mag","ACE_30Rnd_65_Creedmor_mag"};
		initSpeed = -1.0;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 457.2;
		class Single: Single
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -0.869636;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 264.0;
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		initSpeed = -0.999864;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.0;
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD"};
		initSpeed = -0.991536;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 508.0;
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.81) * 0.00029088)";
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","ACE_200Rnd_65x39_cased_Box_Tracer_Dim"};
		initSpeed = -0.999327;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 317.5;
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		initSpeed = -1.00048;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 459.74;
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		initSpeed = -1.00051;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 414.02;
	};
	class SDAR_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			dispersion = "((3.0) * 0.00029088)";
		};
		class Burst: Mode_Burst
		{
			dispersion = "((3.0) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((3.0) * 0.00029088)";
		};
	};
	class Pistol;
	class Pistol_Base_F: Pistol{};
	class hgun_P07_F: Pistol_Base_F
	{
		initSpeed = -0.906977;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 101.6;
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		initSpeed = -0.934884;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 111.76;
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		initSpeed = -0.984252;
		ACE_barrelTwist = 406.4;
		ACE_barrelLength = 127.0;
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		initSpeed = -0.944882;
		ACE_barrelTwist = 406.4;
		ACE_barrelLength = 114.3;
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		initSpeed = -0.905512;
		ACE_barrelTwist = 406.4;
		ACE_barrelLength = 76.2;
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		initSpeed = -0.883721;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 93.5;
	};
	class pdw2000_base_F: Rifle_Short_Base_F{};
	class hgun_PDW2000_F: pdw2000_base_F
	{
		initSpeed = -0.994186;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 177.8;
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 206.5;
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		initSpeed = -0.978947;
		ACE_barrelTwist = 244.0;
		ACE_barrelLength = 463.0;
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		initSpeed = -0.99998;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 640.0;
		magazines[] = {"20Rnd_650x39_Cased_Mag_F","ACE_20Rnd_65x47_Scenar_mag","ACE_20Rnd_65_Creedmor_mag"};
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.01) * 0.00029088)";
		};
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 244.0;
		ACE_barrelLength = 600.0;
		class Single: Mode_SemiAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		initSpeed = -0.984262;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 463.0;
		class Single: Mode_SemiAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class arifle_Katiba_F: arifle_katiba_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"};
		initSpeed = -1.0;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 508.0;
	};
	class arifle_Katiba_C_F: arifle_katiba_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"};
		initSpeed = -0.961294;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 393.7;
		class Single: Single
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class arifle_Katiba_GL_F: arifle_katiba_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"};
		initSpeed = -1.0;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 508.0;
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
		initSpeed = -0.972222;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 368.3;
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
		initSpeed = -0.972222;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 368.3;
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
		initSpeed = -0.946382;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 266.7;
		class Single: Single
		{
			dispersion = "((0.90) * 0.00029088)";
		};
		class FullAuto: FullAuto
		{
			dispersion = "((0.90) * 0.00029088)";
		};
	};
	class arifle_SDAR_F: SDAR_base_F
	{
		magazines[] = {"20Rnd_556x45_UW_mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -0.998321;
		ACE_barrelTwist = 285.75;
		ACE_barrelLength = 457.2;
	};
	class SMG_02_base_F: Rifle_Short_Base_F{};
	class SMG_02_F: SMG_02_base_F
	{
		initSpeed = -1.00029;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 195.58;
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		initSpeed = -0.943783;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 115.0;
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -0.961496;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 381.0;
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -1.0;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 459.74;
		class Single: Single
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -1.0;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 459.74;
	};
	class arifle_Mk20_F: mk20_base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -0.992849;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 441.96;
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -0.974297;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
		class Single: Single
		{
			dispersion = "((1.12) * 0.00029088)";
		};
		class FullAuto: FullAuto
		{
			dispersion = "((1.12) * 0.00029088)";
		};
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		initSpeed = -0.974297;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
	};
	class SMG_01_Base: Rifle_Short_Base_F{};
	class SMG_01_F: SMG_01_Base
	{
		initSpeed = -1.00148;
		ACE_barrelTwist = 406.4;
		ACE_barrelLength = 139.7;
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		magazines[] = {"10Rnd_762x54_Mag","ACE_10Rnd_762x54_Tracer_mag"};
		initSpeed = -1.00019;
		ACE_barrelTwist = 241.3;
		ACE_barrelLength = 609.6;
	};
	class srifle_EBR_F: EBR_base_F
	{
		magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD"};
		initSpeed = -0.979444;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
	};
	class srifle_LRR_F: LRR_base_F
	{
		magazines[] = {"7Rnd_408_Mag","ACE_7Rnd_408_305gr_Mag"};
		initSpeed = -1.0;
		ACE_barrelTwist = 330.2;
		ACE_barrelLength = 736.6;
	};
	class srifle_GM6_F: GM6_base_F
	{
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","ACE_5Rnd_127x99_Mag","ACE_5Rnd_127x99_API_Mag","ACE_5Rnd_127x99_AMAX_Mag"};
		initSpeed = -1.0;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 730;
	};
	class srifle_DMR_02_F: DMR_02_base_F
	{
		magazines[] = {"10Rnd_338_Mag","ACE_10Rnd_338_300gr_HPBT_Mag","ACE_10Rnd_338_API526_Mag","ACE_20Rnd_762x67_Mk248_Mod_0_Mag","ACE_20Rnd_762x67_Mk248_Mod_1_Mag","ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag"};
		initSpeed = -1.0;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 508.0;
	};
	class srifle_DMR_03_F: DMR_03_base_F
	{
		magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD"};
		initSpeed = -0.991536;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 508.0;
	};
	class srifle_DMR_04_F: DMR_04_base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 450.088;
	};
	class srifle_DMR_05_blk_F: DMR_05_base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 359.918;
		ACE_barrelLength = 620.014;
	};
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD"};
		initSpeed = -0.999395;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
	};
	class MMG_01_hex_F: MMG_01_base_F
	{
		initSpeed = -0.985613;
		ACE_barrelTwist = 359.918;
		ACE_barrelLength = 549.91;
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 234.95;
		ACE_barrelLength = 609.6;
	};
	class HMG_127: LMG_RCWS{};
	class HMG_01: HMG_127{};
	class HMG_M2: HMG_01
	{
		initSpeed = -1.0;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 1143.0;
	};
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_L: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_M: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_B: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_H_SW: muzzle_snds_H_MG
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_acp: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_338_black: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class muzzle_snds_93mmg: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
};
class CfgVehicles
{
	class Sign_F;
	class ACE_TargetWall: Sign_F
	{
		author = "$STR_ace_common_ACETeam";
		scope = 0;
		class Eventhandlers
		{
			init = "_this call compile preProcessFileLineNumbers '\z\ace\addons\ballistics\scripts\initTargetWall.sqf'";
		};
	};
	class NATO_Box_Base;
	class Box_NATO_Wps_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
		};
	};
	class Box_NATO_WpsSpecial_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
			{
				magazine = "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_200Rnd_65x39_cased_Box_Tracer_Dim
			{
				magazine = "ACE_200Rnd_65x39_cased_Box_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Tracer_Dim";
				count = 1;
			};
			class _xx_ACE_10Rnd_338_300gr_HPBT_Mag
			{
				magazine = "ACE_10Rnd_338_300gr_HPBT_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_API526_Mag
			{
				magazine = "ACE_10Rnd_338_API526_Mag";
				count = 4;
			};
			class _xx_ACE_7Rnd_408_305gr_Mag
			{
				magazine = "ACE_7Rnd_408_305gr_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_Mag
			{
				magazine = "ACE_5Rnd_127x99_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_API_Mag
			{
				magazine = "ACE_5Rnd_127x99_API_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_AMAX_Mag
			{
				magazine = "ACE_5Rnd_127x99_AMAX_Mag";
				count = 4;
			};
		};
	};
	class Box_NATO_Ammo_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_10Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_20Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer_Dim
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_300gr_HPBT_Mag
			{
				magazine = "ACE_10Rnd_338_300gr_HPBT_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_API526_Mag
			{
				magazine = "ACE_10Rnd_338_API526_Mag";
				count = 4;
			};
			class _xx_ACE_7Rnd_408_305gr_Mag
			{
				magazine = "ACE_7Rnd_408_305gr_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_Mag
			{
				magazine = "ACE_5Rnd_127x99_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_API_Mag
			{
				magazine = "ACE_5Rnd_127x99_API_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_AMAX_Mag
			{
				magazine = "ACE_5Rnd_127x99_AMAX_Mag";
				count = 4;
			};
		};
	};
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_10Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_10Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_20Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer_Dim
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 3;
			};
			class _xx_ACE_10Rnd_762x51_M993_AP_Mag
			{
				magazine = "ACE_10Rnd_762x51_M993_AP_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_M993_AP_Mag
			{
				magazine = "ACE_20Rnd_762x51_M993_AP_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_300gr_HPBT_Mag
			{
				magazine = "ACE_10Rnd_338_300gr_HPBT_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_API526_Mag
			{
				magazine = "ACE_10Rnd_338_API526_Mag";
				count = 4;
			};
			class _xx_ACE_7Rnd_408_305gr_Mag
			{
				magazine = "ACE_7Rnd_408_305gr_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_Mag
			{
				magazine = "ACE_5Rnd_127x99_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_API_Mag
			{
				magazine = "ACE_5Rnd_127x99_API_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_AMAX_Mag
			{
				magazine = "ACE_5Rnd_127x99_AMAX_Mag";
				count = 4;
			};
		};
	};
	class ReammoBox_F;
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_10Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_20Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer_Dim
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer_Dim";
				count = 4;
			};
		};
	};
	class EAST_Box_Base;
	class Box_East_Wps_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x54_Tracer_mag
			{
				magazine = "ACE_10Rnd_762x54_Tracer_mag";
				count = 4;
			};
		};
	};
	class Box_East_WpsSpecial_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Tracer_Dim";
				count = 1;
			};
			class _xx_ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x54_Tracer_mag
			{
				magazine = "ACE_10Rnd_762x54_Tracer_mag";
				count = 4;
			};
		};
	};
	class Box_East_Ammo_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x54_Tracer_mag
			{
				magazine = "ACE_10Rnd_762x54_Tracer_mag";
				count = 4;
			};
		};
	};
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x54_Tracer_mag
			{
				magazine = "ACE_10Rnd_762x54_Tracer_mag";
				count = 4;
			};
		};
	};
	class IND_Box_Base;
	class Box_IND_Wps_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
		};
	};
	class Box_IND_WpsSpecial_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Tracer_Dim";
				count = 4;
			};
		};
	};
	class Box_IND_Ammo_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Wps_F: FIA_Box_Base_F
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
		};
	};
	class Box_FIA_Ammo_F: FIA_Box_Base_F
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
		};
	};
	class IG_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
		};
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
		};
	};
	class ACE_Box_Ammo: NATO_Box_Base
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_ace_ballistics_AmmoSupplyCrate_DisplayName";
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		author = "$STR_ace_common_ACETeam";
		class TransportMagazines
		{
			class _xx_ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_M993_AP_Mag
			{
				magazine = "ACE_10Rnd_762x51_M993_AP_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_M993_AP_Mag
			{
				magazine = "ACE_20Rnd_762x51_M993_AP_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_10Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_M118LR_Mag
			{
				magazine = "ACE_20Rnd_762x51_M118LR_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_10Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x51_Mag_Tracer_Dim
			{
				magazine = "ACE_20Rnd_762x51_Mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x67_Mk248_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x67_Mk248_Mod_0_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x67_Mk248_Mod_1_Mag
			{
				magazine = "ACE_20Rnd_762x67_Mk248_Mod_1_Mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag
			{
				magazine = "ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_762x54_Tracer_mag
			{
				magazine = "ACE_10Rnd_762x54_Tracer_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
			{
				magazine = "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_200Rnd_65x39_cased_Box_Tracer_Dim
			{
				magazine = "ACE_200Rnd_65x39_cased_Box_Tracer_Dim";
				count = 4;
			};
			class _xx_ACE_20Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_20Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65x47_Scenar_mag
			{
				magazine = "ACE_30Rnd_65x47_Scenar_mag";
				count = 4;
			};
			class _xx_ACE_20Rnd_65_Creedmor_mag
			{
				magazine = "ACE_20Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_30Rnd_65_Creedmor_mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_300gr_HPBT_Mag
			{
				magazine = "ACE_10Rnd_338_300gr_HPBT_Mag";
				count = 4;
			};
			class _xx_ACE_10Rnd_338_API526_Mag
			{
				magazine = "ACE_10Rnd_338_API526_Mag";
				count = 4;
			};
			class _xx_ACE_7Rnd_408_305gr_Mag
			{
				magazine = "ACE_7Rnd_408_305gr_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_Mag
			{
				magazine = "ACE_5Rnd_127x99_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_API_Mag
			{
				magazine = "ACE_5Rnd_127x99_API_Mag";
				count = 4;
			};
			class _xx_ACE_5Rnd_127x99_AMAX_Mag
			{
				magazine = "ACE_5Rnd_127x99_AMAX_Mag";
				count = 4;
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
class ace_arsenal_stats
{
	class statBase;
	class ACE_barrelTwist: statBase
	{
		scope = 2;
		priority = 1;
		stats[] = {"ACE_barrelTwist"};
		displayName = "$STR_ace_ballistics_statBarrelTwist";
		showText = 1;
		textStatement = "params ['_stat','_config']; private _barrelTwist = getNumber (_config >> _stat select 0); format ['%1mm (%2in)',_barrelTwist toFixed 0,(_barrelTwist / 25.4) toFixed 1]";
		tabs[] = {{0,1},{}};
	};
	class ACE_barrelLength: statBase
	{
		scope = 2;
		priority = 0;
		stats[] = {"ACE_barrelLength"};
		displayName = "$STR_ace_ballistics_statBarrelLength";
		showText = 1;
		textStatement = "params ['_stat','_config']; private _barrelLength = getNumber (_config >> _stat select 0); format ['%1mm (%2in)',_barrelLength toFixed 0,(_barrelLength / 25.4) toFixed 1]";
		tabs[] = {{0,1},{}};
	};
	class ACE_ammo: statBase
	{
		scope = 2;
		priority = 5;
		stats[] = {"ammo","displayName"};
		displayName = "$STR_dn_ammo";
		showText = 1;
		textStatement = "params ['_stat','_config']; private _ammoDisplayName = getText (configFile >> 'CfgAmmo' >> (getText (_config >> 'ammo')) >> _stat select 1); [_ammoDisplayName,getText (_config >> _stat select 0)] select (_ammoDisplayName == '')";
		tabs[] = {{},{4}};
	};
	class ACE_ballisticCoef: statBase
	{
		scope = 2;
		priority = 4;
		stats[] = {"ACE_dragModel","ACE_ballisticCoefficients","ACE_standardAtmosphere"};
		displayName = "$STR_ace_ballistics_statBallisticCoef";
		showText = 1;
		textStatement = "params['_stat','_config']; private _ammoCfg = (configFile >> 'CfgAmmo' >> (getText (_config >> 'ammo'))); private _ballisticCoef = getArray (_ammoCfg >> _stat select 1); _ballisticCoef sort false; format ['%1 G%2 (%3)',_ballisticCoef select 0,getNumber (_ammoCfg >> _stat select 0),getText (_ammoCfg >> _stat select 2)]";
		condition = "params['_stat','_config']; private _ammoCfg = (configFile >> 'CfgAmmo' >> (getText (_config >> 'ammo'))); !(getArray (_ammoCfg >> _stat select 1) isEqualTo [])";
		tabs[] = {{},{4}};
	};
	class ACE_bulletMass: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"ACE_bulletMass"};
		displayName = "$STR_ace_ballistics_statBulletMass";
		showText = 1;
		textStatement = "params['_stat','_config']; private _ammoWeight = getNumber (configFile >> 'CfgAmmo' >> (getText (_config >> 'ammo')) >> _stat select 0); format ['%1g (%2gr)',_ammoWeight toFixed 1,(_ammoWeight * 15.43) toFixed 1]";
		condition = "params['_stat','_config']; getNumber (configFile >> 'CfgAmmo' >> (getText (_config >> 'ammo')) >> _stat select 0) > 0";
		tabs[] = {{},{4}};
	};
	class ACE_magMuzzleVelocity: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"initSpeed"};
		displayName = "$STR_ace_ballistics_statMuzzleVelocity";
		showText = 1;
		textStatement = "params['_stat','_config']; private _initSpeed = getNumber (_config >> _stat select 0); format ['%1 m/s (%2 ft/s)',_initSpeed,(_initSpeed * 3.28084) toFixed 0]";
		condition = "getNumber (_this select 1 >> (_this select 0) select 0) > 0";
		tabs[] = {{},{4}};
	};
	class ACE_weaponMuzzleVelocity: statBase
	{
		scope = 2;
		priority = 3;
		stats[] = {"initSpeed"};
		displayName = "$STR_ace_ballistics_statMuzzleVelocity";
		showText = 1;
		textStatement = "[_this select 0,_this select 1] call ace_ballistics_fnc_statTextStatement_weaponMuzzleVelocity";
		tabs[] = {{0,1},{}};
	};
};
