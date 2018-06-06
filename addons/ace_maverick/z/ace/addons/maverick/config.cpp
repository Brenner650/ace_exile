////////////////////////////////////////////////////////////////////
//DeRap: ace_maverick\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:17 2018 : 'file' last modified on Mon Apr 16 21:45:46 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_maverick
	{
		name = "ACE3 - Maverick";
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_missileguidance"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"xrufix"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"ace_maverick_L","ace_kh25ml","MissileBase","Missile_AGM_02_F","Missile_AGM_01_F"};
		magazines[] = {"ace_maverick_L_magazine_x1","ace_maverick_L_pylonmissile_x1","ace_maverick_L_pylonmissile_x2","ace_maverick_L_pylonRack_1Rnd","ace_maverick_L_PylonRack_3Rnd","ace_maverick_L_PylonRack_x1","ace_maverick_L_PylonRack_x2","ace_kh25ml_magazine_x1","ace_kh25ml_pylonmissile_x1","ace_kh25ml_pylonmissile_int_x1"};
		weapons[] = {"ace_maverick_L_Launcher_Plane","ace_maverick_L_Launcher","ace_kh25ml_launcher"};
		units[] = {};
	};
};
class SensorTemplateLaser;
class CfgAmmo
{
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class Missile_AGM_02_F: MissileBase{};
	class ace_maverick_L: Missile_AGM_02_F
	{
		author = "xrufix";
		autoSeekTarget = 0;
		irLock = 0;
		laserLock = 0;
		manualControl = 0;
		missileLockMaxDistance = 16000;
		weaponLockSystem = 4;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 60;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 16000;
			defaultAttackProfile = "maverick";
			attackProfiles[] = {"maverick"};
		};
	};
	class Missile_AGM_01_F: Missile_AGM_02_F{};
	class ace_kh25ml: Missile_AGM_01_F
	{
		author = "xrufix";
		irLock = 0;
		missileLockMaxDistance = 10000;
		weaponLockSystem = 4;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL"};
			seekLastTargetPos = 1;
			seekerAngle = 40;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 10000;
			defaultAttackProfile = "maverick";
			attackProfiles[] = {"maverick"};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine: CA_Magazine{};
	class magazine_Missile_AGM_02_x1: VehicleMagazine{};
	class PylonMissile_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1{};
	class PylonMissile_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1{};
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine{};
	class PylonRack_1Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F{};
	class PylonRack_3Rnd_Missile_AGM_02_F: PylonRack_1Rnd_Missile_AGM_02_F{};
	class PylonRack_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1{};
	class PylonRack_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1{};
	class ace_maverick_L_magazine_x1: magazine_Missile_AGM_02_x1
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
	};
	class ace_maverick_L_pylonmissile_x1: PylonMissile_Missile_AGM_02_x1
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_maverick_L_Launcher";
	};
	class ace_maverick_L_pylonmissile_x2: PylonMissile_Missile_AGM_02_x2
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_maverick_L_Launcher";
	};
	class ace_maverick_L_pylonRack_1Rnd: PylonRack_1Rnd_Missile_AGM_02_F
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_maverick_L_Launcher_Plane";
	};
	class ace_maverick_L_PylonRack_3Rnd: PylonRack_3Rnd_Missile_AGM_02_F
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x3";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_maverick_L_Launcher_Plane";
	};
	class ace_maverick_L_PylonRack_x1: PylonRack_Missile_AGM_02_x1
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_maverick_L_Launcher";
	};
	class ace_maverick_L_PylonRack_x2: PylonRack_Missile_AGM_02_x2
	{
		ammo = "ace_maverick_L";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_L_MAG_DESCR";
		displayName = "$STR_ace_maverick_L_MAG_x2";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_maverick_L_Launcher";
	};
	class 4Rnd_Missile_AGM_01_F;
	class PylonRack_1Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F{};
	class magazine_Missile_AGM_KH25_x1: VehicleMagazine{};
	class PylonMissile_Missile_AGM_KH25_x1: magazine_Missile_AGM_KH25_x1{};
	class PylonMissile_Missile_AGM_KH25_INT_x1: PylonMissile_Missile_AGM_KH25_x1{};
	class ace_kh25ml_pylonrack_x1: PylonRack_1Rnd_Missile_AGM_01_F
	{
		ammo = "ace_kh25ml";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName = "$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_kh25ml_launcher";
	};
	class ace_kh25ml_magazine_x1: magazine_Missile_AGM_KH25_x1
	{
		ammo = "ace_kh25ml";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName = "$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
	};
	class ace_kh25ml_pylonmissile_x1: PylonMissile_Missile_AGM_KH25_x1
	{
		ammo = "ace_kh25ml";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName = "$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_kh25ml_launcher";
	};
	class ace_kh25ml_pylonmissile_int_x1: PylonMissile_Missile_AGM_KH25_INT_x1
	{
		ammo = "ace_kh25ml";
		author = "xrufix";
		descriptionShort = "$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName = "$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort = "$STR_ace_maverick_L_MAG_short";
		pylonWeapon = "ace_kh25ml_launcher";
	};
};
class CfgWeapons
{
	class LauncherCore;
	class RocketPods: LauncherCore{};
	class weapon_AGM_65Launcher: RocketPods{};
	class MissileLauncher: LauncherCore{};
	class Missile_AGM_02_Plane_CAS_01_F: MissileLauncher{};
	class ace_maverick_L_Launcher: weapon_AGM_65Launcher
	{
		author = "xrufix";
		displayname = "$STR_ace_maverick_L";
		magazines[] = {"ace_maverick_L_magazine_x1","ace_maverick_L_pylonmissile_x1","ace_maverick_L_pylonmissile_x2","ace_maverick_L_pylonRack_1Rnd","ace_maverick_L_PylonRack_3Rnd","ace_maverick_L_PylonRack_x1","ace_maverick_L_PylonRack_x2"};
		weaponLockDelay = 0.1;
		weaponLockSystem = 0;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
		ace_maverick_enabled = 1;
	};
	class ace_maverick_L_Launcher_Plane: Missile_AGM_02_Plane_CAS_01_F
	{
		author = "xrufix";
		displayname = "$STR_ace_maverick_L";
		magazines[] = {"ace_maverick_L_magazine_x1","ace_maverick_L_pylonmissile_x1","ace_maverick_L_pylonmissile_x2","ace_maverick_L_pylonRack_1Rnd","ace_maverick_L_PylonRack_3Rnd","ace_maverick_L_PylonRack_x1","ace_maverick_L_PylonRack_x2"};
		weaponLockDelay = 0.1;
		weaponLockSystem = 0;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
		ace_maverick_enabled = 1;
	};
	class weapon_AGM_KH25Launcher: MissileLauncher{};
	class ace_kh25ml_launcher: weapon_AGM_KH25Launcher
	{
		author = "xrufix";
		displayName = "$STR_ace_maverick_KH25ML";
		magazines[] = {"ace_kh25ml_pylonrack_x1","ace_kh25ml_magazine_x1","ace_kh25ml_pylonmissile_x1","ace_kh25ml_pylonmissile_int_x1"};
		weaponLockDelay = 0.1;
		weaponLockSystem = 0;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
		ace_maverick_enabled = 1;
	};
};
class ace_missileguidance_AttackProfiles
{
	class maverick
	{
		name = "LOAL-DIR";
		nameLocked = "LOBL-DIR";
		functionName = "ace_missileguidance_fnc_attackProfile_DIR";
	};
};
