////////////////////////////////////////////////////////////////////
//DeRap: ace_gestures\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:16 2018 : 'file' last modified on Mon Apr 16 21:43:21 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_gestures
	{
		name = "ACE3 - Gestures";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interact_menu"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"joko // Jonas","Emperias","Zigomarvin"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_gestures_showOnInteractionMenu
	{
		value = 2;
		typeName = "SCALAR";
		isClientSettable = 1;
		category = "$STR_ace_interact_menu_Category_InteractionMenu";
		displayName = "$STR_ace_gestures_ShowOnInteractionMenu_displayName";
		description = "$STR_ace_gestures_ShowOnInteractionMenu_description";
		values[] = {"$STR_A3_OPTIONS_DISABLED","$STR_ace_gestures_JustKeybinds","$STR_ace_gestures_KeysAndInteractionMenu"};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		ace_gestures_forward = "ace_gestures_forward";
		ace_gestures_freeze = "ace_gestures_freeze";
		ace_gestures_cover = "ace_gestures_cover";
		ace_gestures_regroup = "ace_gestures_regroup";
		ace_gestures_engage = "ace_gestures_engage";
		ace_gestures_point = "ace_gestures_point";
		ace_gestures_hold = "ace_gestures_hold";
		ace_gestures_warning = "ace_gestures_warningS";
		ace_gestures_forwardStandLowered = "ace_gestures_forwardStandLowered";
		ace_gestures_freezeStandLowered = "ace_gestures_freezeStandLowered";
		ace_gestures_coverStandLowered = "ace_gestures_coverStandLowered";
		ace_gestures_regroupStandLowered = "ace_gestures_regroupStandLowered";
		ace_gestures_engageStandLowered = "ace_gestures_engageStandLowered";
		ace_gestures_pointStandLowered = "ace_gestures_pointStandLowered";
		ace_gestures_holdStandLowered = "ace_gestures_holdStandLowered";
		ace_gestures_warningStandLowered = "ace_gestures_warningStandLowered";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ace_gestures_forward[] = {"ace_gestures_forward","Gesture"};
			ace_gestures_freeze[] = {"ace_gestures_freeze","Gesture"};
			ace_gestures_cover[] = {"ace_gestures_cover","Gesture"};
			ace_gestures_regroup[] = {"ace_gestures_regroup","Gesture"};
			ace_gestures_engage[] = {"ace_gestures_engage","Gesture"};
			ace_gestures_point[] = {"ace_gestures_point","Gesture"};
			ace_gestures_hold[] = {"ace_gestures_hold","Gesture"};
			ace_gestures_warning[] = {"ace_gestures_warning","Gesture"};
			ace_gestures_forwardStandLowered[] = {"ace_gestures_forwardStandLowered","Gesture"};
			ace_gestures_freezeStandLowered[] = {"ace_gestures_freezeStandLowered","Gesture"};
			ace_gestures_coverStandLowered[] = {"ace_gestures_coverStandLowered","Gesture"};
			ace_gestures_regroupStandLowered[] = {"ace_gestures_regroupStandLowered","Gesture"};
			ace_gestures_engageStandLowered[] = {"ace_gestures_engageStandLowered","Gesture"};
			ace_gestures_pointStandLowered[] = {"ace_gestures_pointStandLowered","Gesture"};
			ace_gestures_holdStandLowered[] = {"ace_gestures_holdStandLowered","Gesture"};
			ace_gestures_warningStandLowered[] = {"ace_gestures_warningStandLowered","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class BlendAnims
	{
		ace_gestures_LeftArm[] = {"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
	};
	class States
	{
		class ace_gestures_Base: Default
		{
			actions = "NoActions";
			canPullTrigger = 0;
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			disableWeapons = 0;
			enableBinocular = 1;
			enableMissile = 1;
			enableOptics = 0;
			equivalentTo = "";
			file = "\A3\anims_f\Data\anim\Sdr\gst\GestureHi.rtm";
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			interpolateFrom[] = {};
			interpolateTo[] = {};
			interpolateWith[] = {};
			interpolationRestart = 0;
			interpolationSpeed = 6;
			looped = 0;
			mask = "ace_gestures_LeftArm";
			minPlayTime = 0.5;
			preload = 0;
			ragdoll = 0;
			relSpeedMax = 1;
			relSpeedMin = 1;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 1;
			soundEdge[] = {0.5,1};
			soundEnabled = 1;
			soundOverride = "";
			speed = -2;
			static = 0;
			terminal = 0;
			Walkcycles = 1;
			weaponIK = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.1,0,0.8,0,1,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
		};
		class ace_gestures_forward: ace_gestures_Base
		{
			file = "\z\ace\addons\gestures\anim\ace_forward.rtm";
			speed = 1;
		};
		class ace_gestures_forwardStandLowered: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_forward_stand_lowered.rtm";
		};
		class ace_gestures_freeze: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_freeze.rtm";
			speed = 0.6;
		};
		class ace_gestures_freezeStandLowered: ace_gestures_freeze
		{
			file = "\z\ace\addons\gestures\anim\ace_freeze_stand_lowered.rtm";
		};
		class ace_gestures_cover: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_cover.rtm";
			speed = 0.8;
		};
		class ace_gestures_coverStandLowered: ace_gestures_cover
		{
			file = "\z\ace\addons\gestures\anim\ace_cover_stand_lowered.rtm";
		};
		class ace_gestures_regroup: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_regroup.rtm";
			speed = 0.8;
		};
		class ace_gestures_regroupStandLowered: ace_gestures_regroup
		{
			file = "\z\ace\addons\gestures\anim\ace_regroup_stand_lowered.rtm";
		};
		class ace_gestures_engage: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_engage.rtm";
			speed = 0.9;
		};
		class ace_gestures_engageStandLowered: ace_gestures_engage
		{
			file = "\z\ace\addons\gestures\anim\ace_engage_stand_lowered.rtm";
		};
		class ace_gestures_point: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_point.rtm";
			speed = 0.8;
		};
		class ace_gestures_pointStandLowered: ace_gestures_point
		{
			file = "\z\ace\addons\gestures\anim\ace_point_stand_lowered.rtm";
		};
		class ace_gestures_hold: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_hold.rtm";
			speed = 0.8;
		};
		class ace_gestures_holdStandLowered: ace_gestures_hold
		{
			file = "\z\ace\addons\gestures\anim\ace_hold_stand_lowered.rtm";
		};
		class ace_gestures_warning: ace_gestures_forward
		{
			file = "\z\ace\addons\gestures\anim\ace_warning.rtm";
			speed = 0.8;
		};
		class ace_gestures_warningStandLowered: ace_gestures_warning
		{
			file = "\z\ace\addons\gestures\anim\ace_warning_stand_lowered.rtm";
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_gestures
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gestures\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_gestures
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gestures\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_gestures
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gestures\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ace_gestures
			{
				displayName = "$STR_ace_gestures_Gestures";
				condition = "(canStand _target) && {ace_gestures_showOnInteractionMenu== 2}";
				statement = "";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 1;
				priority = 3.5;
				icon = "\z\ace\addons\gestures\UI\gestures_ca.paa";
				class ace_gestures_Advance
				{
					displayName = "$STR_ace_gestures_Advance";
					condition = "true";
					statement = "[_target,'gestureAdvance'] call ace_common_fnc_doGesture";
					showDisabled = 1;
					priority = 1.9;
				};
				class ace_gestures_Go
				{
					displayName = "$STR_ace_gestures_Go";
					condition = "true";
					statement = "[_target,selectRandom ['gestureGo','gestureGoB']] call ace_common_fnc_doGesture";
					showDisabled = 1;
					priority = 1.8;
				};
				class ace_gestures_Follow
				{
					displayName = "$STR_ace_gestures_Follow";
					condition = "true";
					statement = "[_target,'gestureFollow'] call ace_common_fnc_doGesture";
					showDisabled = 1;
					priority = 1.7;
				};
				class ace_gestures_Up
				{
					displayName = "$STR_ace_gestures_Up";
					condition = "true";
					statement = "[_target,'gestureUp'] call ace_common_fnc_doGesture";
					showDisabled = 1;
					priority = 1.5;
				};
				class ace_gestures_CeaseFire
				{
					displayName = "$STR_ace_gestures_CeaseFire";
					condition = "true";
					statement = "[_target,'gestureCeaseFire'] call ace_common_fnc_doGesture";
					showDisabled = 1;
					priority = 1.3;
				};
				class ace_gestures_Stop
				{
					displayName = "$STR_ace_gestures_Stop";
					condition = "true";
					statement = "[_target,'gestureFreeze'] call ace_common_fnc_doGesture";
					showDisabled = 1;
					priority = 1.2;
				};
				class ace_gestures_Forward
				{
					displayName = "$STR_ace_gestures_Forward";
					condition = "true";
					statement = """ace_gestures_forward"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.9;
				};
				class ace_gestures_Regroup
				{
					displayName = "$STR_ace_gestures_Regroup";
					condition = "true";
					statement = """ace_gestures_regroup"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.8;
				};
				class ace_gestures_Freeze
				{
					displayName = "$STR_ace_gestures_Freeze";
					condition = "true";
					statement = """ace_gestures_freeze"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.7;
				};
				class ace_gestures_Cover
				{
					displayName = "$STR_ace_gestures_Cover";
					condition = "true";
					statement = """ace_gestures_cover"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.6;
				};
				class ace_gestures_Point
				{
					displayName = "$STR_ace_gestures_Point";
					condition = "true";
					statement = """ace_gestures_point"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.5;
				};
				class ace_gestures_Engage
				{
					displayName = "$STR_ace_gestures_Engage";
					condition = "true";
					statement = """ace_gestures_engage"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.4;
				};
				class ace_gestures_Hold
				{
					displayName = "$STR_ace_gestures_Hold";
					condition = "true";
					statement = """ace_gestures_hold"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.3;
				};
				class ace_gestures_Warning
				{
					displayName = "$STR_ace_gestures_Warning";
					condition = "true";
					statement = """ace_gestures_warning"" call ace_gestures_fnc_playSignal";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 1.2;
				};
			};
		};
	};
};
