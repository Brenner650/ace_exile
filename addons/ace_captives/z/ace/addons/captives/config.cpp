////////////////////////////////////////////////////////////////////
//DeRap: ace_captives\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:42:12 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_captives
	{
		name = "ACE3 - Captives";
		units[] = {"ace_captives_ModuleSettings","ace_captives_ModuleSurrender","ace_captives_ModuleHandcuffed"};
		weapons[] = {"ACE_CableTie"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ACE_Interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_captives_allowHandcuffOwnSide
	{
		category = "$STR_ace_captives_DisplayName";
		displayName = "$STR_ace_captives_ModuleSettings_handcuffSide_name";
		description = "$STR_ace_captives_ModuleSettings_handcuffSide_description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_captives_requireSurrender
	{
		category = "$STR_ace_captives_DisplayName";
		displayName = "$STR_ace_captives_ModuleSettings_requireSurrender_name";
		description = "$STR_ace_captives_ModuleSettings_requireSurrender_description";
		typeName = "SCALAR";
		values[] = {"$STR_ace_common_Disabled","$STR_ace_captives_SurrenderOnly","$STR_ace_captives_SurrenderOrNoWeapon"};
		value = 1;
	};
	class ace_captives_allowSurrender
	{
		category = "$STR_ace_captives_DisplayName";
		displayName = "$STR_ace_captives_ModuleSettings_allowSurrender_name";
		description = "$STR_ace_captives_ModuleSettings_allowSurrender_description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_captives_requireSurrenderAi
	{
		category = "$STR_ace_captives_DisplayName";
		displayName = "$STR_ace_captives_ModuleSettings_requireSurrenderAi_name";
		description = "$STR_ace_captives_ModuleSettings_requireSurrenderAi_description";
		typeName = "BOOL";
		value = 0;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_captives
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\captives\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_captives
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\captives\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_captives
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\captives\XEH_postInit.sqf'";
	};
};
class Extended_DisplayUnload_EventHandlers
{
	class RscDisplayCurator
	{
		ace_captives = "call ace_captives_fnc_handleZeusDisplayChanged";
	};
};
class Extended_GetIn_EventHandlers
{
	class All
	{
		class ace_captives_AutoDetachCaptive
		{
			getIn = "_this call ace_captives_fnc_handleGetIn";
		};
	};
};
class Extended_GetOut_EventHandlers
{
	class All
	{
		class ace_captives_AutoDetachCaptive
		{
			getOut = "_this call ace_captives_fnc_handleGetOut";
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class ace_captives_InitPost
		{
			init = "_this call ace_captives_fnc_handleUnitInitPost";
		};
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_captives
		{
			respawn = "_this call ace_captives_fnc_handleRespawn";
		};
	};
};
class Extended_Local_EventHandlers
{
	class CAManBase
	{
		class ace_captives
		{
			local = "call ace_captives_fnc_handleLocal";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		class ace_captives
		{
			killed = "_this call ace_captives_fnc_handleKilled";
		};
	};
};
class CfgMovesBasic
{
	class Actions
	{
		class CivilStandActions;
		class ACE_CivilStandHandcuffedActions: CivilStandActions
		{
			turnL = "";
			turnR = "";
			stop = "ACE_AmovPercMstpScapWnonDnon";
			StopRelaxed = "ACE_AmovPercMstpScapWnonDnon";
			default = "ACE_AmovPercMstpScapWnonDnon";
			PutDown = "";
			getOver = "";
			throwPrepare = "";
			throwGrenade[] = {"","Gesture"};
		};
		class ACE_CivilStandSurrenderActions: ACE_CivilStandHandcuffedActions
		{
			stop = "ACE_AmovPercMstpSsurWnonDnon";
			StopRelaxed = "ACE_AmovPercMstpSsurWnonDnon";
			default = "ACE_AmovPercMstpSsurWnonDnon";
			PutDown = "";
		};
		class ACE_CivilHandCuffedFFVActions: ACE_CivilStandHandcuffedActions
		{
			stop = "ACE_HandcuffedFFV";
			StopRelaxed = "ACE_HandcuffedFFV";
			default = "ACE_HandcuffedFFV";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class StandBase;
	class States
	{
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			ConnectTo[] += {"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon",0.1,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",0.1};
		};
		class CutSceneAnimationBase;
		class ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon: CutSceneAnimationBase
		{
			actions = "ACE_CivilStandHandcuffedActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_EaseIn";
			speed = 1;
			looped = 0;
			interpolationRestart = 2;
			ConnectTo[] = {"ACE_AmovPercMstpScapWnonDnon",0.1};
			InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
			canReload = 0;
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
		class ACE_AmovPercMstpScapWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_Ease";
			speed = 0;
			ConnectTo[] = {"ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {"Unconscious",0.01};
			looped = 1;
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
		class ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon
		{
			actions = "CivilStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_easeout";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpScapWnonDnon",0.1};
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
		class ACE_HandcuffedFFV: ACE_AmovPercMstpScapWnonDnon
		{
			file = "\A3\cargoposes_F_heli\anim\passenger_flatground_3idleunarmed.rtm";
			actions = "ACE_CivilHandCuffedFFVActions";
			ConnectTo[] = {};
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
		class ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon: CutSceneAnimationBase
		{
			actions = "ACE_CivilStandSurrenderActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon";
			speed = 1;
			looped = 0;
			interpolationRestart = 2;
			ConnectTo[] = {"ACE_AmovPercMstpSsurWnonDnon",0.1};
			InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
			canReload = 0;
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
		class ACE_AmovPercMstpSsurWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\sur\non\AmovPercMstpSsurWnonDnon";
			speed = 0;
			looped = 1;
			ConnectTo[] = {"ACE_AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {"Unconscious",0.01};
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
		class ACE_AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon: ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon
		{
			speed = 0.5;
			actions = "CivilStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\sur\non\AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {"Unconscious",0.01,"ACE_AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",0.1};
			head = "headDefault";
			aimingBody = "aimingNo";
			forceAim = 1;
			static = 1;
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_ApplyHandcuffs
			{
				displayName = "$STR_ace_captives_SetCaptive";
				selection = "righthand";
				distance = 2;
				condition = "[_player,_target] call ace_captives_fnc_canApplyHandcuffs";
				statement = "[_player,_target] call ace_captives_fnc_doApplyHandcuffs";
				exceptions[] = {"isNotSwimming","isNotInside"};
				icon = "\z\ace\addons\captives\UI\handcuff_ca.paa";
			};
			class ACE_MainActions
			{
				class ACE_RemoveHandcuffs
				{
					displayName = "$STR_ace_captives_ReleaseCaptive";
					selection = "righthand";
					distance = 2;
					condition = "[_player,_target] call ace_captives_fnc_canRemoveHandcuffs";
					statement = "[_player,_target] call ace_captives_fnc_doRemoveHandcuffs";
					exceptions[] = {"isNotSwimming","isNotInside"};
					icon = "\z\ace\addons\captives\UI\handcuff_ca.paa";
				};
				class ACE_EscortCaptive
				{
					displayName = "$STR_ace_captives_EscortCaptive";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canEscortCaptive";
					statement = "[_player,_target,true] call ace_captives_fnc_doEscortCaptive";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.3;
				};
				class ACE_StopEscorting
				{
					displayName = "$STR_ace_captives_StopEscorting";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canStopEscorting";
					statement = "[_player,_target,false] call ace_captives_fnc_doEscortCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.3;
				};
				class ACE_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,_target,objNull] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,_target,objNull] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.2;
					insertChildren = "call ace_captives_fnc_addLoadCaptiveActions";
				};
				class ace_captives_UnloadCaptive
				{
					displayName = "$STR_ace_captives_UnloadCaptive";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canUnloadCaptive";
					statement = "[_player,_target] call ace_captives_fnc_doUnloadCaptive";
					exceptions[] = {"isNotSwimming"};
					priority = 1.2;
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_StopEscortingSelf
			{
				displayName = "$STR_ace_captives_StopEscorting";
				condition = "[_player,objNull] call ace_captives_fnc_canStopEscorting";
				statement = "[_player,objNull,false] call ace_captives_fnc_doEscortCaptive";
				exceptions[] = {"isNotEscorting","isNotSwimming"};
				showDisabled = 0;
				priority = 2.3;
			};
			class ACE_StartSurrenderingSelf
			{
				displayName = "$STR_ace_captives_StartSurrendering";
				condition = "[_player,true] call ace_captives_fnc_canSurrender";
				statement = "[_player,true] call ace_captives_fnc_setSurrendered";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 0;
				priority = 0;
				icon = "\z\ace\addons\captives\UI\Surrender_ca.paa";
			};
			class ACE_StopSurrenderingSelf
			{
				displayName = "$STR_ace_captives_StopSurrendering";
				condition = "[_player,false] call ace_captives_fnc_canSurrender";
				statement = "[_player,false] call ace_captives_fnc_setSurrendered";
				exceptions[] = {"isNotSurrendering","isNotSwimming"};
				showDisabled = 0;
				priority = 0;
				icon = "\z\ace\addons\captives\UI\Surrender_ca.paa";
			};
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_captives_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,objNull,_target] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,objNull,_target] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					priority = 1.2;
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_captives_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,objNull,_target] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,objNull,_target] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					priority = 1.2;
				};
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_captives_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,objNull,_target] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,objNull,_target] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					priority = 1.2;
				};
			};
		};
	};
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_captives_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,objNull,_target] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,objNull,_target] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					priority = 1.2;
				};
			};
		};
	};
	class Ship;
	class Ship_F: Ship
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_captives_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,objNull,_target] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,objNull,_target] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					priority = 1.2;
				};
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_captives_LoadCaptive
				{
					displayName = "$STR_ace_captives_LoadCaptive";
					distance = 4;
					condition = "[_player,objNull,_target] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,objNull,_target] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting","isNotSwimming"};
					priority = 1.2;
				};
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 12;
			};
		};
	};
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits{};
		class ModuleDescription{};
	};
	class ace_captives_ModuleSurrender: Module_F
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_captives_ModuleSurrender_DisplayName";
		function = "ace_captives_fnc_moduleSurrender";
		scope = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\z\ace\addons\captives\UI\Icon_Module_Make_Unit_Surrender_ca.paa";
		functionPriority = 0;
		class Arguments{};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_ace_captives_ModuleSurrender_Description";
			sync[] = {"AnyAI"};
		};
	};
	class ace_captives_ModuleHandcuffed: Module_F
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_captives_ModuleHandcuffed_DisplayName";
		function = "ace_captives_fnc_moduleHandcuffed";
		scope = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\z\ace\addons\captives\UI\Icon_Module_Make_Unit_Handcuffed_ca.paa";
		functionPriority = 0;
		class Arguments{};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_ace_captives_ModuleHandcuffed_Description";
			sync[] = {"AnyAI"};
		};
	};
	class ACE_Module: Module_F{};
	class ace_captives_moduleSettings: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_captives_ModuleSettings_DisplayName";
		function = "ace_captives_fnc_moduleSettings";
		scope = 1;
		icon = "\z\ace\addons\captives\UI\Icon_Module_settings_ca.paa";
		isGlobal = 1;
		isSingular = 1;
		class Arguments
		{
			class allowHandcuffOwnSide
			{
				displayName = "$STR_ace_captives_ModuleSettings_handcuffSide_name";
				description = "$STR_ace_captives_ModuleSettings_handcuffSide_description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class allowSurrender
			{
				displayName = "$STR_ace_captives_ModuleSettings_allowSurrender_name";
				description = "$STR_ace_captives_ModuleSettings_allowSurrender_description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class requireSurrender
			{
				displayName = "$STR_ace_captives_ModuleSettings_requireSurrender_name";
				description = "$STR_ace_captives_ModuleSettings_requireSurrender_description";
				typeName = "NUMBER";
				class values
				{
					class disable
					{
						name = "$STR_ace_common_No";
						value = 0;
					};
					class Surrender
					{
						name = "$STR_ace_captives_SurrenderOnly";
						value = 1;
						default = 1;
					};
					class SurrenderOrNoWeapon
					{
						name = "$STR_ace_captives_SurrenderOrNoWeapon";
						value = 2;
					};
				};
			};
			class requireSurrenderAi
			{
				displayName = "$STR_ace_captives_ModuleSettings_requireSurrenderAi_name";
				description = "$STR_ace_captives_ModuleSettings_requireSurrenderAi_description";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_ace_captives_ModuleSettings_Description";
			sync[] = {};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_CableTie: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_captives_CableTie";
		descriptionShort = "$STR_ace_captives_CableTieDescription";
		model = "\z\ace\addons\captives\models\ace_cabletie.p3d";
		picture = "\z\ace\addons\captives\UI\ace_cabletie_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
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
					class ace_isHandcuffed
					{
						property = "ace_isHandcuffed";
						control = "Checkbox";
						displayName = "$STR_ace_captives_ModuleHandcuffed_DisplayName";
						tooltip = "$STR_ace_captives_ModuleHandcuffed_Description";
						expression = "if (_value) then {[objNull, [_this], true] call ace_captives_fnc_moduleHandcuffed}";
						typeName = "BOOL";
						condition = "objectBrain";
						defaultValue = "(false)";
					};
					class ace_isSurrendered
					{
						property = "ace_isSurrendered";
						control = "Checkbox";
						displayName = "$STR_ace_captives_ModuleSurrender_DisplayName";
						tooltip = "$STR_ace_captives_ModuleSurrender_Description";
						expression = "if (_value) then {[objNull, [_this], true] call ace_captives_fnc_moduleSurrender}";
						typeName = "BOOL";
						condition = "objectBrain";
						defaultValue = "(false)";
					};
				};
			};
		};
	};
};
