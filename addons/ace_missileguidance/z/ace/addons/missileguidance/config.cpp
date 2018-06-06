////////////////////////////////////////////////////////////////////
//DeRap: ace_missileguidance\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:46:43 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_missileguidance
	{
		name = "ACE3 - Missile Guidance";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_laser"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"M_PG_AT","ACE_Hydra70_DAGR","M_Titan_AT","ACE_Javelin_FGM148","ACE_Javelin_FGM148_static"};
	};
};
class ace_missileguidance_AttackProfiles
{
	class LIN
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_attackProfile_LIN";
	};
	class DIR
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_attackProfile_DIR";
	};
	class MID
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_attackProfile_MID";
	};
	class HI
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_attackProfile_HI";
	};
	class JAV_DIR
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_attackProfile_JAV_DIR";
	};
	class JAV_TOP
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_attackProfile_JAV_TOP";
	};
};
class ace_missileguidance_SeekerTypes
{
	class SALH
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_seekerType_SALH";
	};
	class Optic
	{
		name = "";
		visualName = "";
		description = "";
		functionName = "ace_missileguidance_fnc_seekerType_Optic";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_missileguidance
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\missileguidance\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_missileguidance
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\missileguidance\XEH_pre_init.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_missileguidance
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\missileguidance\XEH_post_init.sqf'";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class All
	{
		ace_missileguidance = "_this call ace_missileguidance_fnc_onFired";
	};
};
class Extended_IncomingMissile_EventHandlers
{
	class All
	{
		ace_missileguidance = "_this call ace_missileguidance_fnc_onIncomingMissile";
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_PG_AT: MissileBase{};
	class ACE_Hydra70_DAGR: M_PG_AT
	{
		displayName = "$STR_ace_missileguidance_Hydra70_DAGR";
		displayNameShort = "$STR_ace_missileguidance_Hydra70_DAGR_Short";
		description = "$STR_ace_missileguidance_Hydra70_DAGR_Desc";
		descriptionShort = "$STR_ace_missileguidance_Hydra70_DAGR_Desc";
		irLock = 0;
		laserLock = 0;
		manualControl = 0;
		maxSpeed = 300;
		ace_rearm_caliber = 70;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.0025;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 2500;
			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN","DIR","MID","HI"};
		};
	};
	class M_Titan_AT: MissileBase{};
	class ACE_Javelin_FGM148: M_Titan_AT
	{
		irLock = 1;
		laserLock = 0;
		airLock = 0;
		manualControl = 0;
		hit = 1400;
		indirectHit = 20;
		indirectHitRange = 2;
		initTime = 2;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 5e-005;
			maxDeflection = 0.025;
			incDeflection = 5e-005;
			canVanillaLock = 0;
			defaultSeekerType = "Optic";
			seekerTypes[] = {"Optic"};
			defaultSeekerLockMode = "LOBL";
			seekerLockModes[] = {"LOBL"};
			seekerAngle = 180;
			seekerAccuracy = 1;
			seekerMinRange = 0;
			seekerMaxRange = 2500;
			seekLastTargetPos = 1;
			defaultAttackProfile = "JAV_TOP";
			attackProfiles[] = {"JAV_TOP","JAV_DIR"};
		};
	};
	class ACE_Javelin_FGM148_static: ACE_Javelin_FGM148
	{
		initTime = 0.25;
		effectsMissileInit = "RocketBackEffectsStaticRPG";
		class ace_missileguidance: ace_missileguidance{};
	};
};
class CfgMagazines
{
	class 12Rnd_PG_missiles;
	class 6Rnd_ACE_Hydra70_DAGR: 12Rnd_PG_missiles
	{
		ammo = "ACE_Hydra70_DAGR";
		count = 12;
		displayName = "6 Round DAGR";
		displayNameShort = "6 Round DAGR";
		descriptionShort = "6 Round DAGR";
		weight = 36;
	};
	class 12Rnd_ACE_Hydra70_DAGR: 6Rnd_ACE_Hydra70_DAGR
	{
		count = 12;
		displayName = "16 Round DAGR";
		displayNameShort = "16 Round DAGR";
		descriptionShort = "16 Round DAGR";
		weight = 72;
	};
	class 24Rnd_ACE_Hydra70_DAGR: 6Rnd_ACE_Hydra70_DAGR
	{
		count = 24;
		displayName = "24 Round DAGR";
		displayNameShort = "24 Round DAGR";
		descriptionShort = "24 Round DAGR";
		weight = 72;
	};
};
class CfgWeapons
{
	class missiles_DAGR;
	class ace_missileguidance_dagr: missiles_DAGR
	{
		canLock = 0;
		magazines[] = {"6Rnd_ACE_Hydra70_DAGR","12Rnd_ACE_Hydra70_DAGR","24Rnd_ACE_Hydra70_DAGR"};
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
};
