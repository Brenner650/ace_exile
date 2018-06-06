////////////////////////////////////////////////////////////////////
//DeRap: ace_fastroping\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:43:15 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_fastroping
	{
		name = "ACE3 - Fastroping";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","BaerMitUmlaut"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_fastroping
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\fastroping\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_fastroping
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\fastroping\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_fastroping
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\fastroping\XEH_postInit.sqf'";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ACE_FastRoping = "ACE_FastRoping";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class ACE_FastRoping: Crew
		{
			file = "\z\ace\addons\fastroping\anim\fastroping.rtm";
			interpolateTo[] = {"Unconscious",1};
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canReload = 0;
		};
	};
};
class CfgSounds
{
	class ace_fastroping_Rope
	{
		name = "ACE_Fastroping_Rope";
		sound[] = {"\z\ace\addons\fastroping\data\sounds\fastroping_rope.ogg",10,1.0};
		titles[] = {};
	};
	class ace_fastroping_Thud
	{
		name = "ACE_Fastroping_Thud";
		sound[] = {"\z\ace\addons\fastroping\data\sounds\fastroping_thud.ogg",10,1.0};
		titles[] = {};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription;
	};
	class ACE_Module: Module_F{};
	class ACE_moduleEquipFRIES: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_fastroping_Module_FRIES_DisplayName";
		icon = "\z\ace\addons\fastroping\UI\Icon_Module_FRIES_ca.paa";
		category = "ACE";
		function = "ace_fastroping_fnc_moduleEquipFRIES";
		functionPriority = 10;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "BaerMitUmlaut";
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_ace_fastroping_Module_FRIES_Description";
			sync[] = {"AnyVehicle"};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_SelfActions
		{
			class ACE_prepareFRIES
			{
				displayName = "$STR_ace_fastroping_Interaction_prepareFRIES";
				condition = "[vehicle _player] call ace_fastroping_fnc_canPrepareFRIES";
				statement = "[vehicle _player] call ace_fastroping_fnc_prepareFRIES";
				showDisabled = 0;
				priority = 1;
			};
			class ACE_stowFRIES
			{
				displayName = "$STR_ace_fastroping_Interaction_stowFRIES";
				condition = "[vehicle _player] call ace_fastroping_fnc_canStowFRIES";
				statement = "[vehicle _player] call ace_fastroping_fnc_stowFRIES";
				showDisabled = 0;
				priority = 1;
			};
			class ACE_deployRopes
			{
				displayName = "$STR_ace_fastroping_Interaction_deployRopes";
				condition = "[_player,vehicle _player] call ace_fastroping_fnc_canDeployRopes";
				statement = "[""ace_fastroping_deployRopes"",[vehicle _player]] call CBA_fnc_serverEvent";
				showDisabled = 0;
				priority = 1;
			};
			class ACE_cutRopes
			{
				displayName = "$STR_ace_fastroping_Interaction_cutRopes";
				condition = "[vehicle _player] call ace_fastroping_fnc_canCutRopes";
				statement = "[vehicle _player] call ace_fastroping_fnc_cutRopes";
				showDisabled = 0;
				priority = 1;
			};
			class ACE_fastRope
			{
				displayName = "$STR_ace_fastroping_Interaction_fastRope";
				condition = "[_player, vehicle _player] call ace_fastroping_fnc_canFastRope";
				statement = "[_player, vehicle _player] call ace_fastroping_fnc_fastRope";
				showDisabled = 0;
				priority = 1;
			};
		};
	};
	class Helicopter_Base_F;
	class ACE_friesBase: Helicopter_Base_F
	{
		destrType = "";
		class Turrets{};
		class ACE_Actions{};
		class ACE_SelfActions{};
		ace_cargo_hasCargo = 0;
		ace_cargo_space = 0;
	};
	class ACE_friesAnchorBar: ACE_friesBase
	{
		author = "jokoho48";
		scope = 1;
		model = "\z\ace\addons\fastroping\data\friesAnchorBar.p3d";
		animated = 1;
		class AnimationSources
		{
			class extendHookRight
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.5;
			};
			class extendHookLeft
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.5;
			};
		};
	};
	class ACE_friesGantry: ACE_friesBase
	{
		author = "jokoho48";
		scope = 1;
		model = "\z\ace\addons\fastroping\data\friesGantry.p3d";
		animated = 1;
		class AnimationSources
		{
			class adjustWidth
			{
				source = "user";
				initPhase = 0.211;
				animPeriod = 0;
			};
			class rotateGantryLeft
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class rotateGantryRight
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class hideGantryLeft
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class hideGantryRight
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
		};
	};
	class ACE_friesGantryReverse: ACE_friesGantry
	{
		class AnimationSources: AnimationSources
		{
			class adjustWidth
			{
				source = "user";
				initPhase = 0.213;
				animPeriod = 0;
			};
			class rotateGantryLeft
			{
				source = "user";
				initPhase = 0.5;
				animPeriod = 0;
			};
			class rotateGantryRight
			{
				source = "user";
				initPhase = 0.5;
				animPeriod = 0;
			};
		};
	};
	class ace_fastroping_helper: Helicopter_Base_F
	{
		author = "KoffeinFlummi";
		scope = 1;
		model = "\z\ace\addons\fastroping\data\helper.p3d";
		class ACE_Actions{};
		class Turrets{};
		class TransportItems{};
		ace_cargo_hasCargo = 0;
		ace_cargo_space = 0;
	};
	class Helicopter_Base_H;
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.41,1.38,0},{-1.41,1.38,0}};
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.25,1.5,-0.6},{-1.1,1.5,-0.6}};
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		ace_fastroping_enabled = 2;
		ace_fastroping_ropeOrigins[] = {"ropeOriginRight","ropeOriginLeft"};
		ace_fastroping_friesType = "ACE_friesAnchorBar";
		ace_fastroping_friesAttachmentPoint[] = {0.065,2.2,-0.15};
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property = "ace_fastroping_equipFRIES";
				control = "Checkbox";
				displayName = "$STR_ace_fastroping_Eden_equipFRIES";
				tooltip = "$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression = "if (_value) then {[_this] call ace_fastroping_fnc_equipFRIES}";
				typeName = "BOOL";
				condition = "objectVehicle";
				defaultValue = 0;
			};
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{0.94,-4.82,-1.16},{-0.94,-4.82,-1.16}};
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		class UserActions
		{
			class Ramp_Open;
			class Ramp_Close: Ramp_Open
			{
				condition = "[this,'CargoRamp_Open',[[0],[1],[2]]] call ace_fastroping_fnc_canCloseRamp";
			};
		};
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{0.75,-5.29,-0.11},{-0.87,-5.29,-0.11}};
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		class UserActions
		{
			class Ramp_Open;
			class Ramp_Close: Ramp_Open
			{
				condition = "[this,'Door_rear_source',[[0],[3],[4]]] call ace_fastroping_fnc_canCloseRamp";
			};
		};
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		ace_fastroping_enabled = 2;
		ace_fastroping_ropeOrigins[] = {"ropeOriginRight","ropeOriginLeft"};
		ace_fastroping_friesType = "ACE_friesGantryReverse";
		ace_fastroping_friesAttachmentPoint[] = {-1.04,2.5,-0.34};
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property = "ace_fastroping_equipFRIES";
				control = "Checkbox";
				displayName = "$STR_ace_fastroping_Eden_equipFRIES";
				tooltip = "$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression = "if (_value) then {[_this] call ace_fastroping_fnc_equipFRIES}";
				typeName = "BOOL";
				condition = "objectVehicle";
				defaultValue = 0;
			};
		};
	};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F
	{
		ace_fastroping_enabled = 2;
		ace_fastroping_ropeOrigins[] = {"ropeOriginRight","ropeOriginLeft"};
		ace_fastroping_friesType = "ACE_friesGantry";
		ace_fastroping_friesAttachmentPoint[] = {1.07,2.5,-0.5};
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property = "ace_fastroping_equipFRIES";
				control = "Checkbox";
				displayName = "$STR_ace_fastroping_Eden_equipFRIES";
				tooltip = "$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression = "if (_value) then {[_this] call ace_fastroping_fnc_equipFRIES}";
				typeName = "BOOL";
				condition = "objectVehicle";
				defaultValue = 0;
			};
		};
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class UserActions;
	};
	class O_Heli_Transport_04_bench_F: Heli_Transport_04_base_F
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{1.03,1.6,-0.23},{1.03,-1.36,-0.23},{-1.23,1.6,-0.23},{-1.23,-1.36,-0.23}};
	};
	class O_Heli_Transport_04_covered_F: Heli_Transport_04_base_F
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{0.83,-4.7,-0.03},{-1.02,-4.7,-0.03}};
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		class UserActions: UserActions
		{
			class CloseDoor_6;
			class Ramp_Close: CloseDoor_6
			{
				condition = "[this,'Door_6_source',[[0],[1],[2],[3]]] call ace_fastroping_fnc_canCloseRamp";
			};
		};
	};
};
class CfgWaypoints
{
	class ACE
	{
		displayName = "ACE";
		class Fastrope
		{
			displayName = "$STR_ace_fastroping_Waypoint_Fastrope";
			displayNameDebug = "Fastrope";
			file = "\z\ace\addons\fastroping\functions\fnc_deployAIWaypoint.sqf";
			icon = "\z\ace\addons\fastroping\UI\Icon_Waypoint.paa";
		};
	};
};
