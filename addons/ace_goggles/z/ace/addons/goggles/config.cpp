////////////////////////////////////////////////////////////////////
//DeRap: ace_goggles\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:43:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_goggles
	{
		name = "ACE3 - Goggles";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Garth 'L-H' de Wet"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_goggles
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\goggles\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_goggles
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\goggles\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_goggles
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\goggles\XEH_postInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_goggles
		{
			clientKilled = "_this call ace_goggles_fnc_handleKilled";
		};
	};
};
class CfgGlasses
{
	class None
	{
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance = 0;
		ACE_Protection = 0;
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class G_Combat: None
	{
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
	class G_Diving
	{
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\DivingGoggles.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\DivingGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
	class G_Lowprofile: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
	class G_Shades_Black: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
	};
	class G_Shades_Blue: None
	{
		ACE_Color[] = {0,0,1};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Shades_Green: None
	{
		ACE_Color[] = {0,1,0};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Shades_Red: None
	{
		ACE_Color[] = {1,0,0};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Spectacles: None
	{
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Spectacles_Tinted: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
	};
	class G_Sport_Blackred: None
	{
		ACE_Color[] = {1,0,0};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Sport_BlackWhite: None
	{
		ACE_Color[] = {0,0,1};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Sport_Blackyellow: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
	};
	class G_Sport_Checkered: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
	};
	class G_Sport_Greenblack: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
	};
	class G_Sport_Red: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Color[] = {0,0,0};
		ACE_Resistance = 1;
	};
	class G_Squares: None
	{
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Squares_Tinted: None
	{
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Tactical_Black: None
	{
		ACE_TintAmount = 8.0;
		ACE_Color[] = {0,0,-1.5};
		ACE_Resistance = 1;
	};
	class G_Tactical_Clear: None
	{
		ACE_TintAmount = 8.0;
		ACE_Color[] = {0,0,-1};
		ACE_Resistance = 1;
	};
	class G_Aviator: None
	{
		ACE_Color[] = {0,0,-1};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Lady_Blue: None
	{
		ACE_Color[] = {0,0,1};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Lady_Red: None
	{
		ACE_Color[] = {1,0,0};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Lady_Dark: None
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
	};
	class G_Lady_Mirror: None
	{
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
	};
	class G_Balaclava_blk;
	class G_Balaclava_combat: G_Balaclava_blk
	{
		ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
	class G_Balaclava_lowprofile: G_Balaclava_blk
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 2;
		ACE_Protection = 1;
	};
	class G_Bandanna_blk;
	class G_Bandanna_shades: G_Bandanna_blk
	{
		ACE_TintAmount = "8.0*2";
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
	class G_Bandanna_sport: G_Bandanna_shades
	{
		ACE_Color[] = {1,0,0};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
	class G_Bandanna_aviator: G_Bandanna_shades
	{
		ACE_Color[] = {0,0,-1};
		ACE_TintAmount = 8.0;
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
};
class RscTitles
{
	class RscPicture
	{
		idc = -1;
		type = 0;
		style = 48;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "RobotoCondensed";
		sizeEx = 0;
		lineSpacing = 0;
		fixedWidth = 0;
		shadow = 0;
		text = "";
		x = "safezoneX";
		y = "safezoneY";
		w = "safezoneW";
		h = "safezoneH";
	};
	class RscACE_Goggles_BaseTitle
	{
		idd = -1;
		onLoad = "uiNamespace setVariable ['ACE_Goggles_Display', _this select 0]";
		onUnload = "uiNamespace setVariable ['ACE_Goggles_Display', displayNull]";
		fadeIn = 0.5;
		fadeOut = 0.5;
		movingEnable = 0;
		duration = "10e10";
		name = "RscACE_Goggles_BaseTitle";
		class controls;
	};
	class RscACE_Goggles: RscACE_Goggles_BaseTitle
	{
		idd = 1044;
		name = "RscACE_Goggles";
		class controls
		{
			class gogglesImage: RscPicture
			{
				idc = 10650;
			};
		};
	};
	class RscACE_GogglesEffects: RscACE_Goggles_BaseTitle
	{
		idd = 1045;
		onLoad = "uiNamespace setVariable ['ACE_Goggles_DisplayEffects', _this select 0]";
		onUnload = "uiNamespace setVariable ['ACE_Goggles_DisplayEffects', displayNull]";
		name = "RscACE_GogglesEffects";
		fadeIn = 0;
		fadeOut = 0.5;
		class controls
		{
			class dirtImage: RscPicture
			{
				idc = 10660;
			};
			class dustImage: RscPicture
			{
				idc = 10662;
			};
		};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		GestureWipeFace[] = {"GestureWipeFace","gesture"};
	};
};
class CfgGesturesMale
{
	class States
	{
		class GestureFreezeStand;
		class GestureWipeFace: GestureFreezeStand
		{
			file = "\z\ace\addons\goggles\anim\WipeGlasses.rtm";
			canPullTrigger = 0;
		};
	};
};
class CfgWeapons
{
	class H_HelmetB;
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		ACE_Protection = 1;
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		ACE_Protection = 1;
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		ACE_Protection = 1;
	};
};
class RifleAssaultCloud
{
	ACE_Goggles_BulletCount = 4;
};
class MachineGunCloud
{
	ACE_Goggles_BulletCount = 3;
};
class SniperCloud
{
	ACE_Goggles_BulletCount = 1;
};
class ACE_Settings
{
	class ace_goggles_effects
	{
		category = "$STR_ace_goggles_DisplayName";
		displayName = "$STR_ace_goggles_effects_displayName";
		typeName = "SCALAR";
		value = 2;
		values[] = {"$STR_ace_common_Disabled","$STR_ace_goggles_effects_tintOnly","$STR_ace_goggles_enabled_tintAndEffects"};
	};
	class ace_goggles_showInThirdPerson
	{
		category = "$STR_ace_goggles_DisplayName";
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_goggles_ShowInThirdPerson";
	};
};
class CfgCloudlets
{
	class Default;
	class ACERainEffect: Default
	{
		interval = 0.001;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		particleType = "Billboard";
		lifeTime = 0.5;
		rotationVelocity = 1;
		weight = 100;
		volume = 0.0;
		rubbing = 1.7;
		size[] = {0.1};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {0,1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 1.2;
		positionVar[] = {2,2,2.5};
		sizeVar = 0.01;
		colorVar[] = {0,0,0,0.1};
		destroyOnWaterSurface = 1;
	};
};
