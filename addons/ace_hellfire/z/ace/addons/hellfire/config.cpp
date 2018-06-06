////////////////////////////////////////////////////////////////////
//DeRap: ace_hellfire\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:16 2018 : 'file' last modified on Mon Apr 16 21:44:32 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_hellfire
	{
		name = "ACE3 - Hellfire";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction","ace_missileguidance"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"PabstMirror"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"ACE_Hellfire_AGM114K","ACE_Hellfire_AGM114N"};
	};
};
class ace_missileguidance_AttackProfiles
{
	class hellfire
	{
		name = "LOAL-DIR";
		nameLocked = "LOBL";
		functionName = "ace_hellfire_fnc_attackProfile";
		ace_hellfire_launchHeightClear = 0;
	};
	class hellfire_hi: hellfire
	{
		name = "LOAL-HI";
		nameLocked = "LOAL-HI";
		ace_hellfire_launchHeightClear = 304.8;
	};
	class hellfire_lo: hellfire_hi
	{
		name = "LOAL-LO";
		nameLocked = "LOAL-LO";
		ace_hellfire_launchHeightClear = 91.5;
	};
};
class CfgAmmo
{
	class M_PG_AT;
	class ACE_Hellfire_AGM114K: M_PG_AT
	{
		displayName = "AGM-114K";
		displayNameShort = "AGM-114K";
		description = "AGM-114K";
		descriptionShort = "AGM-114K";
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		hit = 1400;
		indirectHit = 71;
		indirectHitRange = 4.5;
		effectsMissile = "missile2";
		irLock = 0;
		laserLock = 0;
		manualControl = 0;
		maxSpeed = 450;
		thrustTime = 2.5;
		thrust = 250;
		timeToLive = 40;
		ace_rearm_caliber = 178;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 70;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 5000;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire","hellfire_hi","hellfire_lo"};
		};
	};
	class ACE_Hellfire_AGM114N: ACE_Hellfire_AGM114K
	{
		displayName = "AGM-114N";
		displayNameShort = "AGM-114N";
		description = "AGM-114N";
		descriptionShort = "AGM-114N";
		hit = 200;
		indirectHit = 200;
		indirectHitRange = 12;
		explosionEffects = "BombExplosion";
		class ace_missileguidance: ace_missileguidance
		{
			enabled = 1;
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_hellfire
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\hellfire\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_hellfire
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\hellfire\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_hellfire
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\hellfire\XEH_postInit.sqf'";
	};
};
class CfgMagazines
{
	class 12Rnd_PG_missiles;
	class 6Rnd_ACE_Hellfire_AGM114K: 12Rnd_PG_missiles
	{
		count = 6;
		ammo = "ACE_Hellfire_AGM114K";
		displayName = "AGM-114K [ACE]";
		displayNameShort = "AGM-114K";
		descriptionShort = "AGM-114K";
	};
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "1x AGM-114K [ACE]";
		count = 1;
		mass = 70;
		pylonWeapon = "ace_hellfire_launcher";
		hardpoints[] = {"SCALPEL_1RND"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class PylonRack_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "1x AGM-114K [ACE]";
		count = 1;
		mass = 85;
		pylonWeapon = "ace_hellfire_launcher";
		hardpoints[] = {"B_MISSILE_PYLON","SCALPEL_1RND_EJECTOR","B_ASRRAM_EJECTOR","UNI_SCALPEL","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","RHS_HP_MELB"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "3x AGM-114K [ACE]";
		count = 3;
		mass = 250;
		pylonWeapon = "ace_hellfire_launcher";
		hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","CUP_NATO_HELO_LARGE","RHS_HP_LONGBOW_RACK"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[] = {2,1,3};
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "4x AGM-114K [ACE]";
		count = 4;
		mass = 340;
		pylonWeapon = "ace_hellfire_launcher";
		hardpoints[] = {"UNI_SCALPEL","CUP_NATO_HELO_LARGE","RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[] = {2,1,4,3};
	};
	class 6Rnd_ACE_Hellfire_AGM114N: 6Rnd_ACE_Hellfire_AGM114K
	{
		count = 6;
		ammo = "ACE_Hellfire_AGM114N";
		displayName = "AGM-114N [ACE]";
		displayNameShort = "AGM-114N";
		descriptionShort = "AGM-114N";
	};
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114N: PylonMissile_1Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "1x AGM-114N [ACE]";
		displayNameShort = "AGM-114N";
		descriptionShort = "AGM-114N";
		ammo = "ACE_Hellfire_AGM114N";
		pylonWeapon = "ace_hellfire_launcher_N";
	};
	class PylonRack_1Rnd_ACE_Hellfire_AGM114N: PylonRack_1Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "1x AGM-114N [ACE]";
		displayNameShort = "AGM-114N";
		descriptionShort = "AGM-114N";
		ammo = "ACE_Hellfire_AGM114N";
		pylonWeapon = "ace_hellfire_launcher_N";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114N: PylonRack_3Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "3x AGM-114N [ACE]";
		displayNameShort = "AGM-114N";
		descriptionShort = "AGM-114N";
		ammo = "ACE_Hellfire_AGM114N";
		pylonWeapon = "ace_hellfire_launcher_N";
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114N: PylonRack_4Rnd_ACE_Hellfire_AGM114K
	{
		displayName = "4x AGM-114N [ACE]";
		displayNameShort = "AGM-114N";
		descriptionShort = "AGM-114N";
		ammo = "ACE_Hellfire_AGM114N";
		pylonWeapon = "ace_hellfire_launcher_N";
	};
};
class CfgVehicles
{
	class Heli_Attack_01_base_F;
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F
	{
		ace_hellfire_addLaserDesignator = 1;
	};
};
class CfgWeapons
{
	class RocketPods;
	class ace_hellfire_launcher: RocketPods
	{
		displayName = "AGM-114K Hellfire II";
		ace_hellfire_enabled = 1;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
		magazines[] = {"6Rnd_ACE_Hellfire_AGM114K","PylonMissile_1Rnd_ACE_Hellfire_AGM114K","PylonRack_1Rnd_ACE_Hellfire_AGM114K","PylonRack_3Rnd_ACE_Hellfire_AGM114K","PylonRack_4Rnd_ACE_Hellfire_AGM114K"};
		autoFire = 0;
		canLock = 0;
		weaponLockSystem = 0;
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
		};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 0;
	};
	class ace_hellfire_launcher_N: ace_hellfire_launcher
	{
		displayName = "AGM-114N Hellfire II";
		magazines[] = {"6Rnd_ACE_Hellfire_AGM114N","PylonMissile_1Rnd_ACE_Hellfire_AGM114N","PylonRack_1Rnd_ACE_Hellfire_AGM114N","PylonRack_3Rnd_ACE_Hellfire_AGM114N","PylonRack_4Rnd_ACE_Hellfire_AGM114N"};
	};
};
