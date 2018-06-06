////////////////////////////////////////////////////////////////////
//DeRap: ace_zeus\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:49:28 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_zeus
	{
		name = "ACE3 - Zeus";
		units[] = {"ace_zeus_moduleConfigurePylons","ace_zeus_moduleDefendArea","ace_zeus_moduleEditableObjects","ace_zeus_moduleGlobalSetSkill","ace_zeus_moduleGroupSide","ace_zeus_moduleLoadIntoCargo","ace_zeus_modulePatrolArea","ace_zeus_moduleSearchArea","ace_zeus_moduleSearchNearby","ace_zeus_moduleGarrison","ace_zeus_moduleUnGarrison","ace_zeus_moduleTeleportPlayers","ace_zeus_moduleToggleNvg","ace_zeus_moduleToggleFlashlight","ace_zeus_moduleSimulation","ace_zeus_moduleSuppressiveFire","ace_zeus_AddFullArsenal","ace_zeus_RemoveFullArsenal","ace_zeus_moduleHeal","ace_zeus_moduleSuicideBomber","ace_zeus_AddFullAceArsenal","ace_zeus_RemoveFullAceArsenal"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common","ace_ai"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"SilentSpike","mharis001"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
	class ace_zeus_captives: ace_zeus
	{
		units[] = {"ace_zeus_moduleCaptive","ace_zeus_moduleSurrender"};
	};
	class ace_zeus_medical: ace_zeus
	{
		units[] = {"ace_zeus_moduleUnconscious","ace_zeus_moduleSetMedic","ace_zeus_moduleSetMedicalVehicle","ace_zeus_moduleSetMedicalFacility"};
	};
	class ace_zeus_cargo: ace_zeus
	{
		units[] = {"ace_zeus_moduleLoadIntoCargo"};
	};
	class ace_zeus_repair: ace_zeus
	{
		units[] = {"ace_zeus_moduleSetEngineer","ace_zeus_moduleSetRepairVehicle","ace_zeus_moduleSetRepairFacility"};
	};
	class ace_zeus_cargoAndRepair: ace_zeus
	{
		units[] = {"ace_zeus_moduleAddSpareTrack","ace_zeus_moduleAddSpareWheel"};
	};
	class ace_zeus_fastroping: ace_zeus
	{
		units[] = {"ace_zeus_moduleAddOrRemoveFRIES"};
	};
	class ace_zeus_pylons: ace_zeus
	{
		units[] = {"ace_zeus_moduleConfigurePylons"};
	};
	class ace_zeus_arsenal: ace_zeus
	{
		units[] = {"ace_zeus_AddFullAceArsenal","ace_zeus_RemoveFullAceArsenal"};
	};
};
class ACE_Curator
{
	ace_zeus_captives = "ace_captives";
	ace_zeus_medical = "ace_medical";
	ace_zeus_cargo = "ace_cargo";
	ace_zeus_repair = "ace_repair";
	ace_zeus_cargoAndRepair[] = {"ace_cargo","ace_repair"};
	ace_zeus_fastroping = "ace_fastroping";
	ace_zeus_pylons = "ace_pylons";
	ace_zeus_arsenal = "ace_arsenal";
};
class CfgFactionClasses
{
	class ace_zeus_AI
	{
		displayName = "ACE AI";
		priority = 2;
		side = 7;
	};
	class ace_zeus_Captive
	{
		displayName = "ACE Captive";
		priority = 2;
		side = 7;
	};
	class ace_zeus_Medical
	{
		displayName = "ACE Medical";
		priority = 2;
		side = 7;
	};
	class ace_zeus_Repair
	{
		displayName = "ACE Repair";
		priority = 2;
		side = 7;
	};
	class ace_zeus_Utility
	{
		displayName = "ACE Utility";
		priority = 2;
		side = 7;
	};
	class ace_zeus_Arsenal
	{
		displayName = "ACE Arsenal";
		priority = 2;
		side = 7;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_zeus
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\zeus\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_zeus
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\zeus\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_zeus
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\zeus\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Module_F;
	class ModuleEmpty_F;
	class ACE_Module;
	class ModuleCurator_F: Module_F
	{
		function = "ace_zeus_fnc_bi_moduleCurator";
	};
	class ModuleMine_F: ModuleEmpty_F
	{
		function = "ace_zeus_fnc_bi_moduleMine";
	};
	class ModuleOrdnance_F: Module_F
	{
		function = "ace_zeus_fnc_bi_moduleProjectile";
	};
	class ModuleRemoteControl_F: Module_F
	{
		function = "ace_zeus_fnc_bi_moduleRemoteControl";
	};
	class ace_zeus_moduleSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_zeus_Settings_DisplayName";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Settings_ca.paa";
		category = "ACE";
		function = "ace_zeus_fnc_moduleZeusSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class zeusAscension
			{
				displayName = "$STR_ace_zeus_ascension_DisplayName";
				description = "$STR_ace_zeus_ascension_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class zeusBird
			{
				displayName = "$STR_ace_zeus_bird_DisplayName";
				description = "$STR_ace_zeus_bird_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class remoteWind
			{
				displayName = "$STR_ace_zeus_remoteWind_DisplayName";
				description = "$STR_ace_zeus_remoteWind_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class radioOrdnance
			{
				displayName = "$STR_ace_zeus_radioOrdnance_DisplayName";
				description = "$STR_ace_zeus_radioOrdnance_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class revealMines
			{
				displayName = "$STR_ace_zeus_revealMines_DisplayName";
				description = "$STR_ace_zeus_revealMines_Description";
				typeName = "NUMBER";
				class values
				{
					class disable
					{
						name = "$STR_A3_OPTIONS_DISABLED";
						value = 0;
						default = 1;
					};
					class partial
					{
						name = "$STR_ace_zeus_revealMines_partial";
						value = 1;
					};
					class full
					{
						name = "$STR_ace_zeus_revealMines_full";
						value = 2;
					};
				};
			};
			class autoAddObjects
			{
				displayName = "$STR_ace_zeus_AddObjectsToCurator";
				description = "$STR_ace_zeus_AddObjectsToCurator_desc";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_zeus_Settings_Description";
			sync[] = {};
		};
	};
	class ace_zeus_moduleBase: Module_F
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		function = "ace_common_fnc_dummy";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		scope = 1;
		scopeCurator = 2;
	};
	class ace_zeus_moduleAddSpareTrack: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Repair";
		displayName = "$STR_ace_zeus_ModuleAddSpareTrack_DisplayName";
		function = "ace_zeus_fnc_moduleAddSpareTrack";
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
	};
	class ace_zeus_moduleAddSpareWheel: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Repair";
		displayName = "$STR_ace_zeus_ModuleAddSpareWheel_DisplayName";
		function = "ace_zeus_fnc_moduleAddSpareWheel";
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
	};
	class ace_zeus_moduleSetEngineer: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Repair";
		displayName = "$STR_ace_zeus_ModuleSetEngineer_DisplayName";
		curatorInfoType = "ace_zeus_RscSetEngineer";
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
	};
	class ace_zeus_moduleSetRepairFacility: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Repair";
		displayName = "$STR_ace_zeus_ModuleSetRepairFacility_DisplayName";
		function = "ace_zeus_fnc_moduleSetRepairFacility";
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
	};
	class ace_zeus_moduleSetRepairVehicle: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Repair";
		displayName = "$STR_ace_zeus_ModuleSetRepairVehicle_DisplayName";
		function = "ace_zeus_fnc_moduleSetRepairVehicle";
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
	};
	class ace_zeus_moduleAddOrRemoveFRIES: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleAddOrRemoveFRIES_DisplayName";
		function = "ace_zeus_fnc_moduleAddOrRemoveFRIES";
	};
	class ace_zeus_moduleCaptive: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Captive";
		displayName = "$STR_ace_zeus_ModuleCaptive_DisplayName";
		function = "ace_zeus_fnc_moduleCaptive";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Captive_ca.paa";
	};
	class ace_zeus_moduleConfigurePylons: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_pylons_ConfigurePylons";
		function = "ace_zeus_fnc_moduleConfigurePylons";
		icon = "a3\data_f_jets\logos\jets_logo_small_ca.paa";
	};
	class ace_zeus_moduleDefendArea: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleDefendArea_DisplayName";
		curatorInfoType = "ace_zeus_RscDefendArea";
	};
	class ace_zeus_moduleEditableObjects: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleEditableObjects_DisplayName";
		curatorInfoType = "ace_zeus_RscEditableObjects";
	};
	class ace_zeus_moduleGlobalSetSkill: ace_zeus_moduleBase
	{
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleGlobalSetSkill_DisplayName";
		curatorInfoType = "ace_zeus_RscGlobalSetSkill";
	};
	class ace_zeus_moduleGroupSide: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleGroupSide_DisplayName";
		curatorInfoType = "ace_zeus_RscGroupSide";
	};
	class ace_zeus_moduleHeal: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Medical";
		displayName = "$STR_ace_zeus_ModuleHeal_DisplayName";
		function = "ace_zeus_fnc_moduleHeal";
		icon = "\z\ace\addons\zeus\ui\Icon_Module_Zeus_Heal_ca.paa";
	};
	class ace_zeus_moduleLoadIntoCargo: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleLoadIntoCargo_DisplayName";
		function = "ace_zeus_fnc_moduleLoadIntoCargo";
		icon = "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
	};
	class ace_zeus_modulePatrolArea: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModulePatrolArea_DisplayName";
		curatorInfoType = "ace_zeus_RscPatrolArea";
	};
	class ace_zeus_moduleSearchArea: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleSearchArea_DisplayName";
		curatorInfoType = "ace_zeus_RscSearchArea";
	};
	class ace_zeus_moduleSearchNearby: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleSearchNearby_DisplayName";
		function = "ace_zeus_fnc_moduleSearchNearby";
	};
	class ace_zeus_moduleSuppressiveFire: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleSuppressiveFire_DisplayName";
		function = "ace_zeus_fnc_moduleSuppressiveFire";
	};
	class ace_zeus_moduleSetMedic: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Medical";
		displayName = "$STR_ace_zeus_ModuleSetMedic_DisplayName";
		function = "ace_zeus_fnc_moduleSetMedic";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Medic_ca.paa";
	};
	class ace_zeus_moduleSetMedicalFacility: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Medical";
		displayName = "$STR_ace_zeus_ModuleSetMedicalFacility_DisplayName";
		function = "ace_zeus_fnc_moduleSetMedicalFacility";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Medic_ca.paa";
	};
	class ace_zeus_moduleSetMedicalVehicle: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Medical";
		displayName = "$STR_ace_zeus_ModuleSetMedicalVehicle_DisplayName";
		function = "ace_zeus_fnc_moduleSetMedicalVehicle";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Medic_ca.paa";
	};
	class ace_zeus_moduleSimulation: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleSimulation_DisplayName";
		function = "ace_zeus_fnc_moduleSimulation";
	};
	class ace_zeus_moduleSuicideBomber: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleSuicideBomber_DisplayName";
		curatorInfoType = "ace_zeus_RscSuicideBomber";
	};
	class ace_zeus_moduleSurrender: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Captive";
		displayName = "$STR_ace_zeus_ModuleSurrender_DisplayName";
		function = "ace_zeus_fnc_moduleSurrender";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Surrender_ca.paa";
	};
	class ace_zeus_moduleTeleportPlayers: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleTeleportPlayers_DisplayName";
		curatorInfoType = "ace_zeus_RscTeleportPlayers";
	};
	class ace_zeus_moduleUnconscious: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Medical";
		displayName = "$STR_ace_zeus_ModuleUnconscious_DisplayName";
		function = "ace_zeus_fnc_moduleUnconscious";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Unconscious_ca.paa";
	};
	class ace_zeus_moduleGarrison: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleGarrison_DisplayName";
		curatorInfoType = "ace_zeus_RscGarrison";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Garrison_ca.paa";
	};
	class ace_zeus_moduleUnGarrison: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_ModuleUnGarrison_DisplayName";
		function = "ace_zeus_fnc_moduleUnGarrison";
		icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_UnGarrison_ca.paa";
	};
	class ace_zeus_moduleToggleNvg: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_moduleToggleNVG_DisplayName";
		curatorInfoType = "ace_zeus_RscToggleNvg";
	};
	class ace_zeus_moduleToggleFlashlight: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_AI";
		displayName = "$STR_ace_zeus_moduleToggleFlashlight_DisplayName";
		curatorInfoType = "ace_zeus_RscToggleFlashlight";
	};
	class ace_zeus_AddFullArsenal: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleAddFullArsenal_DisplayName";
		function = "ace_zeus_fnc_moduleAddArsenal";
	};
	class ace_zeus_RemoveFullArsenal: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Utility";
		displayName = "$STR_ace_zeus_ModuleRemoveArsenal_DisplayName";
		function = "ace_zeus_fnc_moduleRemoveArsenal";
	};
	class ace_zeus_AddFullAceArsenal: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Arsenal";
		displayName = "$STR_ace_zeus_ModuleAddFullACEArsenal_DisplayName";
		function = "ace_zeus_fnc_moduleAddAceArsenal";
	};
	class ace_zeus_RemoveFullAceArsenal: ace_zeus_moduleBase
	{
		curatorCanAttach = 1;
		category = "ace_zeus_Arsenal";
		displayName = "$STR_ace_zeus_ModuleRemoveACEArsenal_DisplayName";
		function = "ace_zeus_fnc_moduleRemoveAceArsenal";
	};
	class ModuleArsenal_F: Module_F
	{
		function = "ace_zeus_fnc_bi_moduleArsenal";
	};
};
class ACE_Settings
{
	class ace_zeus_zeusAscension
	{
		category = "$STR_ace_zeus_DisplayName";
		displayName = "$STR_ace_zeus_ascension_DisplayName";
		description = "$STR_ace_zeus_ascension_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_zeus_zeusBird
	{
		category = "$STR_ace_zeus_DisplayName";
		displayName = "$STR_ace_zeus_bird_DisplayName";
		description = "$STR_ace_zeus_bird_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_zeus_remoteWind
	{
		category = "$STR_ace_zeus_DisplayName";
		displayName = "$STR_ace_zeus_remoteWind_DisplayName";
		description = "$STR_ace_zeus_remoteWind_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_zeus_radioOrdnance
	{
		category = "$STR_ace_zeus_DisplayName";
		displayName = "$STR_ace_zeus_radioOrdnance_DisplayName";
		description = "$STR_ace_zeus_radioOrdnance_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_zeus_revealMines
	{
		category = "$STR_ace_zeus_DisplayName";
		displayName = "$STR_ace_zeus_revealMines_DisplayName";
		description = "$STR_ace_zeus_revealMines_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_A3_OPTIONS_DISABLED","$STR_ace_zeus_revealMines_partial","$STR_ace_zeus_revealMines_full"};
	};
	class ace_zeus_autoAddObjects
	{
		category = "$STR_ace_zeus_DisplayName";
		typeName = "BOOL";
		value = 0;
		displayName = "$STR_ace_zeus_AddObjectsToCurator";
		description = "$STR_ace_zeus_AddObjectsToCurator_desc";
	};
};
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscText;
class RscListbox;
class RscCombo;
class RscEdit;
class RscXSliderH;
class RscCheckBox;
class RscActivePicture;
class RscMapControl;
class RscPicture;
class ctrlToolbox;
class RscDisplayAttributes
{
	class Controls
	{
		class Background;
		class Title;
		class Content: RscControlsGroup
		{
			class controls;
		};
		class ButtonOK;
		class ButtonCancel;
	};
};
class ace_zeus_AttributeRadius: RscControlsGroupNoScrollbars
{
	onSetFocus = "_this call ace_zeus_fnc_ui_attributeRadius";
	idc = 26466;
	x = 0;
	y = 0;
	w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	class controls
	{
		class Title1: RscText
		{
			idc = -1;
			text = "$STR_ace_zeus_AttributeRadius";
			toolTip = "$STR_ace_zeus_AttributeRadius_desc";
			x = 0;
			y = "(0.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[] = {0,0,0,0.5};
		};
		class Radius: RscEdit
		{
			idc = 26467;
			x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y = "(0.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(15.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			autocomplete = "";
		};
	};
};
class ace_zeus_AttributePosition: RscControlsGroupNoScrollbars
{
	onSetFocus = "_this call ace_zeus_fnc_ui_attributePosition";
	idc = 26468;
	x = 0;
	y = 0;
	w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h = "(26 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	class controls
	{
		class Title1: RscText
		{
			idc = -1;
			text = "$STR_ace_zeus_AttributePosition";
			toolTip = "$STR_ace_zeus_AttributePosition_desc";
			x = 0;
			y = 0;
			w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[] = {0,0,0,0.5};
		};
		class Position: RscMapControl
		{
			idc = 26469;
			x = "(0.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y = "(1.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(25 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(24.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
	};
};
class ace_zeus_RscDefendArea: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscDefendArea""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscDefendArea""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class radius: ace_zeus_AttributeRadius{};
			};
		};
		class ButtonOK: ButtonOK
		{
			onSetFocus = "_this call ace_zeus_fnc_ui_defendArea";
		};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscEditableObjects: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscEditableObjects""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscEditableObjects""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class radius: ace_zeus_AttributeRadius{};
				class editableObjects: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_editableObjects";
					idc = 26422;
					x = 0;
					y = 0;
					w = "(11.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class Label: RscText
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleEditableObjects_curators";
							toolTip = "$STR_ace_zeus_ModuleEditableObjects_curators_desc";
							x = 0;
							y = 0;
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class AllCurators: RscCheckBox
						{
							idc = 16188;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = 0;
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Label2: Label
						{
							text = "$STR_ace_zeus_ModuleEditableObjects_removal";
							toolTip = "$STR_ace_zeus_ModuleEditableObjects_removal_desc";
							y = "(1.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class EditingMode: AllCurators
						{
							idc = 16189;
							y = "(1.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscGlobalSetSkill: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscGlobalSetSkill""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscGlobalSetSkill""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class globalSetSkill: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_globalSetSkill";
					idc = 26422;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(6.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class Title1: RscText
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGlobalSetSkill_general";
							toolTip = "$STR_ace_zeus_ModuleGlobalSetSkill_general_desc";
							x = 0;
							y = 0;
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class General: RscXSliderH
						{
							idc = 16184;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = 0;
							w = "(15.9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Title2: Title1
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGlobalSetSkill_accuracy";
							toolTip = "$STR_ace_zeus_ModuleGlobalSetSkill_accuracy_desc";
							y = "(1.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Accuracy: General
						{
							idc = 16185;
							y = "(1.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Title3: Title1
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGlobalSetSkill_handling";
							toolTip = "$STR_ace_zeus_ModuleGlobalSetSkill_handling_desc";
							y = "(2.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Handling: General
						{
							idc = 16186;
							y = "(2.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Title4: Title1
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGlobalSetSkill_spotting";
							toolTip = "$STR_ace_zeus_ModuleGlobalSetSkill_spotting_desc";
							y = "(3.3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Spotting: General
						{
							idc = 16187;
							y = "(3.3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Title5: Title1
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGlobalSetSkill_cover";
							toolTip = "$STR_ace_zeus_ModuleGlobalSetSkill_cover_desc";
							y = "(4.4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Cover: RscCheckBox
						{
							idc = 16188;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(4.4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Title6: Title5
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGlobalSetSkill_combat";
							toolTip = "$STR_ace_zeus_ModuleGlobalSetSkill_combat_desc";
							y = "(5.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Combat: Cover
						{
							idc = 16189;
							y = "(5.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscGroupSide: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscGroupSide""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscGroupSide""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class groupSide: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_groupSide";
					idc = 26422;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class Title: RscText
						{
							idc = 31002;
							text = "$STR_disp_arcunit_side";
							x = 0;
							y = 0;
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class Background: RscText
						{
							idc = 31000;
							x = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = 0;
							w = "(16 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {1,1,1,0.1};
						};
						class BLUFOR: RscActivePicture
						{
							idc = 31200;
							text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
							x = "(12.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(0.25 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							tooltip = "$STR_WEST";
						};
						class OPFOR: BLUFOR
						{
							idc = 31201;
							text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
							x = "(15.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(0.25 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							tooltip = "$STR_EAST";
						};
						class Independent: BLUFOR
						{
							idc = 31202;
							text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
							x = "(18.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(0.25 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							tooltip = "$STR_guerrila";
						};
						class Civilian: BLUFOR
						{
							idc = 31203;
							text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
							x = "(21.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(0.25 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							tooltip = "$STR_Civilian";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscPatrolArea: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscPatrolArea""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscPatrolArea""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class radius: ace_zeus_AttributeRadius{};
			};
		};
		class ButtonOK: ButtonOK
		{
			onSetFocus = "_this call ace_zeus_fnc_ui_patrolArea";
		};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscSearchArea: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscSearchArea""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscSearchArea""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class radius: ace_zeus_AttributeRadius{};
			};
		};
		class ButtonOK: ButtonOK
		{
			onSetFocus = "_this call ace_zeus_fnc_ui_searchArea";
		};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscTeleportPlayers: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscTeleportPlayers""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscTeleportPlayers""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class teleportPlayers: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_teleportPlayers";
					idc = 26422;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(8.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class Title: RscText
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleTeleportPlayers_player";
							toolTip = "$STR_ace_zeus_ModuleTeleportPlayers_player_desc";
							x = 0;
							y = 0;
							w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class Unit: RscListbox
						{
							idc = 16189;
							x = 0;
							y = "(1.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(5.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class SearchBackground: RscText
						{
							idc = -1;
							x = 0;
							y = "(7.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class SearchPicture: RscPicture
						{
							idc = -1;
							text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
							x = 0;
							y = "(7.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Search: RscEdit
						{
							idc = 16190;
							x = "(1.2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(7.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(14.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							autocomplete = "";
						};
						class LabelGroup: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleTeleportPlayers_group";
							toolTip = "$STR_ace_zeus_ModuleTeleportPlayers_group_desc";
							x = "(15.9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(7.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
						};
						class UseGroup: RscCheckBox
						{
							idc = 16188;
							x = "(25 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(7.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_AttributeCargo: RscControlsGroupNoScrollbars
{
	onSetFocus = "_this call ace_zeus_fnc_ui_attributeCargo";
	idc = -1;
	x = "((7 * (((safezoneW / safezoneH) min 1.2)/ 40))+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
	y = "((10 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
	w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
	h = "(3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
	class controls
	{
		class Title: RscText
		{
			idc = -1;
			text = "$STR_ace_zeus_AttributeCargo";
			x = 0;
			y = 0;
			w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[] = {0,0,0,0.5};
		};
		class Background: RscText
		{
			idc = -1;
			x = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y = 0;
			w = "(16 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[] = {1,1,1,0.1};
		};
		class Cargo: RscListBox
		{
			idc = 80086;
			x = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y = 0;
			w = "(16 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
	};
};
class RscDisplayAttributesVehicle: RscDisplayAttributes
{
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				class ace_cargo: ace_zeus_AttributeCargo{};
			};
		};
	};
};
class RscDisplayAttributesVehicleEmpty: RscDisplayAttributes
{
	class Controls: Controls
	{
		class Content: Content
		{
			class Controls: controls
			{
				class ace_cargo: ace_zeus_AttributeCargo{};
			};
		};
	};
};
class ace_zeus_RscGarrison: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscGarrison""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscGarrison""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class Garrison: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_garrison";
					idc = 73060;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(8.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class radius: ace_zeus_AttributeRadius{};
						class TopDownFillingTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGarrison_TopDownFillingText";
							toolTip = "$STR_ace_zeus_ModuleGarrison_TopDownFillingTooltip";
							x = 0;
							y = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class TopDownFilling: RscCheckBox
						{
							idc = 73061;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class TeleportTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGarrison_TeleportText";
							x = 0;
							y = "(2.3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class Teleport: RscCheckBox
						{
							idc = 73062;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(2.3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class FillingModeTitle: RscText
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleGarrison_FillingModeText";
							x = 0;
							y = "(3.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class FillingMode: RscListbox
						{
							idc = 73063;
							x = 0;
							y = "(4.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscToggleNvg: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscToggleNvg""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscToggleNvg""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class ToggleNvg: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_toggleNvg";
					idc = 92854;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(3 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class ToggleNvgTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_moduleToggleNVG_ToggleNvgTitle";
							toolTip = "$STR_ace_zeus_moduleToggleNVG_ToggleNvgTitleTooltip";
							x = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(7 * (((safezoneW / safezoneH) min 1.2)/ 40))";
						};
						class ToggleNvgCombo: RscCombo
						{
							idc = 92855;
							x = "(6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class ToggleNvgSideTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_moduleToggleNVG_ToggleNvgSide";
							x = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(7 * (((safezoneW / safezoneH) min 1.2)/ 40))";
						};
						class ToggleNvgSideCombo: RscCombo
						{
							idc = 92856;
							x = "(6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscToggleFlashlight: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscToggleFlashlight""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscToggleFlashlight""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class ToggleFlashlight: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_toggleFlashlight";
					idc = 56217;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class ToggleFlashlightTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_moduleToggleFlashlight_ToggleFlashlightTitle";
							x = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(7 * (((safezoneW / safezoneH) min 1.2)/ 40))";
						};
						class ToggleFlashlightCombo: RscCombo
						{
							idc = 56218;
							x = "(6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class ToggleFlashlightSideTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_moduleToggleFlashlight_ToggleFlashlightSide";
							x = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(7 * (((safezoneW / safezoneH) min 1.2)/ 40))";
						};
						class ToggleFlashlightSideCombo: RscCombo
						{
							idc = 56219;
							x = "(6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class ToggleFlashlightGearTitle: Title
						{
							idc = -1;
							text = "$STR_ace_zeus_moduleToggleFlashlight_ToggleFlashlightGear";
							x = "(0 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(2.4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(7 * (((safezoneW / safezoneH) min 1.2)/ 40))";
						};
						class ToggleFlashlightGearCombo: RscCombo
						{
							idc = 56220;
							x = "(6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							y = "(2.4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscSetEngineer: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscSetEngineer""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscSetEngineer""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class setEngineer: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_setEngineer";
					idc = 86946;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class Label: RscText
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleSetEngineer_skill";
							toolTip = "$STR_ace_repair_AssignEngineerRole_role_Description";
							x = 0;
							y = "(0.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class Roles: ctrlToolbox
						{
							idc = 86947;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(0.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(15.9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							rows = 1;
							columns = 2;
							strings[] = {"$STR_ace_repair_AssignEngineerRole_role_engineer","$STR_ace_repair_AssignEngineerRole_role_advanced"};
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class ace_zeus_RscSuicideBomber: RscDisplayAttributes
{
	onLoad = "['onLoad',_this,""ace_zeus_RscSuicideBomber""] call ace_zeus_fnc_zeusAttributes";
	onUnload = "['onUnload',_this,""ace_zeus_RscSuicideBomber""] call ace_zeus_fnc_zeusAttributes";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls
			{
				class suicideBomber: RscControlsGroupNoScrollbars
				{
					onSetFocus = "_this call ace_zeus_fnc_ui_suicideBomber";
					idc = 83470;
					x = 0;
					y = 0;
					w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(5.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					class controls
					{
						class ActivationSide: RscControlsGroupNoScrollbars
						{
							idc = 83571;
							x = 0;
							y = 0;
							w = "(26 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							class controls
							{
								class Label: RscText
								{
									idc = -1;
									text = "$STR_ace_zeus_ModuleSuicideBomber_ActivationSide";
									x = 0;
									y = 0;
									w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
									colorBackground[] = {0,0,0,0.5};
								};
								class Background: RscText
								{
									idc = -1;
									x = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									y = 0;
									w = "(16 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									h = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
									colorBackground[] = {1,1,1,0.1};
								};
								class BLUFOR: RscActivePicture
								{
									idc = 83581;
									text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
									x = "(12.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									y = "(0.25 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
									w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
									tooltip = "$STR_WEST";
								};
								class OPFOR: BLUFOR
								{
									idc = 83580;
									text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
									x = "(15.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									tooltip = "$STR_EAST";
								};
								class Independent: BLUFOR
								{
									idc = 83582;
									text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
									x = "(18.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									tooltip = "$STR_guerrila";
								};
								class Civilian: BLUFOR
								{
									idc = 83583;
									text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
									x = "(21.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
									tooltip = "$STR_Civilian";
								};
							};
						};
						class DistanceLabel: RscText
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleSuicideBomber_ActivationRadius";
							x = 0;
							y = "(2.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(10 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							colorBackground[] = {0,0,0,0.5};
						};
						class DistanceSlider: RscXSliderH
						{
							idc = 83572;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(2.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(13.9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class DistanceEdit: RscEdit
						{
							idc = 83573;
							x = "(24.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(2.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(1.9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							autocomplete = "";
							maxChars = 3;
							canModify = 0;
						};
						class ExplosionLabel: DistanceLabel
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleSuicideBomber_ExplosionSize";
							y = "(3.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
						};
						class Explosion: ctrlToolbox
						{
							idc = 83574;
							x = "(10.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							y = "(3.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							w = "(15.9 * (((safezoneW / safezoneH) min 1.2)/ 40))";
							h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							rows = 1;
							columns = 3;
							strings[] = {"$STR_ace_zeus_ModuleSuicideBomber_Small","$STR_ace_zeus_ModuleSuicideBomber_Medium","$STR_ace_zeus_ModuleSuicideBomber_Large"};
						};
						class AutoSeekLabel: DistanceLabel
						{
							idc = -1;
							text = "$STR_ace_zeus_ModuleSuicideBomber_AutoSeek";
							y = "(4.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							toolTip = "$STR_ace_zeus_ModuleSuicideBomber_AutoSeek_tooltip";
						};
						class AutoSeek: Explosion
						{
							idc = 83575;
							y = "(4.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
							columns = 2;
							strings[] = {"$STR_ace_common_Disabled","$STR_ace_common_Enabled"};
						};
					};
				};
			};
		};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
