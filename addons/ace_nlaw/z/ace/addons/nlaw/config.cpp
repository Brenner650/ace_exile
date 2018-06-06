////////////////////////////////////////////////////////////////////
//DeRap: ace_nlaw\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:22 2018 : 'file' last modified on Mon Apr 16 21:47:12 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_nlaw
	{
		name = "ACE3 - NLAW";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_missileguidance"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"ACE_NLAW","ACE_NLAW_Explosion","ACE_NLAW_ShapedCharge"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_nlaw
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nlaw\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_nlaw
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nlaw\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_nlaw
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\nlaw\XEH_postInit.sqf'";
	};
};
class CfgAmmo
{
	class M_NLAW_AT_F;
	class ACE_NLAW: M_NLAW_AT_F
	{
		hit = 400;
		indirectHit = 20;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "ace_nlaw_seeker";
			seekerTypes[] = {"ace_nlaw_seeker"};
			defaultSeekerLockMode = "LOBL";
			seekerLockModes[] = {"LOBL"};
			seekLastTargetPos = 0;
			seekerAngle = 45;
			seekerAccuracy = 1;
			seekerMinRange = 0;
			seekerMaxRange = 10;
			defaultAttackProfile = "ace_nlaw_directAttack";
			attackProfiles[] = {"ace_nlaw_directAttack","ace_nlaw_overflyTopAttack"};
			showHintOnCycle = 1;
			onFired = "ace_nlaw_fnc_onFired";
		};
	};
	class ACE_NLAW_Explosion: ACE_NLAW
	{
		timeToLive = 0;
		model = "\A3\weapons_f\empty";
	};
	class ACE_NLAW_ShapedCharge: ACE_NLAW
	{
		timeToLive = 1;
		model = "\A3\weapons_f\empty";
		hit = 750;
		indirectHit = 0;
		indirectHitRange = 0;
		explosionSoundEffect = "";
		explosionEffects = "";
		CraterEffects = "";
		muzzleEffect = "";
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class NLAW_F: CA_LauncherMagazine
	{
		ammo = "ACE_NLAW";
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class launch_NLAW_F: Launcher_Base_F
	{
		ace_nlaw_enabled = 1;
		canLock = 1;
		class OpticsModes
		{
			class optic
			{
				distanceZoomMin = 0;
				distanceZoomMax = 0;
			};
		};
	};
};
class ace_missileguidance_AttackProfiles
{
	class ace_nlaw_directAttack
	{
		name = "$STR_ace_nlaw_directAttack";
		functionName = "ace_nlaw_fnc_attackProfile";
	};
	class ace_nlaw_overflyTopAttack: ace_nlaw_directAttack
	{
		name = "$STR_ace_nlaw_overflyTopAttack";
	};
};
class ace_missileguidance_SeekerTypes
{
	class ace_nlaw_seeker
	{
		functionName = "ace_nlaw_fnc_seeker";
	};
};
