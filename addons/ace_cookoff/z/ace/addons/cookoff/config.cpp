////////////////////////////////////////////////////////////////////
//DeRap: ace_cookoff\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:42:47 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_cookoff
	{
		name = "ACE3 - Cook off";
		units[] = {"ace_cookoff_Turret_MBT_01","ace_cookoff_Turret_MBT_02"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","Glowbal"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"ace_ammoExplosion","ACE_ammoExplosionLarge"};
	};
};
class ACE_Settings
{
	class ace_cookoff_enable
	{
		category = "$STR_ace_cookoff_displayName";
		displayName = "$STR_ace_cookoff_enable_name";
		description = "$STR_ace_cookoff_enable_tooltip";
		value = 0;
		typeName = "BOOL";
	};
	class ace_cookoff_enableAmmobox
	{
		category = "$STR_ace_cookoff_displayName";
		displayName = "$STR_ace_cookoff_enableBoxCookoff_name";
		description = "$STR_ace_cookoff_enableBoxCookoff_tooltip";
		value = 1;
		typeName = "BOOL";
	};
	class ace_cookoff_enableAmmoCookoff
	{
		category = "$STR_ace_cookoff_displayName";
		displayName = "$STR_ace_cookoff_enableAmmoCookoff_name";
		description = "$STR_ace_cookoff_enableAmmoCookoff_tooltip";
		value = 1;
		typeName = "BOOL";
	};
	class ace_cookoff_ammoCookoffDuration
	{
		category = "$STR_ace_cookoff_displayName";
		displayName = "$STR_ace_cookoff_ammoCookoffDuration_name";
		description = "$STR_ace_cookoff_ammoCookoffDuration_tooltip";
		value = 1;
		typeName = "SCALAR";
		sliderSettings[] = {0,5,1,1};
	};
	class ace_cookoff_probabilityCoef
	{
		category = "$STR_ace_cookoff_displayName";
		displayName = "$STR_ace_cookoff_probabilityCoef_name";
		description = "$STR_ace_cookoff_probabilityCoef_tooltip";
		value = 1;
		typeName = "SCALAR";
		sliderSettings[] = {0,5,1,1};
	};
};
class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class ace_attributes
			{
				class Attributes
				{
					class ace_cookoff_enable
					{
						property = "ace_cookoff_enable";
						control = "Checkbox";
						displayName = "$STR_ace_cookoff_enable_name";
						tooltip = "$STR_ace_cookoff_enable_tooltip";
						expression = "if !(_value) then {_this setVariable ['%s', _value, true];};";
						typeName = "BOOL";
						condition = "objectVehicle";
						defaultValue = "(missionNamespace getVariable [""ace_cookoff_enable"",true])";
					};
					class ace_cookoff_enableAmmoCookoff
					{
						property = "ace_cookoff_enableAmmoCookoff";
						control = "Checkbox";
						displayName = "$STR_ace_cookoff_enableAmmoCookoff_name";
						tooltip = "$STR_ace_cookoff_enableAmmoCookoff_tooltip";
						expression = "if !(_value) then {_this setVariable ['%s', _value, true];};";
						typeName = "BOOL";
						condition = "objectHasInventoryCargo";
						defaultValue = "if (_this isKindOf 'ReammoBox_F') then { (missionNamespace getVariable [""ace_cookoff_enableAmmobox"", true])} else { (missionNamespace getVariable [""ace_cookoff_enableAmmoCookoff"", true])};";
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_cookoff
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\cookoff\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_cookoff
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\cookoff\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_cookoff
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\cookoff\XEH_postInit.sqf'";
	};
};
class CfgAmmo
{
	class ShellBase;
	class ace_ammoExplosion: ShellBase
	{
		hit = 10;
		indirectHit = 0.5;
		indirectHitRange = 1;
		soundHit[] = {"",1,1,0};
		typicalSpeed = 100;
		explosive = 0;
		cost = 300;
		model = "\A3\Weapons_F\empty.p3d";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "ExploAmmoExplosion";
	};
	class SmallSecondary;
	class ACE_ammoExplosionLarge: SmallSecondary
	{
		soundHit[] = {"",1,1,0};
		model = "\A3\Weapons_F\empty.p3d";
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		soundHit1[] = {"",1,1,1};
		soundHit2[] = {"",1,1,1};
		soundHit3[] = {"",1,1,1};
		supersonicCrackFar[] = {"",1,1,1};
		supersonicCrackNear[] = {"",1,1,1};
		craterEffects = "ImpactEffectsMedium";
	};
};
class CfgCloudlets
{
	class ace_cookoff_CookOff
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {2,2,2};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,4,0};
		rotationVelocity = 1;
		weight = 0.4;
		volume = 0.45;
		rubbing = 0;
		size[] = {0.01,0.5,1,1,1.5,0.01,0.001};
		color[] = {{1,1,1,-4},{1,1,1,-3},{1,1,1,-2},{1,1,1,-1},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 5;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		position[] = {0,0,0};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		positionVarConst[] = {0,0,0};
		moveVelocityVar[] = {1,2,1};
		moveVelocityVarConst[] = {0,0,0};
		rotationVelocityVar = 3;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,2};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 2;
		colorCoef[] = {1,1,1,1};
		sizeCoef = 1;
		animationSpeedCoef = 1;
		particleEffects = "";
		postEffects = "";
		onSurface = 1;
		surfaceOffset = 0;
		keepOnSurface = 0;
		bounceOnSurface = 0.6;
		bounceOnSurfaceVar = 0;
		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = 0;
	};
};
class ace_cookoff_ExploAmmoExplosion
{
	class ExploAmmoFlash
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "ExploAmmoFlash";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExplosion
	{
		simulation = "light";
		type = "SparksLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.15;
	};
	class ExploAmmoSmoke
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "AutoCannonFired";
		intensity = 1.5;
		interval = 1.5;
		lifeTime = 1.5;
	};
};
class CfgSFX
{
	class ace_cookoff_CookOff_low
	{
		name = "ace_cookoff_cookoff_low";
		sound[] = {"\z\ace\addons\cookoff\sounds\cookoff_low_pressure.ogg",6,1,400,1,0,0,0};
		sounds[] = {"sound"};
		titles[] = {};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class ace_cookoff_CookOff_mid: ace_cookoff_CookOff_low
	{
		name = "ace_cookoff_cookoff_mid";
		sound[] = {"\z\ace\addons\cookoff\sounds\cookoff_mid_pressure.ogg",6,1,400,1,0,0,0};
	};
	class ace_cookoff_CookOff_high: ace_cookoff_CookOff_low
	{
		name = "ace_cookoff_cookoff_high";
		sound[] = {"\z\ace\addons\cookoff\sounds\cookoff_high_pressure.ogg",6,1,400,1,0,0,0};
	};
};
class CfgVehicles
{
	class Sound;
	class ace_cookoff_Sound_low: Sound
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ace_cookoff_Sound";
		scope = 1;
		sound = "ace_cookoff_CookOff_low";
	};
	class ace_cookoff_Sound_mid: ace_cookoff_Sound_low
	{
		sound = "ace_cookoff_CookOff_mid";
	};
	class ace_cookoff_Sound_high: ace_cookoff_Sound_low
	{
		sound = "ace_cookoff_CookOff_high";
	};
	class ThingX;
	class ace_cookoff_Turret_MBT_01: ThingX
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ace_cookoff_Turret_MBT_01";
		scope = 1;
		displayName = "$STR_ace_cookoff_generic_turret_wreck";
		model = "\A3\Structures_F\Wrecks\Wreck_Slammer_turret_F.p3d";
		icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
	};
	class ace_cookoff_Turret_MBT_02: ThingX
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ace_cookoff_Turret_MBT_02";
		scope = 1;
		displayName = "$STR_ace_cookoff_generic_turret_wreck";
		model = "\A3\Structures_F\Wrecks\Wreck_T72_turret_F.p3d";
		icon = "\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
	};
	class Tank;
	class Tank_F: Tank
	{
		ace_cookoff_ammoLocation = "HitHull";
		ace_cookoff_cookoffSelections[] = {"poklop_gunner","poklop_commander"};
		ace_cookoff_probability = 0.5;
	};
	class MBT_02_base_F: Tank_F
	{
		ace_cookoff_ammoLocation = "HitTurret";
	};
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		ace_cookoff_ammoLocation = "HitHull";
		ace_cookoff_cookoffSelections[] = {"poklop_gunner","poklop_commander"};
		ace_cookoff_probability = 0.8;
		explosionEffect = "FuelExplosionBig";
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		ace_cookoff_ignoreTurret = 1;
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		ace_cookoff_ignoreTurret = 1;
	};
	class B_MBT_01_base_F;
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		ace_cookoff_turret[] = {"ace_cookoff_Turret_MBT_01",{0,-1,0.5}};
	};
	class O_MBT_02_base_F;
	class O_MBT_02_cannon_F: O_MBT_02_base_F
	{
		ace_cookoff_turret[] = {"ace_cookoff_Turret_MBT_02",{0,-1,0}};
	};
	class MRAP_01_base_F: Car_F
	{
		ace_cookoff_engineSmokeOffset[] = {0,-2,0};
	};
	class MRAP_02_base_F: Car_F
	{
		ace_cookoff_engineSmokeOffset[] = {0,-2,0};
	};
	class MRAP_03_base_F: Car_F
	{
		ace_cookoff_engineSmokeOffset[] = {0,-2,0};
	};
	class Quadbike_01_base_F: Car_F
	{
		ace_cookoff_engineSmokeOffset[] = {0,1,0};
	};
};
