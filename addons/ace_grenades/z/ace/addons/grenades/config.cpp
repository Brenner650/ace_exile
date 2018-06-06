////////////////////////////////////////////////////////////////////
//DeRap: ace_grenades\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:43:23 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_grenades
	{
		name = "ACE3 - Grenades";
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
		magazines[] = {"ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Yellow"};
		ammo[] = {"Grenade","FlareBase","F_40mm_White","F_20mm_White","F_Signal_Green","Flare_82mm_AMOS_White","ACE_F_Hand_White","ACE_F_Hand_Red","ACE_F_Hand_Green","ACE_F_Hand_Yellow","ACE_G_Handflare_White","ACE_G_Handflare_Red","ACE_G_Handflare_Green","ACE_G_Handflare_Yellow","ACE_G_M84","Chemlight_base","ACE_G_M14"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_grenades
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\grenades\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_grenades
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\grenades\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_grenades
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\grenades\XEH_postInit.sqf'";
	};
};
class CfgAmmo
{
	class Default;
	class Grenade: Default
	{
		ace_grenades_pullPinSound[] = {"A3\sounds_f\weapons\grenades\Grenade_PullPin.wss",1.5,1,10};
		impactGroundSoft[] = {};
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		intensity = 20000;
		flareSize = 12;
		timeToLive = 60;
	};
	class F_40mm_White: FlareBase
	{
		intensity = 40000;
		flareSize = 12;
	};
	class F_20mm_White: FlareBase
	{
		intensity = 20000;
		flareSize = 6;
	};
	class F_Signal_Green: FlareBase
	{
		intensity = 20000;
		flareSize = 12;
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		intensity = 80000;
		flareSize = 12;
		timeToLive = 60;
	};
	class ACE_F_Hand_White: F_20mm_White
	{
		timeToLive = 60;
	};
	class F_20mm_Red;
	class ACE_F_Hand_Red: F_20mm_Red
	{
		timeToLive = 60;
	};
	class F_20mm_Green;
	class ACE_F_Hand_Green: F_20mm_Green
	{
		timeToLive = 60;
	};
	class F_20mm_Yellow;
	class ACE_F_Hand_Yellow: F_20mm_Yellow
	{
		timeToLive = 60;
	};
	class SmokeShell;
	class ACE_G_Handflare_White: SmokeShell
	{
		ace_grenades_flare = 1;
		ace_grenades_color[] = {0.5,0.5,0.5,0.5};
		ace_grenades_pullPinSound[] = {"A3\sounds_f\weapons\smokeshell\smoke_1.wss",0.4,1,10};
		model = "\A3\weapons_f\ammo\flare_white";
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalSpeed = 22;
		cost = 100;
		deflecting = 30;
		explosionTime = 3;
		timeToLive = 60;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "1 + 2";
		smokeColor[] = {0,0,0,0};
		effectsSmoke = "ACE_HandFlareEffect";
		whistleDist = 0;
	};
	class ACE_G_Handflare_Red: ACE_G_Handflare_White
	{
		ace_grenades_color[] = {0.5,0.25,0.25,0.5};
		model = "\A3\weapons_f\ammo\flare_red";
	};
	class ACE_G_Handflare_Green: ACE_G_Handflare_White
	{
		ace_grenades_color[] = {0.25,0.5,0.25,0.5};
		model = "\A3\weapons_f\ammo\flare_green";
	};
	class ACE_G_Handflare_Yellow: ACE_G_Handflare_White
	{
		ace_grenades_color[] = {0.5,0.5,0.25,0.5};
		model = "\A3\weapons_f\ammo\flare_yellow";
	};
	class ACE_G_M84: SmokeShell
	{
		ace_grenades_flashbang = 1;
		model = "\z\ace\addons\grenades\models\ACE_m84_thrown.p3d";
		dangerRadiusHit = -1;
		suppressionRadiusHit = 20;
		typicalSpeed = 22;
		cost = 40;
		explosive = "1E-7";
		deflecting = 15;
		explosionTime = 2.3;
		timeToLive = 6;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "64";
		smokeColor[] = {0,0,0,0};
		effectsSmoke = "ACE_M84FlashbangEffect";
		whistleDist = 0;
	};
	class Chemlight_base: SmokeShell
	{
		ace_grenades_pullPinSound[] = {"A3\sounds_f\weapons\Other\dry4.wss",3,2,10};
		soundImpactHard1[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,1.8,65};
		soundImpactHard2[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,1.9,65};
		soundImpactHard3[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,1.6,65};
		soundImpactHard4[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,2,65};
		soundImpactHard5[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,1.5,65};
		soundImpactHard6[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,1.7,65};
		soundImpactHard7[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,2.1,65};
		soundImpactIron1[] = {"A3\sounds_f\characters\footsteps\concrete_run_1",1,2.1,95};
		soundImpactIron2[] = {"A3\sounds_f\characters\footsteps\steel_run_4",1,1.75,95};
		soundImpactIron3[] = {"A3\sounds_f\characters\footsteps\steel_run_4",1,1.6,95};
		soundImpactIron4[] = {"A3\sounds_f\characters\footsteps\steel_run_2",1,2,95};
		soundImpactIron5[] = {"A3\sounds_f\characters\footsteps\steel_run_2",1,2.1,95};
		soundImpactWoodExt1[] = {"A3\sounds_f\characters\footsteps\wood_run_ext_1",1,1.1,75};
		soundImpactWoodExt2[] = {"A3\sounds_f\characters\footsteps\wood_run_ext_1",1,1.15,75};
		soundImpactWoodExt3[] = {"A3\sounds_f\characters\footsteps\wood_run_ext_2",1,1.1,75};
		soundImpactWoodExt4[] = {"A3\sounds_f\characters\footsteps\wood_run_ext_2",1,1.15,75};
	};
	class ACE_G_M14: SmokeShell
	{
		ace_grenades_incendiary = 1;
		model = "\z\ace\addons\grenades\models\ace_anm14th3_armed.p3d";
		hit = 5;
		indirectHit = 4;
		indirectHitRange = 1.1;
		dangerRadiusHit = 50;
		suppressionRadiusHit = 18;
		deflecting = 20;
		explosionTime = 3;
		timeToLive = 40;
		fuseDistance = 0;
		SmokeShellSoundHit1[] = {"\z\ace\addons\grenades\sounds\incen_exp1.ogg",3.1622777,1,500};
		SmokeShellSoundHit2[] = {"\z\ace\addons\grenades\sounds\incen_exp2.ogg",3.1622777,1,500};
		grenadeFireSound[] = {"SmokeShellSoundHit1",0.5,"SmokeShellSoundHit2",0.5};
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "64 + 1";
		effectsSmoke = "ACE_Incendiary";
		whistleDist = 0;
		whistleOnFire = 0;
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"ACE_HandFlare_WhiteMuzzle","ACE_HandFlare_RedMuzzle","ACE_HandFlare_GreenMuzzle","ACE_HandFlare_YellowMuzzle","ACE_M84Muzzle","ACE_M14Muzzle"};
		class ThrowMuzzle;
		class ACE_HandFlare_WhiteMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_HandFlare_White"};
		};
		class ACE_HandFlare_RedMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_HandFlare_Red"};
		};
		class ACE_HandFlare_GreenMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_HandFlare_Green"};
		};
		class ACE_HandFlare_YellowMuzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_HandFlare_Yellow"};
		};
		class ACE_M84Muzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_M84"};
		};
		class ACE_M14Muzzle: ThrowMuzzle
		{
			magazines[] = {"ACE_M14"};
		};
	};
};
class CfgMagazines
{
	class HandGrenade;
	class ACE_HandFlare_Base: HandGrenade
	{
		scope = 1;
		value = 2;
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		mass = 4;
		initSpeed = 22;
	};
	class ACE_HandFlare_White: ACE_HandFlare_Base
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayname = "$STR_ace_grenades_M127A1_White_Name";
		descriptionShort = "$STR_ace_grenades_M127A1_White_Description";
		displayNameShort = "$STR_ace_grenades_M127A1_White_NameShort";
		model = "\A3\weapons_f\ammo\flare_white";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		ammo = "ACE_G_Handflare_White";
	};
	class ACE_HandFlare_Red: ACE_HandFlare_Base
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayname = "$STR_ace_grenades_M127A1_Red_Name";
		descriptionShort = "$STR_ace_grenades_M127A1_Red_Description";
		displayNameShort = "$STR_ace_grenades_M127A1_Red_NameShort";
		model = "\A3\weapons_f\ammo\flare_red";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_red_ca.paa";
		ammo = "ACE_G_Handflare_Red";
	};
	class ACE_HandFlare_Green: ACE_HandFlare_Base
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayname = "$STR_ace_grenades_M127A1_Green_Name";
		descriptionShort = "$STR_ace_grenades_M127A1_Green_Description";
		displayNameShort = "$STR_ace_grenades_M127A1_Green_NameShort";
		model = "\A3\weapons_f\ammo\flare_green";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_green_ca.paa";
		ammo = "ACE_G_Handflare_Green";
	};
	class ACE_HandFlare_Yellow: ACE_HandFlare_Base
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayname = "$STR_ace_grenades_M127A1_Yellow_Name";
		descriptionShort = "$STR_ace_grenades_M127A1_Yellow_Description";
		displayNameShort = "$STR_ace_grenades_M127A1_Yellow_NameShort";
		model = "\A3\weapons_f\ammo\flare_yellow";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_yellow_ca.paa";
		ammo = "ACE_G_Handflare_Yellow";
	};
	class ACE_M84: HandGrenade
	{
		author = "$STR_ace_common_ACETeam";
		displayname = "$STR_ace_grenades_M84_Name";
		descriptionShort = "$STR_ace_grenades_M84_Description";
		displayNameShort = "$STR_ace_grenades_M84_NameShort";
		model = "\z\ace\addons\grenades\models\ACE_m84.p3d";
		picture = "\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
		ammo = "ACE_G_M84";
		mass = 4;
	};
	class SmokeShell;
	class ACE_M14: SmokeShell
	{
		author = "$STR_ace_common_ACETeam";
		displayname = "$STR_ace_grenades_Incendiary_Name";
		descriptionShort = "$STR_ace_grenades_Incendiary_Description";
		displayNameShort = "$STR_ace_grenades_Incendiary_NameShort";
		model = "\z\ace\addons\grenades\models\ace_anm14th3.p3d";
		picture = "\z\ace\addons\grenades\UI\ace_anm14th3_x_ca.paa";
		ammo = "ACE_G_M14";
		mass = 4;
	};
	class 3Rnd_UGL_FlareGreen_F;
	class 6Rnd_GreenSignal_F: 3Rnd_UGL_FlareGreen_F
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "F_40mm_Green";
		initSpeed = 120;
	};
	class 6Rnd_RedSignal_F: 6Rnd_GreenSignal_F
	{
		author = "$STR_ace_common_ACETeam";
		ammo = "F_40mm_Red";
		initSpeed = 120;
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class Box_NATO_Grenades_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_HandFlare_White
			{
				magazine = "ACE_HandFlare_White";
				count = 12;
			};
			class _xx_ACE_HandFlare_Green
			{
				magazine = "ACE_HandFlare_Green";
				count = 12;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};
		};
	};
	class EAST_Box_Base;
	class Box_East_Grenades_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_HandFlare_Yellow
			{
				magazine = "ACE_HandFlare_Yellow";
				count = 12;
			};
			class _xx_ACE_HandFlare_Red
			{
				magazine = "ACE_HandFlare_Red";
				count = 12;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};
		};
	};
	class IND_Box_Base;
	class Box_IND_Grenades_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_HandFlare_Yellow
			{
				magazine = "ACE_HandFlare_Yellow";
				count = 12;
			};
			class _xx_ACE_HandFlare_Green
			{
				magazine = "ACE_HandFlare_Green";
				count = 12;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportMagazines
		{
			class _xx_ACE_HandFlare_White
			{
				magazine = "ACE_HandFlare_White";
				count = 12;
			};
			class _xx_ACE_HandFlare_Red
			{
				magazine = "ACE_HandFlare_Red";
				count = 12;
			};
			class _xx_ACE_HandFlare_Green
			{
				magazine = "ACE_HandFlare_Green";
				count = 12;
			};
			class _xx_ACE_HandFlare_Yellow
			{
				magazine = "ACE_HandFlare_Yellow";
				count = 12;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};
			class _xx_ACE_M14
			{
				magazine = "ACE_M14";
				count = 12;
			};
		};
	};
};
class ACE_M84FlashbangEffect{};
class ACE_HandFlareEffect{};
class ACE_Incendiary
{
	class Cmeasures1
	{
		simulation = "particles";
		type = "Cmeasures1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 25;
	};
	class Cmeasures2
	{
		simulation = "particles";
		type = "Cmeasures2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 25;
	};
	class Light1
	{
		simulation = "light";
		type = "CmeasuresLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 25;
	};
};
