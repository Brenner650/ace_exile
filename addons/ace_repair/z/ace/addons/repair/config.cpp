////////////////////////////////////////////////////////////////////
//DeRap: ace_repair\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:05 2018 : 'file' last modified on Mon Apr 16 21:47:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_repair
	{
		name = "ACE3 - Repair";
		units[] = {"ACE_Wheel","ACE_Track"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","Glowbal","Jonpas"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Repair
{
	class Actions
	{
		class ReplaceWheel
		{
			displayName = "$STR_ace_repair_ReplaceWheel";
			displayNameProgress = "$STR_ace_repair_ReplacingWheel";
			repairLocations[] = {"All"};
			requiredEngineer = "ace_repair_engineerSetting_Wheel";
			repairingTime = 10;
			repairingTimeSelfCoef = 1;
			items = "ace_repair_wheelRepairRequiredItems";
			condition = "call ace_repair_fnc_canReplaceWheel";
			itemConsumed = 0;
			claimObjects[] = {{"ACE_Wheel"}};
			callbackSuccess = "call ace_repair_fnc_doReplaceWheel";
			callbackFailure = "";
			callbackProgress = "";
			animationCaller = "Acts_carFixingWheel";
			animationCallerProne = "Acts_carFixingWheel";
			animationCallerSelf = "Acts_carFixingWheel";
			animationCallerSelfProne = "Acts_carFixingWheel";
			litter[] = {};
		};
		class RemoveWheel: ReplaceWheel
		{
			displayName = "$STR_ace_repair_RemoveWheel";
			displayNameProgress = "$STR_ace_repair_RemovingWheel";
			condition = "call ace_repair_fnc_canRemove";
			callbackSuccess = "call ace_repair_fnc_doRemoveWheel";
			claimObjects[] = {};
		};
		class MiscRepair: ReplaceWheel
		{
			displayName = "$STR_ace_repair_Repairing";
			displayNameProgress = "$STR_ace_repair_RepairingHitPoint";
			condition = "call ace_repair_fnc_canMiscRepair";
			requiredEngineer = "ace_repair_engineerSetting_Repair";
			repairingTime = 15;
			callbackSuccess = "call ace_repair_fnc_doRepair";
			items[] = {"ToolKit"};
			itemConsumed = "ace_repair_consumeItem_ToolKit";
			claimObjects[] = {};
		};
		class RepairTrack: MiscRepair
		{
			displayName = "$STR_ace_repair_Repairing";
			displayNameProgress = "$STR_ace_repair_RepairingHitPoint";
			condition = "call ace_repair_fnc_canRepairTrack";
			callbackSuccess = "call ace_repair_fnc_doRepairTrack";
			requiredEngineer = "ace_repair_engineerSetting_Wheel";
			claimObjects[] = {{"ACE_Track"}};
			itemConsumed = 0;
		};
		class RemoveTrack: MiscRepair
		{
			displayName = "$STR_ace_repair_RemoveTrack";
			displayNameProgress = "$STR_ace_repair_RemovingTrack";
			condition = "call ace_repair_fnc_canRemove";
			callbackSuccess = "call ace_repair_fnc_doRemoveTrack";
			requiredEngineer = "ace_repair_engineerSetting_Wheel";
			itemConsumed = 0;
		};
		class ReplaceTrack: RemoveTrack
		{
			displayName = "$STR_ace_repair_ReplaceTrack";
			displayNameProgress = "$STR_ace_repair_ReplacingTrack";
			condition = "call ace_repair_fnc_canReplaceTrack";
			callbackSuccess = "call ace_repair_fnc_doReplaceTrack";
			requiredEngineer = "ace_repair_engineerSetting_Wheel";
			claimObjects[] = {{"ACE_Track"}};
		};
		class FullRepair: MiscRepair
		{
			displayName = "$STR_ace_repair_fullRepair";
			displayNameProgress = "$STR_ace_repair_fullyRepairing";
			requiredEngineer = "ace_repair_engineerSetting_fullRepair";
			repairLocations[] = {"ace_repair_fullRepairLocation"};
			repairingTime = 30;
			condition = "0 < ({_x>0} count (getAllHitPointsDamage _target param [2,[]]))";
			callbackSuccess = "call ace_repair_fnc_doFullRepair";
			itemConsumed = "ace_repair_consumeItem_ToolKit";
		};
	};
};
class ACE_Settings
{
	class ace_repair_displayTextOnRepair
	{
		displayName = "$STR_ace_repair_SettingDisplayTextName";
		description = "$STR_ace_repair_SettingDisplayTextDesc";
		typeName = "BOOL";
		isClientSettable = 1;
		value = 1;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_engineerSetting_repair
	{
		displayName = "$STR_ace_repair_engineerSetting_Repair_name";
		description = "$STR_ace_repair_engineerSetting_Repair_description";
		typeName = "SCALAR";
		value = 1;
		values[] = {"$STR_ace_repair_engineerSetting_anyone","$STR_ace_repair_engineerSetting_EngineerOnly","$STR_ace_repair_engineerSetting_AdvancedOnly"};
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_engineerSetting_wheel
	{
		displayName = "$STR_ace_repair_engineerSetting_Wheel_name";
		description = "$STR_ace_repair_engineerSetting_Wheel_description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_repair_engineerSetting_anyone","$STR_ace_repair_engineerSetting_EngineerOnly","$STR_ace_repair_engineerSetting_AdvancedOnly"};
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_repairDamageThreshold
	{
		displayName = "$STR_ace_repair_repairDamageThreshold_name";
		description = "$STR_ace_repair_repairDamageThreshold_description";
		typeName = "SCALAR";
		value = 0.6;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
		sliderSettings[] = {0,1,0.6,2};
	};
	class ace_repair_repairDamageThreshold_engineer
	{
		displayName = "$STR_ace_repair_repairDamageThreshold_Engineer_name";
		description = "$STR_ace_repair_repairDamageThreshold_Engineer_description";
		typeName = "SCALAR";
		value = 0.4;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
		sliderSettings[] = {0,1,0.4,2};
	};
	class ace_repair_consumeItem_toolKit
	{
		displayName = "$STR_ace_repair_consumeItem_ToolKit_name";
		description = "$STR_ace_repair_consumeItem_ToolKit_description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_common_No","$STR_ace_common_Yes"};
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_fullRepairLocation
	{
		displayName = "$STR_ace_repair_fullRepairLocation";
		description = "$STR_ace_repair_fullRepairLocation_description";
		typeName = "SCALAR";
		value = 2;
		values[] = {"$STR_ace_repair_useAnywhere","$STR_ace_repair_repairVehicleOnly","$STR_ace_repair_repairFacilityOnly","$STR_ace_repair_vehicleAndFacility","$STR_ace_common_Disabled"};
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_engineerSetting_fullRepair
	{
		displayName = "$STR_ace_repair_engineerSetting_fullRepair_name";
		description = "$STR_ace_repair_engineerSetting_fullRepair_description";
		typeName = "SCALAR";
		value = 2;
		values[] = {"$STR_ace_repair_engineerSetting_anyone","$STR_ace_repair_engineerSetting_EngineerOnly","$STR_ace_repair_engineerSetting_AdvancedOnly"};
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_addSpareParts
	{
		displayName = "$STR_ace_repair_addSpareParts_name";
		description = "$STR_ace_repair_addSpareParts_description";
		typeName = "BOOL";
		value = 1;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_repair_wheelRepairRequiredItems
	{
		displayName = "$STR_ace_repair_wheelRepairRequiredItems_name";
		description = "$STR_ace_repair_wheelRepairRequiredItems_description";
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
		typeName = "SCALAR";
		value = 0;
		values[] = {"None","ToolKit"};
		_values[] = {{},{"ToolKit"}};
	};
	class ace_repair_autoShutOffEngineWhenStartingRepair
	{
		displayName = "$STR_ace_repair_autoShutOffEngineWhenStartingRepair_name";
		description = "$STR_ace_repair_autoShutOffEngineWhenStartingRepair_description";
		typeName = "BOOL";
		value = 0;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
};
class CfgActions
{
	class None;
	class Repair: None
	{
		show = 0;
	};
	class RepairVehicle: None
	{
		show = 0;
	};
};
class ctrlToolbox;
class Cfg3DEN
{
	class Attributes
	{
		class Default;
		class Title: Default
		{
			class Controls
			{
				class Title;
			};
		};
		class ace_repair_isEngineerControl: Title
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbSetCurSel (((_value + 1) min 3) max 0);";
			attributeSave = "(lbCurSel (_this controlsGroupCtrl 100)) - 1";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlToolbox
				{
					idc = 100;
					style = "0x02";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					w = "82 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
					rows = 1;
					columns = 4;
					strings[] = {"$STR_3DEN_Attributes_Lock_Default_text","$STR_ace_repair_AssignEngineerRole_role_none","$STR_ace_repair_AssignEngineerRole_role_engineer","$STR_ace_repair_AssignEngineerRole_role_advanced"};
				};
			};
		};
	};
	class Object
	{
		class AttributeCategories
		{
			class ace_attributes
			{
				class Attributes
				{
					class ace_isEngineer
					{
						property = "ace_isEngineer";
						displayName = "$STR_ace_repair_AssignEngineerRole_role_DisplayName";
						tooltip = "$STR_ace_repair_AssignEngineerRole_role_Description";
						expression = "if (_value != -1) then {_this setVariable ['%s',_value, true];}";
						typeName = "NUMBER";
						condition = "objectBrain";
						defaultValue = "-1";
						control = "ace_repair_isEngineerControl";
					};
					class ace_isRepairVehicle
					{
						property = "ace_isRepairVehicle";
						value = 0;
						control = "CheckboxNumber";
						displayName = "$STR_ace_repair_AssignRepairVehicle_role_DisplayName";
						tooltip = "$STR_ace_repair_AssignRepairVehicle_role_Description";
						expression = "_this setVariable ['%s',_value, true];";
						typeName = "NUMBER";
						condition = "objectVehicle";
						defaultValue = 0;
					};
					class ace_isRepairFacility
					{
						property = "ace_isRepairFacility";
						value = 0;
						control = "CheckboxNumber";
						displayName = "$STR_ace_repair_AssignRepairFacility_role_DisplayName";
						tooltip = "$STR_ace_repair_AssignRepairFacility_role_Description";
						expression = "_this setVariable ['%s',_value, true];";
						typeName = "NUMBER";
						condition = "(1 - objectBrain) * (1 - objectVehicle)";
						defaultValue = 0;
					};
					class ace_repair_editorLoadedTracks
					{
						displayName = "$STR_ace_repair_editorLoadedTracks";
						tooltip = "$STR_ace_repair_editorLoadedTracks_tooltip";
						property = "ace_repair_editorLoadedTracks";
						control = "Edit";
						expression = "_this setVariable ['%s',_value];";
						defaultValue = "[0,1] select (_this isKindOf 'Tank')";
						validate = "number";
						condition = "objectHasInventoryCargo";
						typeName = "NUMBER";
					};
					class ace_repair_editorLoadedWheels
					{
						displayName = "$STR_ace_repair_editorLoadedWheels";
						tooltip = "$STR_ace_repair_editorLoadedWheels_tooltip";
						property = "ace_repair_editorLoadedWheels";
						control = "Edit";
						expression = "_this setVariable ['%s',_value];";
						defaultValue = "[0,1] select (_this isKindOf 'Car')";
						validate = "number";
						condition = "objectHasInventoryCargo";
						typeName = "NUMBER";
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_repair
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\repair\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_repair
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\repair\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_repair
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\repair\XEH_postInit.sqf'";
	};
};
class Extended_InitPost_EventHandlers
{
	class Car
	{
		class ace_repair
		{
			init = "_this call ace_repair_fnc_addRepairActions";
		};
	};
	class Tank
	{
		class ace_repair
		{
			init = "_this call ace_repair_fnc_addRepairActions";
		};
	};
	class Motorcycle
	{
		class ace_repair
		{
			init = "_this call ace_repair_fnc_addRepairActions";
		};
	};
	class Helicopter
	{
		class ace_repair
		{
			init = "_this call ace_repair_fnc_addRepairActions";
			exclude[] = {"ace_fastroping_helper","ACE_friesBase","ace_refuel_helper"};
		};
	};
	class Plane
	{
		class ace_repair
		{
			init = "_this call ace_repair_fnc_addRepairActions";
		};
	};
	class Ship_F
	{
		class ace_repair
		{
			init = "_this call ace_repair_fnc_addRepairActions";
		};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Campaign_Base;
		class Acts_carFixingWheel: Campaign_Base
		{
			soundOverride = "";
		};
	};
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class ACE_Module;
	class ACE_moduleRepairSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_repair_moduleName";
		icon = "\z\ace\addons\repair\ui\Icon_Module_Repair_ca.paa";
		category = "ACE_Logistics";
		function = "ace_repair_fnc_moduleRepairSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_Common_ACETeam";
		class Arguments
		{
			class engineerSetting_Repair
			{
				displayName = "$STR_ace_repair_engineerSetting_Repair_name";
				description = "$STR_ace_repair_engineerSetting_Repair_description";
				typeName = "NUMBER";
				class values
				{
					class anyone
					{
						name = "$STR_ace_repair_engineerSetting_anyone";
						value = 0;
					};
					class Engineer
					{
						name = "$STR_ace_repair_engineerSetting_EngineerOnly";
						value = 1;
						default = 1;
					};
					class Advanced
					{
						name = "$STR_ace_repair_engineerSetting_AdvancedOnly";
						value = 2;
					};
				};
			};
			class engineerSetting_Wheel
			{
				displayName = "$STR_ace_repair_engineerSetting_Wheel_name";
				description = "$STR_ace_repair_engineerSetting_Wheel_description";
				typeName = "NUMBER";
				class values
				{
					class anyone
					{
						name = "$STR_ace_repair_engineerSetting_anyone";
						value = 0;
						default = 1;
					};
					class Engineer
					{
						name = "$STR_ace_repair_engineerSetting_EngineerOnly";
						value = 1;
					};
					class Advanced
					{
						name = "$STR_ace_repair_engineerSetting_AdvancedOnly";
						value = 2;
					};
				};
			};
			class repairDamageThreshold
			{
				displayName = "$STR_ace_repair_repairDamageThreshold_name";
				description = "$STR_ace_repair_repairDamageThreshold_description";
				typeName = "NUMBER";
				defaultValue = 0.6;
			};
			class repairDamageThreshold_Engineer
			{
				displayName = "$STR_ace_repair_repairDamageThreshold_Engineer_name";
				description = "$STR_ace_repair_repairDamageThreshold_Engineer_description";
				typeName = "NUMBER";
				defaultValue = 0.4;
			};
			class consumeItem_ToolKit
			{
				displayName = "$STR_ace_repair_consumeItem_ToolKit_name";
				description = "$STR_ace_repair_consumeItem_ToolKit_description";
				typeName = "NUMBER";
				class values
				{
					class keep
					{
						name = "$STR_ace_common_No";
						value = 0;
						default = 1;
					};
					class remove
					{
						name = "$STR_ace_common_Yes";
						value = 1;
					};
				};
			};
			class fullRepairLocation
			{
				displayName = "$STR_ace_repair_fullRepairLocation";
				description = "$STR_ace_repair_fullRepairLocation_description";
				typeName = "NUMBER";
				class values
				{
					class anywhere
					{
						name = "$STR_ace_repair_useAnywhere";
						value = 0;
					};
					class vehicle
					{
						name = "$STR_ace_repair_repairVehicleOnly";
						value = 1;
					};
					class facility
					{
						name = "$STR_ace_repair_repairFacilityOnly";
						value = 2;
						default = 1;
					};
					class vehicleAndFacility
					{
						name = "$STR_ace_repair_vehicleAndFacility";
						value = 3;
					};
					class disabled
					{
						name = "$STR_ace_common_Disabled";
						value = 4;
					};
				};
			};
			class engineerSetting_fullRepair
			{
				displayName = "$STR_ace_repair_engineerSetting_fullRepair_name";
				description = "$STR_ace_repair_engineerSetting_fullRepair_description";
				typeName = "NUMBER";
				class values
				{
					class anyone
					{
						name = "$STR_ace_repair_engineerSetting_anyone";
						value = 0;
					};
					class Engineer
					{
						name = "$STR_ace_repair_engineerSetting_EngineerOnly";
						value = 1;
					};
					class Advanced
					{
						name = "$STR_ace_repair_engineerSetting_AdvancedOnly";
						value = 2;
						default = 1;
					};
				};
			};
			class addSpareParts
			{
				displayName = "$STR_ace_repair_addSpareParts_name";
				description = "$STR_ace_repair_addSpareParts_description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class wheelRepairRequiredItems
			{
				displayName = "$STR_ace_repair_wheelRepairRequiredItems_name";
				description = "$STR_ace_repair_wheelRepairRequiredItems_description";
				typeName = "NUMBER";
				class values
				{
					class None
					{
						name = "None";
						value = 0;
						default = 1;
					};
					class ToolKit
					{
						name = "ToolKit";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_repair_moduleDescription";
			sync[] = {};
		};
	};
	class Module_F;
	class ACE_moduleAssignEngineerRoles: Module_F
	{
		scope = 1;
		displayName = "$STR_ace_repair_AssignEngineerRole_Module_DisplayName";
		icon = "\z\ace\addons\repair\ui\Icon_Module_Repair_ca.paa";
		category = "ACE_Logistics";
		function = "ace_repair_fnc_moduleAssignEngineer";
		functionPriority = 10;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class EnableList
			{
				displayName = "$STR_ace_repair_EnableList_DisplayName";
				description = "$STR_ace_repair_AssignEngineerRole_EnableList_Description";
				defaultValue = "";
				typeName = "STRING";
			};
			class role
			{
				displayName = "$STR_ace_repair_AssignEngineerRole_role_DisplayName";
				description = "$STR_ace_repair_AssignEngineerRole_role_Description";
				typeName = "NUMBER";
				class values
				{
					class none
					{
						name = "$STR_ace_repair_AssignEngineerRole_role_none";
						value = 0;
					};
					class medic
					{
						name = "$STR_ace_repair_AssignEngineerRole_role_engineer";
						value = 1;
						default = 1;
					};
					class doctor
					{
						name = "$STR_ace_repair_AssignEngineerRole_role_advanced";
						value = 2;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_repair_AssignEngineerRole_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAssignRepairVehicle: Module_F
	{
		scope = 1;
		displayName = "$STR_ace_repair_AssignRepairVehicle_Module_DisplayName";
		icon = "\z\ace\addons\repair\ui\Icon_Module_Repair_ca.paa";
		category = "ACE_Logistics";
		function = "ace_repair_fnc_moduleAssignRepairVehicle";
		functionPriority = 10;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class EnableList
			{
				displayName = "$STR_ace_repair_EnableList_DisplayName";
				description = "$STR_ace_repair_AssignRepairVehicle_EnableList_Description";
				defaultValue = "";
				typeName = "STRING";
			};
			class role
			{
				displayName = "$STR_ace_repair_AssignRepairVehicle_role_DisplayName";
				description = "$STR_ace_repair_AssignRepairVehicle_role_Description";
				typeName = "NUMBER";
				class values
				{
					class none
					{
						name = "$STR_ace_common_No";
						value = 0;
					};
					class isVehicle
					{
						name = "$STR_ace_common_Yes";
						value = 1;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_repair_AssignRepairVehicle_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAssignRepairFacility: ACE_moduleAssignRepairVehicle
	{
		displayName = "$STR_ace_repair_AssignRepairFacility_Module_DisplayName";
		function = "ace_repair_fnc_moduleAssignRepairFacility";
		class Arguments
		{
			class EnableList
			{
				displayName = "$STR_ace_repair_EnableList_DisplayName";
				description = "$STR_ace_repair_AssignRepairFacility_EnableList_Description";
				defaultValue = "";
				typeName = "STRING";
			};
			class role
			{
				displayName = "$STR_ace_repair_AssignRepairFacility_role_DisplayName";
				description = "$STR_ace_repair_AssignRepairFacility_role_Description";
				typeName = "NUMBER";
				class values
				{
					class none
					{
						name = "$STR_ace_common_No";
						value = 0;
					};
					class isFacility
					{
						name = "$STR_ace_common_Yes";
						value = 1;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_repair_AssignRepairFacility_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAddSpareParts: Module_F
	{
		scope = 1;
		displayName = "$STR_ace_repair_AddSpareParts_Module_DisplayName";
		icon = "\z\ace\addons\repair\ui\Icon_Module_Repair_ca.paa";
		category = "ACE_Logistics";
		function = "ace_repair_fnc_moduleAddSpareParts";
		functionPriority = 10;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class List
			{
				displayName = "$STR_ace_repair_EnableList_DisplayName";
				description = "$STR_ace_repair_AddSpareParts_List_Description";
				defaultValue = "";
				typeName = "STRING";
			};
			class Part
			{
				displayName = "$STR_ace_repair_AddSpareParts_Part_DisplayName";
				description = "$STR_ace_repair_AddSpareParts_Part_Description";
				typeName = "STRING";
				class values
				{
					class Wheel
					{
						name = "$STR_ace_repair_SpareWheel";
						value = "ACE_Wheel";
						default = 1;
					};
					class Track
					{
						name = "$STR_ace_repair_SpareTrack";
						value = "ACE_Track";
					};
				};
			};
			class Amount
			{
				displayName = "$STR_ace_repair_AddSpareParts_Amount_DisplayName";
				description = "$STR_ace_repair_AddSpareParts_Amount_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_repair_AddSpareParts_Module_Description";
			sync[] = {};
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_repair_Repair
				{
					displayName = "$STR_ace_repair_Repair";
					condition = "true";
					statement = "";
					runOnHover = 1;
					showDisabled = 0;
					priority = 2;
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
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
				class ace_repair_Repair
				{
					displayName = "$STR_ace_repair_Repair";
					condition = "true";
					statement = "";
					runOnHover = 1;
					showDisabled = 0;
					priority = 2;
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
				};
			};
		};
	};
	class Motorcycle: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_repair_Repair
				{
					displayName = "$STR_ace_repair_Repair";
					condition = "true";
					statement = "";
					runOnHover = 1;
					showDisabled = 0;
					priority = 2;
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
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
				class ace_repair_Repair
				{
					displayName = "$STR_ace_repair_Repair";
					condition = "true";
					statement = "";
					runOnHover = 1;
					showDisabled = 0;
					priority = 2;
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
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
				class ace_repair_Repair
				{
					displayName = "$STR_ace_repair_Repair";
					condition = "true";
					statement = "";
					runOnHover = 1;
					showDisabled = 0;
					priority = 2;
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
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
				class ace_repair_Repair
				{
					displayName = "$STR_ace_repair_Repair";
					condition = "true";
					statement = "";
					runOnHover = 1;
					showDisabled = 0;
					priority = 2;
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
				};
			};
		};
	};
	class ThingX;
	class ACE_RepairItem_Base: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				modifierFunction = "_this call ace_repair_fnc_modifyInteraction";
			};
		};
		accuracy = 0.2;
		vehicleClass = "ACE_Logistics_Items";
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "ace_main_subcategory";
	};
	class ACE_Track: ACE_RepairItem_Base
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
		author = "Hawkins";
		scope = 2;
		model = "\z\ace\addons\repair\data\ace_track.p3d";
		displayName = "$STR_ace_repair_SpareTrack";
		icon = "iconObject_2x1";
		mapSize = 0.5;
		armor = 1000;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		selectionDamage = "mat_track";
		class Damage
		{
			tex[] = {};
			mat[] = {"z\ace\addons\repair\data\trailObjects_steel.rvmat","z\ace\addons\repair\data\trailObjects_steel_damage.rvmat","z\ace\addons\repair\data\trailObjects_steel_destruct.rvmat"};
		};
		editorPreview = "\z\ace\addons\repair\data\preview_track.jpg";
	};
	class ACE_Wheel: ACE_RepairItem_Base
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		author = "Hawkins";
		scope = 2;
		model = "\z\ace\addons\repair\data\ace_wheel.p3d";
		displayName = "$STR_ace_repair_SpareWheel";
		picture = "\z\ace\addons\repair\ui\tire_ca.paa";
		icon = "iconObject_circle";
		mapSize = 0.7;
		armor = 120;
		armorStructural = 1;
		minTotalDamageThreshold = 0.01;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		selectionDamage = "mat_tyre";
		class HitPoints
		{
			class HitBody
			{
				armor = 0.6;
				material = -1;
				name = "mat_rim";
				visual = "mat_rim";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"z\ace\addons\repair\data\trailObjects_tyre.rvmat","z\ace\addons\repair\data\trailObjects_tyre_damage.rvmat","z\ace\addons\repair\data\trailObjects_tyre_damage.rvmat","z\ace\addons\repair\data\trailObjects_steel.rvmat","z\ace\addons\repair\data\trailObjects_steel_damage.rvmat","z\ace\addons\repair\data\trailObjects_steel_destruct.rvmat"};
		};
		editorPreview = "\z\ace\addons\repair\data\preview_wheel.jpg";
	};
	class ReammoBox_F;
	class Land_RepairDepot_01_base_F: ReammoBox_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Van_02_base_F;
	class Van_02_service_base_F: Van_02_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Slingload_01_Base_F;
	class B_Slingload_01_Repair_F: Slingload_01_Base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Helicopter_Base_H;
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		ace_repair_hitpointGroups[] = {{"HitEngine",{"HitEngine1","HitEngine2"}},{"Glass_1_hitpoint",{"Glass_2_hitpoint","Glass_3_hitpoint","Glass_4_hitpoint","Glass_5_hitpoint","Glass_6_hitpoint","Glass_7_hitpoint","Glass_8_hitpoint","Glass_9_hitpoint","Glass_10_hitpoint","Glass_11_hitpoint","Glass_12_hitpoint","Glass_13_hitpoint","Glass_14_hitpoint","Glass_15_hitpoint","Glass_16_hitpoint","Glass_17_hitpoint","Glass_18_hitpoint","Glass_19_hitpoint","Glass_20_hitpoint"}}};
	};
	class O_Heli_Transport_04_repair_F: Heli_Transport_04_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Pod_Heli_Transport_04_base_F;
	class Land_Pod_Heli_Transport_04_repair_F: Pod_Heli_Transport_04_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Heli_Transport_02_base_F;
	class I_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		ace_repair_hitpointPositions[] = {{"HitVRotor",{-1,-9.4,1.8}},{"HitHRotor",{0,1.8,1.3}}};
	};
	class Helicopter_Base_F;
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		ace_repair_hitpointPositions[] = {{"HitVRotor",{-0.5,-5.55,1.2}},{"HitHRotor",{0,1.8,1.5}}};
	};
	class B_APC_Tracked_01_base_F;
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		ace_repair_hitpointPositions[] = {{"HitTurret",{0,-2,0}}};
	};
	class Car_F;
	class Offroad_01_base_F: Car_F
	{
		ace_repair_hitpointGroups[] = {{"HitGlass1",{"HitGlass2"}}};
	};
	class Offroad_01_repair_base_F: Offroad_01_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class MRAP_01_base_F: Car_F
	{
		ace_repair_hitpointGroups[] = {{"HitGlass1",{"HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6"}}};
	};
	class B_Truck_01_mover_F;
	class B_Truck_01_Repair_F: B_Truck_01_mover_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		transportRepair = 0;
	};
	class Truck_02_base_F;
	class Truck_02_box_base_F: Truck_02_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Truck_02_medical_base_F: Truck_02_box_base_F
	{
		ace_repair_canRepair = 0;
	};
	class Truck_03_base_F;
	class O_Truck_03_repair_F: Truck_03_base_F
	{
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class Quadbike_01_base_F: Car_F
	{
		ace_repair_hitpointPositions[] = {{"HitEngine",{0,0.5,-0.7}},{"HitFuel",{0,0,-0.5}}};
	};
	class Hatchback_01_base_F: Car_F
	{
		ace_repair_hitpointPositions[] = {{"HitBody",{0,0.7,-0.5}},{"HitFuel",{0,-1.75,-0.75}}};
	};
};
