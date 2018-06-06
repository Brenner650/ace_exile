////////////////////////////////////////////////////////////////////
//DeRap: ace_medical\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:45:48 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_medical
	{
		name = "ACE3 - Medical";
		units[] = {"ACE_medicalSupplyCrate","ACE_medicalSupplyCrate_advanced","ACE_fieldDressingItem","ACE_packingBandageItem","ACE_elasticBandageItem","ACE_tourniquetItem","ACE_morphineItem","ACE_atropineItem","ACE_epinephrineItem","ACE_plasmaIVItem","ACE_bloodIVItem","ACE_salineIVItem","ACE_quikclotItem","ACE_personalAidKitItem","ACE_surgicalKitItem","ACE_bodyBagItem","ACE_bodyBagObject","ACE_adenosineItem"};
		weapons[] = {"ACE_fieldDressing","ACE_packingBandage","ACE_elasticBandage","ACE_tourniquet","ACE_morphine","ACE_atropine","ACE_epinephrine","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_250","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_250","ACE_salineIV","ACE_salineIV_500","ACE_salineIV_250","ACE_quikclot","ACE_personalAidKit","ACE_surgicalKit","ACE_bodyBag","ACE_adenosine"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction","ace_apl"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Glowbal","KoffeinFlummi"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgActions
{
	class None;
	class Heal: None
	{
		show = 0;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_medical
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_medical
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_medical
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical\XEH_postInit.sqf'";
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class ace_medical: NO_CATEGORY
	{
		displayName = "$STR_ace_medical_Category_DisplayName";
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits{};
	};
	class ACE_Module;
	class ACE_moduleMedicalSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_medical_MedicalSettings_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleMedicalSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class level
			{
				displayName = "$STR_ace_medical_MedicalSettings_level_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_level_Description";
				typeName = "NUMBER";
				class values
				{
					class normal
					{
						name = "$STR_ace_medical_MedicalSettings_basic";
						value = 1;
						default = 1;
					};
					class full
					{
						name = "$STR_ace_medical_MedicalSettings_advanced";
						value = 2;
					};
				};
			};
			class medicSetting
			{
				displayName = "$STR_ace_medical_MedicalSettings_medicSetting_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_medicSetting_Description";
				typeName = "NUMBER";
				class values
				{
					class disable
					{
						name = "$STR_ace_medical_MedicalSettings_medicSetting_disable";
						value = 0;
					};
					class normal
					{
						name = "$STR_ace_medical_MedicalSettings_basic";
						value = 1;
						default = 1;
					};
					class full
					{
						name = "$STR_ace_medical_MedicalSettings_advanced";
						value = 2;
					};
				};
			};
			class increaseTrainingInLocations
			{
				displayName = "$STR_ace_medical_MedicalSettings_increaseTrainingInLocations_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_increaseTrainingInLocations_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class allowLitterCreation
			{
				displayName = "$STR_ace_medical_MedicalSettings_allowLitterCreation_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_allowLitterCreation_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class litterCleanUpDelay
			{
				displayName = "$STR_ace_medical_MedicalSettings_litterCleanUpDelay_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_litterCleanUpDelay_Description";
				typeName = "NUMBER";
				defaultValue = 1800;
			};
			class enableScreams
			{
				displayName = "$STR_ace_medical_MedicalSettings_enableScreams_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_enableScreams_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class playerDamageThreshold
			{
				displayName = "$STR_ace_medical_MedicalSettings_playerDamageThreshold_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_playerDamageThreshold_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class AIDamageThreshold
			{
				displayName = "$STR_ace_medical_MedicalSettings_AIDamageThreshold_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_AIDamageThreshold_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class enableUnconsciousnessAI
			{
				displayName = "$STR_ace_medical_MedicalSettings_enableUnconsciousnessAI_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_enableUnconsciousnessAI_Description";
				typeName = "NUMBER";
				class values
				{
					class disable
					{
						name = "$STR_ace_common_Disabled";
						value = 0;
					};
					class normal
					{
						name = "50/50";
						value = 1;
						default = 1;
					};
					class full
					{
						name = "$STR_ace_common_Enabled";
						value = 2;
					};
				};
			};
			class remoteControlledAI
			{
				displayName = "$STR_ace_medical_MedicalSettings_remoteControlledAI_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_remoteControlledAI_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class preventInstaDeath
			{
				displayName = "$STR_ace_medical_MedicalSettings_preventInstaDeath_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_preventInstaDeath_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class bleedingCoefficient
			{
				displayName = "$STR_ace_medical_MedicalSettings_bleedingCoefficient_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_bleedingCoefficient_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class painCoefficient
			{
				displayName = "$STR_ace_medical_MedicalSettings_painCoefficient_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_painCoefficient_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class keepLocalSettingsSynced
			{
				displayName = "$STR_ace_medical_MedicalSettings_keepLocalSettingsSynced_DisplayName";
				description = "$STR_ace_medical_MedicalSettings_keepLocalSettingsSynced_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_MedicalSettings_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleBasicMedicalSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_medical_BasicMedicalSettings_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleBasicMedicalSettings";
		functionPriority = 10;
		isGlobal = 2;
		isSingular = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class medicSetting_basicEpi
			{
				displayName = "$STR_ace_medical_BasicMedicalSettings_medicSetting_basicEpi_DisplayName";
				description = "$STR_ace_medical_BasicMedicalSettings_medicSetting_basicEpi_Description";
				typeName = "NUMBER";
				class values
				{
					class anyone
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_anyone";
						value = 0;
					};
					class Medic
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_Medic";
						value = 1;
						default = 1;
					};
					class Special
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_Special";
						value = 2;
					};
				};
			};
			class useLocation_basicEpi
			{
				displayName = "$STR_ace_medical_BasicMedicalSettings_useLocation_basicEpi_DisplayName";
				description = "$STR_ace_medical_BasicMedicalSettings_useLocation_basicEpi_Description";
				typeName = "NUMBER";
				class values
				{
					class anywhere
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_anywhere";
						value = 0;
						default = 1;
					};
					class vehicle
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_vehicle";
						value = 1;
					};
					class facility
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_facility";
						value = 2;
					};
					class vehicleAndFacility
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility";
						value = 3;
					};
					class disabled
					{
						name = "$STR_ace_common_Disabled";
						value = 4;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_BasicMedicalSettings_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAdvancedMedicalSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleAdvancedMedicalSettings";
		functionPriority = 10;
		isGlobal = 2;
		isSingular = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enableFor
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_enableFor_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_enableFor_Description";
				typeName = "NUMBER";
				class values
				{
					class playableUnits
					{
						name = "$STR_ace_medical_playeronly";
						value = 0;
						default = 1;
					};
					class playableUnitsAndAI
					{
						name = "$STR_ace_medical_playersandai";
						value = 1;
					};
				};
			};
			class enableAdvancedWounds
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_enableAdvancedWounds_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_enableAdvancedWounds_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class enableVehicleCrashes
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_enableVehicleCrashes_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_enableVehicleCrashes_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class medicSetting_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_PAK_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_PAK_Description";
				typeName = "NUMBER";
				class values
				{
					class anyone
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_anyone";
						value = 0;
					};
					class Medic
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_Medic";
						value = 1;
						default = 1;
					};
					class Special
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_Special";
						value = 2;
					};
				};
			};
			class consumeItem_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_PAK_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_PAK_Description";
				typeName = "NUMBER";
				class values
				{
					class keep
					{
						name = "$STR_ace_common_No";
						value = 0;
					};
					class remove
					{
						name = "$STR_ace_common_Yes";
						value = 1;
						default = 1;
					};
				};
			};
			class useCondition_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_PAK_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_PAK_Description";
				typeName = "NUMBER";
				class values
				{
					class AnyTime
					{
						name = "$STR_ace_medical_AnyTime";
						value = 0;
					};
					class Stable
					{
						name = "$STR_ace_medical_Stable";
						value = 1;
						default = 1;
					};
				};
			};
			class useLocation_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_PAK_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_PAK_Description";
				typeName = "NUMBER";
				class values
				{
					class anywhere
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_anywhere";
						value = 0;
					};
					class vehicle
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_vehicle";
						value = 1;
					};
					class facility
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_facility";
						value = 2;
					};
					class vehicleAndFacility
					{
						name = "$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility";
						value = 3;
						default = 1;
					};
					class disabled
					{
						name = "$STR_ace_common_Disabled";
						value = 4;
					};
				};
			};
			class medicSetting_SurgicalKit: medicSetting_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_SurgicalKit_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_SurgicalKit_Description";
			};
			class consumeItem_SurgicalKit: consumeItem_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_SurgicalKit_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_SurgicalKit_Description";
			};
			class useLocation_SurgicalKit: useLocation_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_SurgicalKit_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_SurgicalKit_Description";
			};
			class useCondition_SurgicalKit: useCondition_PAK
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_SurgicalKit_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_SurgicalKit_Description";
				class values
				{
					class AnyTime
					{
						name = "$STR_ace_medical_AnyTime";
						value = 0;
						default = 1;
					};
					class Stable
					{
						name = "$STR_ace_medical_Stable";
						value = 1;
					};
				};
			};
			class healHitPointAfterAdvBandage
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_healHitPointAfterAdvBandage_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_healHitPointAfterAdvBandage_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class painIsOnlySuppressed
			{
				displayName = "$STR_ace_medical_AdvancedMedicalSettings_painIsOnlySuppressed_DisplayName";
				description = "$STR_ace_medical_AdvancedMedicalSettings_painIsOnlySuppressed_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_AdvancedMedicalSettings_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleReviveSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_medical_ReviveSettings_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleReviveSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enableRevive
			{
				displayName = "$STR_ace_medical_ReviveSettings_enableRevive_DisplayName";
				description = "$STR_ace_medical_ReviveSettings_enableRevive_Description";
				typeName = "NUMBER";
				defaultValue = 0;
				class values
				{
					class disable
					{
						name = "$STR_ace_common_Disabled";
						value = 0;
						default = 1;
					};
					class playerOnly
					{
						name = "$STR_ace_medical_playeronly";
						value = 1;
					};
					class playerAndAI
					{
						name = "$STR_ace_medical_playersandai";
						value = 2;
					};
				};
			};
			class maxReviveTime
			{
				displayName = "$STR_ace_medical_ReviveSettings_maxReviveTime_DisplayName";
				description = "$STR_ace_medical_ReviveSettings_maxReviveTime_Description";
				typeName = "NUMBER";
				defaultValue = 120;
			};
			class amountOfReviveLives
			{
				displayName = "$STR_ace_medical_ReviveSettings_amountOfReviveLives_DisplayName";
				description = "$STR_ace_medical_ReviveSettings_amountOfReviveLives_Description";
				typeName = "NUMBER";
				defaultValue = -1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_ReviveSettings_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAssignMedicRoles: Module_F
	{
		scope = 1;
		displayName = "$STR_ace_medical_AssignMedicRoles_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleAssignMedicRoles";
		functionPriority = 10;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class EnableList
			{
				displayName = "$STR_ace_medical_AssignMedicRoles_EnableList_DisplayName";
				description = "$STR_ace_medical_AssignMedicRoles_EnableList_Description";
				defaultValue = "";
				typeName = "STRING";
			};
			class role
			{
				displayName = "$STR_ace_medical_AssignMedicRoles_role_DisplayName";
				description = "$STR_ace_medical_AssignMedicRoles_role_Description";
				typeName = "NUMBER";
				class values
				{
					class none
					{
						name = "$STR_ace_medical_AssignMedicRoles_role_none";
						value = 0;
					};
					class medic
					{
						name = "$STR_ace_medical_AssignMedicRoles_role_medic";
						value = 1;
						default = 1;
					};
					class doctor
					{
						name = "$STR_ace_medical_AssignMedicRoles_role_doctor";
						value = 2;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_AssignMedicRoles_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAssignMedicVehicle: Module_F
	{
		scope = 1;
		displayName = "$STR_ace_medical_AssignMedicVehicle_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleAssignMedicalVehicle";
		functionPriority = 10;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class EnableList
			{
				displayName = "$STR_ace_medical_AssignMedicVehicle_EnableList_DisplayName";
				description = "$STR_ace_medical_AssignMedicVehicle_EnableList_Description";
				defaultValue = "";
				typeName = "STRING";
			};
			class enabled
			{
				displayName = "$STR_ace_medical_AssignMedicVehicle_enabled_DisplayName";
				description = "$STR_ace_medical_AssignMedicVehicle_enabled_Description";
				typeName = "NUMBER";
				class values
				{
					class none
					{
						name = "$STR_ace_common_No";
						value = 0;
					};
					class medic
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
			description = "$STR_ace_medical_AssignMedicVehicle_Module_Description";
			sync[] = {};
		};
	};
	class ACE_moduleAssignMedicalFacility: Module_F
	{
		scope = 1;
		displayName = "$STR_ace_medical_AssignMedicalFacility_Module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_fnc_moduleAssignMedicalFacility";
		functionPriority = 10;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enabled
			{
				displayName = "$STR_ace_medical_AssignMedicalFacility_enabled_DisplayName";
				description = "$STR_ace_medical_AssignMedicalFacility_enabled_Description";
				typeName = "BOOL";
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_AssignMedicalFacility_Module_Description";
			sync[] = {};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
		class ACE_SelfActions
		{
			class Medical
			{
				displayName = "$STR_ace_medical_Actions_Medical";
				runOnHover = 1;
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
				condition = "true";
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				class ACE_Head
				{
					displayName = "$STR_ace_medical_Head";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = "true";
					runOnHover = 1;
					class Bandage
					{
						displayName = "$STR_ace_medical_Bandage";
						distance = 2.0;
						condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing
					{
						displayName = "$STR_ace_medical_Actions_FieldDressing";
						distance = 5.0;
						condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_PackingBandage";
						condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					};
					class ElasticBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_ElasticBandage";
						condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_QuikClot";
						condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class CheckPulse: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_CheckPulse";
						condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
					};
					class CheckBloodPressure: CheckPulse
					{
						displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
						condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
					};
				};
				class ACE_Torso
				{
					displayName = "$STR_ace_medical_Torso";
					distance = 5.0;
					condition = "true";
					runOnHover = 1;
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage
					{
						displayName = "$STR_ace_medical_Bandage";
						distance = 2.0;
						condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class TriageCard
					{
						displayName = "$STR_ace_medical_Actions_TriageCard";
						distance = 2.0;
						condition = "true";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
					};
					class FieldDressing
					{
						displayName = "$STR_ace_medical_Actions_FieldDressing";
						distance = 5.0;
						condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_PackingBandage";
						condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					};
					class ElasticBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_ElasticBandage";
						condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_QuikClot";
						condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
				};
				class ACE_ArmLeft
				{
					displayName = "$STR_ace_interaction_ArmLeft";
					runOnHover = 1;
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = "true";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage
					{
						displayName = "$STR_ace_medical_Bandage";
						distance = 2.0;
						condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing
					{
						displayName = "$STR_ace_medical_Actions_FieldDressing";
						distance = 5.0;
						condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_PackingBandage";
						condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					};
					class ElasticBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_ElasticBandage";
						condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_QuikClot";
						condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_Tourniquet";
						condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					};
					class Morphine: fieldDressing
					{
						displayName = "$STR_ace_medical_Inject_Morphine";
						condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Adenosine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Atropine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Epinephrine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Epinephrine";
						condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class CheckPulse: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_CheckPulse";
						condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
					};
					class CheckBloodPressure: CheckPulse
					{
						displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
						condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
					};
					class RemoveTourniquet: Tourniquet
					{
						displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
						condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					};
				};
				class ACE_ArmRight
				{
					displayName = "$STR_ace_interaction_ArmRight";
					runOnHover = 1;
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = "true";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage
					{
						displayName = "$STR_ace_medical_Bandage";
						distance = 2.0;
						condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing
					{
						displayName = "$STR_ace_medical_Actions_FieldDressing";
						distance = 5.0;
						condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_PackingBandage";
						condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					};
					class ElasticBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_ElasticBandage";
						condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
					};
					class QuikClot: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_QuikClot";
						condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
					};
					class Tourniquet: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_Tourniquet";
						condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					};
					class Morphine: fieldDressing
					{
						displayName = "$STR_ace_medical_Inject_Morphine";
						condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Adenosine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Adenosine";
						condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Atropine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
					};
					class Epinephrine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Epinephrine";
						condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
					};
					class CheckPulse: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_CheckPulse";
						condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
					};
					class CheckBloodPressure: CheckPulse
					{
						displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
						condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
					};
					class RemoveTourniquet: Tourniquet
					{
						displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
						condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					};
				};
				class ACE_LegLeft
				{
					displayName = "$STR_ace_interaction_LegLeft";
					runOnHover = 1;
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = "true";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage
					{
						displayName = "$STR_ace_medical_Bandage";
						distance = 2.0;
						condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing
					{
						displayName = "$STR_ace_medical_Actions_FieldDressing";
						distance = 5.0;
						condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_PackingBandage";
						condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					};
					class ElasticBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_ElasticBandage";
						condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
					};
					class QuikClot: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_QuikClot";
						condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
					};
					class Tourniquet: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_Tourniquet";
						condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					};
					class Morphine: fieldDressing
					{
						displayName = "$STR_ace_medical_Inject_Morphine";
						condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Adenosine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Atropine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Epinephrine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Epinephrine";
						condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
					};
					class RemoveTourniquet: Tourniquet
					{
						displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
						condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					};
				};
				class ACE_LegRight
				{
					displayName = "$STR_ace_interaction_LegRight";
					runOnHover = 1;
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = "true";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage
					{
						displayName = "$STR_ace_medical_Bandage";
						distance = 2.0;
						condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing
					{
						displayName = "$STR_ace_medical_Actions_FieldDressing";
						distance = 5.0;
						condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_PackingBandage";
						condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					};
					class ElasticBandage: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_ElasticBandage";
						condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
					};
					class QuikClot: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_QuikClot";
						condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
					};
					class Tourniquet: fieldDressing
					{
						displayName = "$STR_ace_medical_Actions_Tourniquet";
						condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					};
					class Morphine: fieldDressing
					{
						displayName = "$STR_ace_medical_Inject_Morphine";
						condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Adenosine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
					class Atropine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Atropine";
						condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
					};
					class Epinephrine: Morphine
					{
						displayName = "$STR_ace_medical_Inject_Epinephrine";
						condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
					};
					class RemoveTourniquet: Tourniquet
					{
						displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
						condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside","isNotSwimming"};
						statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					};
				};
			};
		};
		class ACE_Actions
		{
			class ACE_Head
			{
				displayName = "$STR_ace_medical_Head";
				runOnHover = 1;
				statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage
				{
					displayName = "$STR_ace_medical_Bandage";
					distance = 2.0;
					condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing
				{
					displayName = "$STR_ace_medical_Actions_FieldDressing";
					distance = 5.0;
					condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_PackingBandage";
					condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
				};
				class ElasticBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_ElasticBandage";
					condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_QuikClot";
					condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class CheckPulse: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_CheckPulse";
					condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "";
				};
				class CheckBloodPressure: CheckPulse
				{
					displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
					condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class CheckResponse: CheckPulse
				{
					displayName = "$STR_ace_medical_Check_Response";
					condition = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class Diagnose: CheckPulse
				{
					displayName = "$STR_ace_medical_Actions_Diagnose";
					condition = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class ACE_Torso
			{
				displayName = "$STR_ace_medical_Torso";
				runOnHover = 1;
				statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage
				{
					displayName = "$STR_ace_medical_Bandage";
					distance = 2.0;
					condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PlaceInBodyBag
				{
					displayName = "$STR_ace_medical_PlaceInBodyBag";
					distance = 2.0;
					condition = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
				};
				class TriageCard
				{
					displayName = "$STR_ace_medical_Actions_TriageCard";
					distance = 2.0;
					condition = "true";
					statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
				};
				class Diagnose
				{
					displayName = "$STR_ace_medical_Actions_Diagnose";
					distance = 5.0;
					condition = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					icon = "";
				};
				class FieldDressing
				{
					displayName = "$STR_ace_medical_Actions_FieldDressing";
					distance = 5.0;
					condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_PackingBandage";
					condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
				};
				class ElasticBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_ElasticBandage";
					condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_QuikClot";
					condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class SurgicalKit: fieldDressing
				{
					displayName = "$STR_ace_medical_Use_SurgicalKit";
					condition = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\surgicalKit.paa";
				};
				class PersonalAidKit: fieldDressing
				{
					displayName = "$STR_ace_medical_Use_Aid_Kit";
					condition = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "";
				};
				class CPR: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_CPR";
					condition = "[_player,_target,'body','CPR'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','CPR'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "";
				};
			};
			class ACE_ArmLeft
			{
				displayName = "$STR_ace_interaction_ArmLeft";
				runOnHover = 1;
				statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage
				{
					displayName = "$STR_ace_medical_Bandage";
					distance = 2.0;
					condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing
				{
					displayName = "$STR_ace_medical_Actions_FieldDressing";
					distance = 5.0;
					condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_PackingBandage";
					condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
				};
				class ElasticBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_ElasticBandage";
					condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_QuikClot";
					condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Tourniquet";
					condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
				};
				class Morphine: fieldDressing
				{
					displayName = "$STR_ace_medical_Inject_Morphine";
					condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Adenosine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Adenosine";
					condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Atropine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Atropine";
					condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Epinephrine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Epinephrine";
					condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class BloodIV: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Blood4_1000";
					condition = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
				};
				class BloodIV_500: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_500";
					condition = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV_250: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_250";
					condition = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_1000";
					condition = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_500: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_500";
					condition = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_250: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_250";
					condition = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_1000";
					condition = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_500: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_500";
					condition = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_250: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_250";
					condition = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class CheckPulse: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_CheckPulse";
					condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "";
				};
				class CheckBloodPressure: CheckPulse
				{
					displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
					condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class RemoveTourniquet: Tourniquet
				{
					displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
					condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class ACE_ArmRight
			{
				displayName = "$STR_ace_interaction_ArmRight";
				runOnHover = 1;
				statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage
				{
					displayName = "$STR_ace_medical_Bandage";
					distance = 2.0;
					condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing
				{
					displayName = "$STR_ace_medical_Actions_FieldDressing";
					distance = 5.0;
					condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_PackingBandage";
					condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
				};
				class ElasticBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_ElasticBandage";
					condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class QuikClot: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_QuikClot";
					condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class Tourniquet: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Tourniquet";
					condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
				};
				class Morphine: fieldDressing
				{
					displayName = "$STR_ace_medical_Inject_Morphine";
					condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Adenosine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Adenosine";
					condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Atropine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Atropine";
					condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class Epinephrine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Epinephrine";
					condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Blood4_1000";
					condition = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
				};
				class BloodIV_500: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_500";
					condition = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV_250: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_250";
					condition = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_1000";
					condition = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_500: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_500";
					condition = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_250: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_250";
					condition = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_1000";
					condition = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_500: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_500";
					condition = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_250: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_250";
					condition = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class CheckPulse: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_CheckPulse";
					condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "";
				};
				class CheckBloodPressure: CheckPulse
				{
					displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
					condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class RemoveTourniquet: Tourniquet
				{
					displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
					condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class ACE_LegLeft
			{
				displayName = "$STR_ace_interaction_LegLeft";
				runOnHover = 1;
				statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage
				{
					displayName = "$STR_ace_medical_Bandage";
					distance = 2.0;
					condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing
				{
					displayName = "$STR_ace_medical_Actions_FieldDressing";
					distance = 5.0;
					condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_PackingBandage";
					condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
				};
				class ElasticBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_ElasticBandage";
					condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class QuikClot: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_QuikClot";
					condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class Tourniquet: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Tourniquet";
					condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
				};
				class Morphine: fieldDressing
				{
					displayName = "$STR_ace_medical_Inject_Morphine";
					condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Adenosine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Atropine";
					condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Atropine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Atropine";
					condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Epinephrine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Epinephrine";
					condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Blood4_1000";
					condition = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
				};
				class BloodIV_500: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_500";
					condition = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV_250: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_250";
					condition = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_1000";
					condition = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_500: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_500";
					condition = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_250: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_250";
					condition = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_1000";
					condition = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_500: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_500";
					condition = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_250: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_250";
					condition = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class RemoveTourniquet: Tourniquet
				{
					displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
					condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class ACE_LegRight
			{
				displayName = "$STR_ace_interaction_LegRight";
				runOnHover = 1;
				statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage
				{
					displayName = "$STR_ace_medical_Bandage";
					distance = 2.0;
					condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing
				{
					displayName = "$STR_ace_medical_Actions_FieldDressing";
					distance = 5.0;
					condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_PackingBandage";
					condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
				};
				class ElasticBandage: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_ElasticBandage";
					condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class QuikClot: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_QuikClot";
					condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class Tourniquet: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Tourniquet";
					condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
				};
				class Morphine: fieldDressing
				{
					displayName = "$STR_ace_medical_Inject_Morphine";
					condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Adenosine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Atropine";
					condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
				};
				class Atropine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Atropine";
					condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class Epinephrine: Morphine
				{
					displayName = "$STR_ace_medical_Inject_Epinephrine";
					condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV: fieldDressing
				{
					displayName = "$STR_ace_medical_Actions_Blood4_1000";
					condition = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
				};
				class BloodIV_500: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_500";
					condition = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class BloodIV_250: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Blood4_250";
					condition = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_1000";
					condition = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_500: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_500";
					condition = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class PlasmaIV_250: PlasmaIV
				{
					displayName = "$STR_ace_medical_Actions_Plasma4_250";
					condition = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV: BloodIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_1000";
					condition = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_500: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_500";
					condition = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class SalineIV_250: SalineIV
				{
					displayName = "$STR_ace_medical_Actions_Saline4_250";
					condition = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
				class RemoveTourniquet: Tourniquet
				{
					displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
					condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class ACE_MainActions
			{
				class Medical
				{
					displayName = "$STR_ace_medical_Actions_Medical";
					runOnHover = 1;
					exceptions[] = {"isNotInside"};
					condition = "(vehicle _target != _target && vehicle _target == vehicle _player) || ace_medical_menuTypeStyle== 1";
					statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class ACE_Head
					{
						displayName = "$STR_ace_medical_Head";
						runOnHover = 1;
						statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
						condition = "true";
						modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside","isNotSwimming"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage
						{
							displayName = "$STR_ace_medical_Bandage";
							distance = 2.0;
							condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing
						{
							displayName = "$STR_ace_medical_Actions_FieldDressing";
							distance = 5.0;
							condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_PackingBandage";
							condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						};
						class ElasticBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_ElasticBandage";
							condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_QuikClot";
							condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class CheckPulse: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_CheckPulse";
							condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "";
						};
						class CheckBloodPressure: CheckPulse
						{
							displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
							condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class CheckResponse: CheckPulse
						{
							displayName = "$STR_ace_medical_Check_Response";
							condition = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class Diagnose: CheckPulse
						{
							displayName = "$STR_ace_medical_Actions_Diagnose";
							condition = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
					};
					class ACE_Torso
					{
						displayName = "$STR_ace_medical_Torso";
						runOnHover = 1;
						statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
						condition = "true";
						modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside","isNotSwimming"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage
						{
							displayName = "$STR_ace_medical_Bandage";
							distance = 2.0;
							condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PlaceInBodyBag
						{
							displayName = "$STR_ace_medical_PlaceInBodyBag";
							distance = 2.0;
							condition = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
						};
						class TriageCard
						{
							displayName = "$STR_ace_medical_Actions_TriageCard";
							distance = 2.0;
							condition = "true";
							statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
						};
						class Diagnose
						{
							displayName = "$STR_ace_medical_Actions_Diagnose";
							distance = 5.0;
							condition = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							icon = "";
						};
						class FieldDressing
						{
							displayName = "$STR_ace_medical_Actions_FieldDressing";
							distance = 5.0;
							condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_PackingBandage";
							condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						};
						class ElasticBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_ElasticBandage";
							condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_QuikClot";
							condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class SurgicalKit: fieldDressing
						{
							displayName = "$STR_ace_medical_Use_SurgicalKit";
							condition = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\surgicalKit.paa";
						};
						class PersonalAidKit: fieldDressing
						{
							displayName = "$STR_ace_medical_Use_Aid_Kit";
							condition = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "";
						};
						class CPR: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_CPR";
							condition = "[_player,_target,'body','CPR'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','CPR'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "";
						};
					};
					class ACE_ArmLeft
					{
						displayName = "$STR_ace_interaction_ArmLeft";
						runOnHover = 1;
						statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
						condition = "true";
						modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside","isNotSwimming"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage
						{
							displayName = "$STR_ace_medical_Bandage";
							distance = 2.0;
							condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing
						{
							displayName = "$STR_ace_medical_Actions_FieldDressing";
							distance = 5.0;
							condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_PackingBandage";
							condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						};
						class ElasticBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_ElasticBandage";
							condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_QuikClot";
							condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Tourniquet";
							condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						};
						class Morphine: fieldDressing
						{
							displayName = "$STR_ace_medical_Inject_Morphine";
							condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Adenosine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Adenosine";
							condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Atropine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Atropine";
							condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Epinephrine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Epinephrine";
							condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class BloodIV: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Blood4_1000";
							condition = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
						};
						class BloodIV_500: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_500";
							condition = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV_250: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_250";
							condition = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_1000";
							condition = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_500: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_500";
							condition = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_250: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_250";
							condition = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_1000";
							condition = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_500: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_500";
							condition = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_250: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_250";
							condition = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class CheckPulse: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_CheckPulse";
							condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "";
						};
						class CheckBloodPressure: CheckPulse
						{
							displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
							condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class RemoveTourniquet: Tourniquet
						{
							displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
							condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
					};
					class ACE_ArmRight
					{
						displayName = "$STR_ace_interaction_ArmRight";
						runOnHover = 1;
						statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
						condition = "true";
						modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside","isNotSwimming"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage
						{
							displayName = "$STR_ace_medical_Bandage";
							distance = 2.0;
							condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing
						{
							displayName = "$STR_ace_medical_Actions_FieldDressing";
							distance = 5.0;
							condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_PackingBandage";
							condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						};
						class ElasticBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_ElasticBandage";
							condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class QuikClot: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_QuikClot";
							condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class Tourniquet: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Tourniquet";
							condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						};
						class Morphine: fieldDressing
						{
							displayName = "$STR_ace_medical_Inject_Morphine";
							condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Adenosine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Adenosine";
							condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Atropine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Atropine";
							condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class Epinephrine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Epinephrine";
							condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Blood4_1000";
							condition = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
						};
						class BloodIV_500: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_500";
							condition = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV_250: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_250";
							condition = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_1000";
							condition = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_500: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_500";
							condition = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_250: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_250";
							condition = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_1000";
							condition = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_500: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_500";
							condition = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_250: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_250";
							condition = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class CheckPulse: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_CheckPulse";
							condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "";
						};
						class CheckBloodPressure: CheckPulse
						{
							displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
							condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class RemoveTourniquet: Tourniquet
						{
							displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
							condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
					};
					class ACE_LegLeft
					{
						displayName = "$STR_ace_interaction_LegLeft";
						runOnHover = 1;
						statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
						condition = "true";
						modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside","isNotSwimming"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage
						{
							displayName = "$STR_ace_medical_Bandage";
							distance = 2.0;
							condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing
						{
							displayName = "$STR_ace_medical_Actions_FieldDressing";
							distance = 5.0;
							condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_PackingBandage";
							condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						};
						class ElasticBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_ElasticBandage";
							condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class QuikClot: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_QuikClot";
							condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class Tourniquet: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Tourniquet";
							condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						};
						class Morphine: fieldDressing
						{
							displayName = "$STR_ace_medical_Inject_Morphine";
							condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Adenosine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Atropine";
							condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Atropine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Atropine";
							condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Epinephrine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Epinephrine";
							condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Blood4_1000";
							condition = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
						};
						class BloodIV_500: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_500";
							condition = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV_250: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_250";
							condition = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_1000";
							condition = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_500: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_500";
							condition = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_250: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_250";
							condition = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_1000";
							condition = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_500: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_500";
							condition = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_250: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_250";
							condition = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class RemoveTourniquet: Tourniquet
						{
							displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
							condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
					};
					class ACE_LegRight
					{
						displayName = "$STR_ace_interaction_LegRight";
						runOnHover = 1;
						statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
						condition = "true";
						modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside","isNotSwimming"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage
						{
							displayName = "$STR_ace_medical_Bandage";
							distance = 2.0;
							condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing
						{
							displayName = "$STR_ace_medical_Actions_FieldDressing";
							distance = 5.0;
							condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_PackingBandage";
							condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						};
						class ElasticBandage: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_ElasticBandage";
							condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class QuikClot: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_QuikClot";
							condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class Tourniquet: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Tourniquet";
							condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						};
						class Morphine: fieldDressing
						{
							displayName = "$STR_ace_medical_Inject_Morphine";
							condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Adenosine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Atropine";
							condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						};
						class Atropine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Atropine";
							condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class Epinephrine: Morphine
						{
							displayName = "$STR_ace_medical_Inject_Epinephrine";
							condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV: fieldDressing
						{
							displayName = "$STR_ace_medical_Actions_Blood4_1000";
							condition = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
						};
						class BloodIV_500: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_500";
							condition = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class BloodIV_250: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Blood4_250";
							condition = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_1000";
							condition = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_500: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_500";
							condition = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class PlasmaIV_250: PlasmaIV
						{
							displayName = "$STR_ace_medical_Actions_Plasma4_250";
							condition = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV: BloodIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_1000";
							condition = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_500: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_500";
							condition = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class SalineIV_250: SalineIV
						{
							displayName = "$STR_ace_medical_Actions_Saline4_250";
							condition = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
						class RemoveTourniquet: Tourniquet
						{
							displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
							condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside","isNotSwimming"};
						};
					};
				};
				class ace_medical_loadPatient
				{
					displayName = "$STR_ace_medical_LoadPatient";
					distance = 5;
					condition = "_target getVariable [""ACE_isUnconscious"",false] && {alive _target} && {vehicle _target == _target}";
					statement = "[_player,_target] call ace_medical_fnc_actionLoadUnit";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotDragging","isNotCarrying","isNotSwimming"};
					insertChildren = "call ace_medical_fnc_addLoadPatientActions";
				};
				class ace_medical_UnLoadPatient
				{
					displayName = "$STR_ace_medical_UnloadPatient";
					distance = 5;
					condition = "_target getVariable [""ACE_isUnconscious"",false] && {alive _target} && {vehicle _target != _target} && {vehicle _player == _player}";
					statement = "[_player,_target] call ace_medical_fnc_actionUnloadUnit";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotDragging","isNotCarrying","isNotInside","isNotSwimming"};
				};
			};
		};
	};
	class SoldierWB: CAManBase{};
	class SoldierEB: CAManBase{};
	class SoldierGB: CAManBase{};
	class B_Soldier_base_F: SoldierWB{};
	class B_Soldier_04_f: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class B_Soldier_05_f: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class I_Soldier_base_F: SoldierGB{};
	class I_Soldier_03_F: I_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class I_Soldier_04_F: I_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class O_Soldier_base_F: SoldierEB
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class O_Soldier_diver_base_F: O_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class O_Soldier_02_F: O_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class O_officer_F: O_Soldier_base_F
	{
		class HitPoints
		{
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	class MapBoard_altis_F;
	class ACE_bodyBagObject: MapBoard_altis_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		scope = 1;
		scopeCurator = 2;
		side = -1;
		model = "\z\ace\addons\apl\ace_bodybag.p3d";
		icon = "";
		displayName = "$STR_ace_medical_Bodybag_Display";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\ace\addons\apl\data\bodybag_co.paa"};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				distance = 5;
				condition = "true";
				statement = "";
				icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
				selection = "";
			};
		};
	};
	class Thing;
	class ACE_MedicalLitterBase: Thing
	{
		scope = 1;
		scopeCurator = 0;
		displayName = " ";
		destrType = "DestructNo";
		model = "\z\ace\addons\medical\data\littergeneric.p3d";
	};
	class ACE_MedicalLitter_clean: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_clean.p3d";
	};
	class ACE_MedicalLitter_bandage1: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_bandages1.p3d";
	};
	class ACE_MedicalLitter_bandage2: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_bandages2.p3d";
	};
	class ACE_MedicalLitter_bandage3: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_bandages3.p3d";
	};
	class ACE_MedicalLitter_packingBandage: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_packingBandage.p3d";
	};
	class ACE_MedicalLitter_gloves: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_gloves.p3d";
	};
	class ACE_MedicalLitter_adenosine: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_adenosine.p3d";
	};
	class ACE_MedicalLitter_atropine: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_atropine.p3d";
	};
	class ACE_MedicalLitter_epinephrine: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_epinephrine.p3d";
	};
	class ACE_MedicalLitter_morphine: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_morphine.p3d";
	};
	class ACE_MedicalLitter_QuickClot: ACE_MedicalLitterBase
	{
		model = "\z\ace\addons\medical\data\littergeneric_Quikclot.p3d";
	};
	class Item_Base_F;
	class ACE_fieldDressingItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Bandage_Basic_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 1;
			};
		};
	};
	class ACE_packingBandageItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Packing_Bandage_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 1;
			};
		};
	};
	class ACE_elasticBandageItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Bandage_Elastic_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 1;
			};
		};
	};
	class ACE_tourniquetItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Tourniquet_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 1;
			};
		};
	};
	class ACE_morphineItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Morphine_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 1;
			};
		};
	};
	class ACE_adenosineItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Adenosine_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_adenosine
			{
				name = "ACE_adenosine";
				count = 1;
			};
		};
	};
	class ACE_atropineItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Atropine_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_atropine
			{
				name = "ACE_atropine";
				count = 1;
			};
		};
	};
	class ACE_epinephrineItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Epinephrine_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 1;
			};
		};
	};
	class ACE_plasmaIVItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Plasma_IV";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_plasmaIV
			{
				name = "ACE_plasmaIV";
				count = 1;
			};
		};
	};
	class ACE_bloodIVItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Blood_IV";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 1;
			};
		};
	};
	class ACE_salineIVItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Saline_IV";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_salineIV
			{
				name = "ACE_salineIV";
				count = 1;
			};
		};
	};
	class ACE_quikClotItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_QuikClot_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 1;
			};
		};
	};
	class ACE_personalAidKitItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Aid_Kit_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
		};
	};
	class ACE_surgicalKitItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_SurgicalKit_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 1;
			};
		};
	};
	class ACE_bodyBagItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_medical_Bodybag_Display";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 1;
			};
		};
	};
	class ThingX;
	class ReammoBox_F: ThingX
	{
		class ACE_Actions;
	};
	class NATO_Box_Base: ReammoBox_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class ACE_medicalSupplyCrate: NATO_Box_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 1000;
		displayName = "$STR_ace_medical_medicalSupplyCrate";
		model = "\z\ace\addons\medical\data\ace_medcrate.p3d";
		author = "ElTyranos";
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 25;
			};
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 25;
			};
			class _xx_ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 15;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 15;
			};
			class _xx_ACE_bloodIV_250
			{
				name = "ACE_bloodIV_250";
				count = 15;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 10;
			};
		};
		class AnimationSources
		{
			class Cover
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
				minValue = 0;
				maxValue = 1;
			};
		};
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				selection = "cover_action";
				class ACE_OpenLid
				{
					displayName = "$STR_ace_medical_openLid";
					condition = "alive _target && {_target animationPhase 'Cover' < 0.5}";
					statement = "_target animate ['Cover',1]";
					showDisabled = 0;
					priority = -1;
				};
				class ACE_CloseLid
				{
					displayName = "$STR_ace_medical_closeLid";
					condition = "alive _target && {_target animationPhase 'Cover' >= 0.5}";
					statement = "_target animate ['Cover',0]";
					showDisabled = 0;
					priority = -1;
				};
			};
		};
	};
	class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate
	{
		displayName = "$STR_ace_medical_medicalSupplyCrate_advanced";
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 25;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 15;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_ACE_adenosine
			{
				name = "ACE_adenosine";
				count = 15;
			};
			class _xx_ACE_atropine
			{
				name = "ACE_atropine";
				count = 15;
			};
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 15;
			};
			class _xx_ACE_plasmaIV
			{
				name = "ACE_plasmaIV";
				count = 7;
			};
			class _xx_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 7;
			};
			class _xx_ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 7;
			};
			class _xx_ACE_salineIV
			{
				name = "ACE_salineIV";
				count = 7;
			};
			class _xx_ACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 7;
			};
			class _xx_ACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 7;
			};
			class _xx_ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 7;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 7;
			};
			class _xx_ACE_bloodIV_250
			{
				name = "ACE_bloodIV_250";
				count = 7;
			};
			class _xx_ACE_quikClot
			{
				name = "ACE_quikClot";
				count = 20;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 3;
			};
			class _xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 2;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 5;
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
	class FirstAidKit: ItemCore
	{
		type = 0;
		ace_arsenal_hide = 1;
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass = 4;
		};
	};
	class Medikit: ItemCore
	{
		type = 0;
		ace_arsenal_hide = 1;
		class ItemInfo: MedikitItem
		{
			mass = 60;
		};
	};
	class ACE_ItemCore;
	class ACE_fieldDressing: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		model = "\z\ace\addons\medical\data\bandage.p3d";
		picture = "\z\ace\addons\medical\ui\items\fieldDressing_x_ca.paa";
		displayName = "$STR_ace_medical_Bandage_Basic_Display";
		descriptionShort = "$STR_ace_medical_Bandage_Basic_Desc_Short";
		descriptionUse = "$STR_ace_medical_Bandage_Basic_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_packingBandage: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Packing_Bandage_Display";
		picture = "\z\ace\addons\medical\ui\items\packingBandage_x_ca.paa";
		model = "\z\ace\addons\medical\data\packingbandage.p3d";
		descriptionShort = "$STR_ace_medical_Packing_Bandage_Desc_Short";
		descriptionUse = "$STR_ace_medical_Packing_Bandage_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_elasticBandage: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Bandage_Elastic_Display";
		picture = "\z\ace\addons\medical\ui\items\elasticBandage_x_ca.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		descriptionShort = "$STR_ace_medical_Bandage_Elastic_Desc_Short";
		descriptionUse = "$STR_ace_medical_Bandage_Elastic_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_tourniquet: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Tourniquet_Display";
		picture = "\z\ace\addons\medical\ui\items\tourniquet_x_ca.paa";
		model = "\z\ace\addons\medical\data\tourniquet.p3d";
		descriptionShort = "$STR_ace_medical_Tourniquet_Desc_Short";
		descriptionUse = "$STR_ace_medical_Tourniquet_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_morphine: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Morphine_Display";
		picture = "\z\ace\addons\medical\ui\items\morphine_x_ca.paa";
		model = "\z\ace\addons\medical\data\morphine.p3d";
		descriptionShort = "$STR_ace_medical_Morphine_Desc_Short";
		descriptionUse = "$STR_ace_medical_Morphine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_adenosine: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Adenosine_Display";
		picture = "\z\ace\addons\medical\ui\items\adenosine_x_ca.paa";
		model = "\z\ace\addons\medical\data\adenosine.p3d";
		descriptionShort = "$STR_ace_medical_adenosine_Desc_Short";
		descriptionUse = "$STR_ace_medical_adenosine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_atropine: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Atropine_Display";
		picture = "\z\ace\addons\medical\ui\items\atropine_x_ca.paa";
		model = "\z\ace\addons\medical\data\atropine.p3d";
		descriptionShort = "$STR_ace_medical_Atropine_Desc_Short";
		descriptionUse = "$STR_ace_medical_Atropine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_epinephrine: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Epinephrine_Display";
		picture = "\z\ace\addons\medical\ui\items\epinephrine_x_ca.paa";
		model = "\z\ace\addons\medical\data\epinephrine.p3d";
		descriptionShort = "$STR_ace_medical_Epinephrine_Desc_Short";
		descriptionUse = "$STR_ace_medical_Epinephrine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_plasmaIV: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Plasma_IV";
		model = "\z\ace\addons\medical\data\IVBag_1000ml.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_plasma_1000ml_ca.paa"};
		picture = "\z\ace\addons\medical\ui\items\plasmaIV_x_ca.paa";
		descriptionShort = "$STR_ace_medical_Plasma_IV_Desc_Short";
		descriptionUse = "$STR_ace_medical_Plasma_IV_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
	class ACE_plasmaIV_500: ACE_plasmaIV
	{
		displayName = "$STR_ace_medical_Plasma_IV_500";
		model = "\z\ace\addons\medical\data\IVBag_500ml.p3d";
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_plasma_500ml_ca.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};
	class ACE_plasmaIV_250: ACE_plasmaIV
	{
		displayName = "$STR_ace_medical_Plasma_IV_250";
		model = "\z\ace\addons\medical\data\IVBag_250ml.p3d";
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_plasma_250ml_ca.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2.5;
		};
	};
	class ACE_bloodIV: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		model = "\z\ace\addons\medical\data\IVBag_1000ml.p3d";
		displayName = "$STR_ace_medical_Blood_IV";
		picture = "\z\ace\addons\medical\ui\items\bloodIV_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_blood_1000ml_ca.paa"};
		descriptionShort = "$STR_ace_medical_Blood_IV_Desc_Short";
		descriptionUse = "$STR_ace_medical_Blood_IV_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
	class ACE_bloodIV_500: ACE_bloodIV
	{
		displayName = "$STR_ace_medical_Blood_IV_500";
		model = "\z\ace\addons\medical\data\IVBag_500ml.p3d";
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_blood_500ml_ca.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};
	class ACE_bloodIV_250: ACE_bloodIV
	{
		displayName = "$STR_ace_medical_Blood_IV_250";
		model = "\z\ace\addons\medical\data\IVBag_250ml.p3d";
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_blood_250ml_ca.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2.5;
		};
	};
	class ACE_salineIV: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Saline_IV";
		model = "\z\ace\addons\medical\data\IVBag_1000ml.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_saline_1000ml_ca.paa"};
		picture = "\z\ace\addons\medical\ui\items\salineIV_x_ca.paa";
		descriptionShort = "$STR_ace_medical_Saline_IV_Desc_Short";
		descriptionUse = "$STR_ace_medical_Saline_IV_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
	class ACE_salineIV_500: ACE_salineIV
	{
		displayName = "$STR_ace_medical_Saline_IV_500";
		model = "\z\ace\addons\medical\data\IVBag_500ml.p3d";
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_saline_500ml_ca.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};
	class ACE_salineIV_250: ACE_salineIV
	{
		displayName = "$STR_ace_medical_Saline_IV_250";
		model = "\z\ace\addons\medical\data\IVBag_250ml.p3d";
		hiddenSelectionsTextures[] = {"\z\ace\addons\medical\data\IVBag_saline_250ml_ca.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2.5;
		};
	};
	class ACE_quikclot: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_QuikClot_Display";
		model = "\z\ace\addons\medical\data\QuikClot.p3d";
		picture = "\z\ace\addons\medical\ui\items\quickclot_x_ca.paa";
		descriptionShort = "$STR_ace_medical_QuikClot_Desc_Short";
		descriptionUse = "$STR_ace_medical_QuikClot_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ACE_personalAidKit: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Aid_Kit_Display";
		picture = "\z\ace\addons\medical\ui\items\personal_aid_kit_x_ca.paa";
		descriptionShort = "$STR_ace_medical_Aid_Kit_Desc_Short";
		descriptionUse = "$STR_ace_medical_Aid_Kit_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
	class ACE_surgicalKit: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_SurgicalKit_Display";
		model = "\z\ace\addons\medical\data\surgical_kit.p3d";
		picture = "\z\ace\addons\medical\ui\items\surgicalKit_x_ca.paa";
		descriptionShort = "$STR_ace_medical_SurgicalKit_Desc_Short";
		descriptionUse = "$STR_ace_medical_SurgicalKit_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 15;
		};
	};
	class ACE_bodyBag: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_medical_Bodybag_Display";
		model = "\z\ace\addons\medical\data\bodybagItem.p3d";
		picture = "\z\ace\addons\medical\ui\items\bodybag_x_ca.paa";
		descriptionShort = "$STR_ace_medical_Bodybag_Desc_Short";
		descriptionUse = "$STR_ace_medical_Bodybag_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 7;
		};
	};
};
class CfgSounds
{
	class ACE_heartbeat_fast_1
	{
		name = "ACE_heartbeat_fast_1";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\fast_1.wav","db+1",1};
		titles[] = {};
	};
	class ACE_heartbeat_fast_2
	{
		name = "ACE_heartbeat_fast_2";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\fast_2.wav","db+1",1};
		titles[] = {};
	};
	class ACE_heartbeat_fast_3
	{
		name = "ACE_heartbeat_fast_3";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\fast_3.wav","db+1",1};
		titles[] = {};
	};
	class ACE_heartbeat_norm_1
	{
		name = "ACE_heartbeat_norm_1";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\norm_1.wav","db+1",1};
		titles[] = {};
	};
	class ACE_heartbeat_norm_2
	{
		name = "ACE_heartbeat_norm_2";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\norm_2.wav","db+1",1};
		titles[] = {};
	};
	class ACE_heartbeat_slow_1
	{
		name = "ACE_heartbeat_slow_1";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\slow_1.wav","db+1",1};
		titles[] = {};
	};
	class ACE_heartbeat_slow_2
	{
		name = "ACE_heartbeat_slow_2";
		sound[] = {"\z\ace\addons\medical\sounds\heart_beats\slow_2.wav","db+1",1};
		titles[] = {};
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
		class ace_medical_isMedicControl: Title
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
					strings[] = {"$STR_3DEN_Attributes_Lock_Default_text","$STR_ace_medical_AssignMedicRoles_role_none","$STR_ace_medical_AssignMedicRoles_role_medic","$STR_ace_medical_AssignMedicRoles_role_doctorShort"};
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
					class ace_isMedic
					{
						property = "ace_isMedic";
						control = "ace_medical_isMedicControl";
						displayName = "$STR_ace_medical_AssignMedicRoles_role_DisplayName";
						tooltip = "$STR_ace_medical_Attributes_isMedic_Description";
						expression = "if (_value > -1) then {_this setVariable [""ace_medical_medicClass"", _value, true];};";
						typeName = "NUMBER";
						condition = "objectBrain";
						defaultValue = "-1";
					};
					class ace_isMedicalVehicle
					{
						property = "ace_isMedicalVehicle";
						value = 0;
						control = "CheckboxNumber";
						displayName = "$STR_ace_medical_AssignMedicVehicle_enabled_DisplayName";
						tooltip = "$STR_ace_medical_Attributes_isMedicalVehicle_Description";
						expression = "_this setVariable [""ace_medical_medicClass"",_value,true];";
						typeName = "NUMBER";
						condition = "objectVehicle";
						defaultValue = 0;
					};
					class ace_isMedicalFacility
					{
						property = "ace_isMedicalFacility";
						value = 0;
						control = "Checkbox";
						displayName = "$STR_ace_medical_AssignMedicalFacility_enabled_DisplayName";
						tooltip = "$STR_ace_medical_AssignMedicalFacility_enabled_Description";
						expression = "_this setVariable [""ace_medical_isMedicalFacility"",_value,true];";
						typeName = "BOOL";
						condition = "(1 - objectBrain) * (1 - objectVehicle)";
						defaultValue = "false";
					};
				};
			};
		};
	};
};
class ACE_Medical_Actions
{
	class Basic
	{
		class Bandage
		{
			displayName = "$STR_ace_medical_Bandage";
			displayNameProgress = "$STR_ace_medical_Bandaging";
			category = "bandage";
			treatmentLocations[] = {"All"};
			allowedSelections[] = {"All"};
			allowSelfTreatment = 1;
			requiredMedic = 0;
			treatmentTime = 5;
			treatmentTimeSelfCoef = 1;
			items[] = {{"ACE_fieldDressing","ACE_packingBandage","ACE_elasticBandage","ACE_quikclot"}};
			condition = "";
			patientStateCondition = 0;
			itemConsumed = 1;
			callbackSuccess = "ace_medical_fnc_treatmentAdvanced_bandage";
			callbackFailure = "";
			callbackProgress = "";
			animationPatient = "";
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
			animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
			animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[] = {{"All","_bloodLossOnSelection > 0",{{"ACE_MedicalLitterBase","ACE_MedicalLitter_bandage1","ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}},{"All","_bloodLossOnSelection <= 0",{"ACE_MedicalLitter_clean"}}};
		};
		class Morphine: Bandage
		{
			displayName = "$STR_ace_medical_Inject_Morphine";
			displayNameProgress = "$STR_ace_medical_Injecting_Morphine";
			allowedSelections[] = {"hand_l","hand_r","leg_l","leg_r"};
			allowSelfTreatment = 1;
			category = "medication";
			treatmentTime = 2;
			items[] = {"ACE_morphine"};
			callbackSuccess = "ace_medical_fnc_treatmentBasic_morphine";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {{"All","",{"ACE_MedicalLitter_morphine"}}};
		};
		class Epinephrine: Bandage
		{
			displayName = "$STR_ace_medical_Inject_Epinephrine";
			displayNameProgress = "$STR_ace_medical_Injecting_Epinephrine";
			allowedSelections[] = {"hand_l","hand_r","leg_l","leg_r"};
			allowSelfTreatment = 1;
			category = "medication";
			requiredMedic = "ace_medical_medicSetting_basicEpi";
			treatmentTime = 3;
			items[] = {"ACE_epinephrine"};
			callbackSuccess = "ace_medical_fnc_treatmentBasic_epipen";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {{"All","",{"ACE_MedicalLitter_epinephrine"}}};
			treatmentLocations[] = {"ace_medical_useLocation_basicEpi"};
		};
		class BloodIV: Bandage
		{
			displayName = "$STR_ace_medical_Transfuse_Blood";
			displayNameProgress = "$STR_ace_medical_Transfusing_Blood";
			allowedSelections[] = {"hand_l","hand_r","leg_l","leg_r"};
			allowSelfTreatment = 0;
			category = "advanced";
			requiredMedic = 1;
			treatmentTime = 20;
			items[] = {"ACE_bloodIV"};
			callbackSuccess = "ace_medical_fnc_treatmentIV";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {};
		};
		class BloodIV_500: BloodIV
		{
			category = "advanced";
			items[] = {"ACE_bloodIV_500"};
		};
		class BloodIV_250: BloodIV
		{
			category = "advanced";
			items[] = {"ACE_bloodIV_250"};
		};
		class BodyBag: Bandage
		{
			displayName = "$STR_ace_medical_PlaceInBodyBag";
			displayNameProgress = "$STR_ace_medical_PlacingInBodyBag";
			category = "advanced";
			treatmentLocations[] = {"All"};
			requiredMedic = 0;
			treatmentTime = 4;
			items[] = {"ACE_bodyBag"};
			condition = "!alive (_this select 1);";
			callbackSuccess = "ace_medical_fnc_actionPlaceInBodyBag";
			callbackFailure = "";
			callbackProgress = "";
			animationPatient = "";
			animationPatientUnconscious = "";
			itemConsumed = 1;
			litter[] = {};
		};
		class Diagnose: Bandage
		{
			displayName = "$STR_ace_medical_Actions_Diagnose";
			displayNameProgress = "$STR_ace_medical_Actions_Diagnosing";
			category = "examine";
			treatmentLocations[] = {"All"};
			allowedSelections[] = {"head","body"};
			requiredMedic = 0;
			treatmentTime = 1;
			items[] = {};
			callbackSuccess = "ace_medical_fnc_actionDiagnose";
			callbackFailure = "";
			callbackProgress = "";
			animationPatient = "";
			animationCaller = "";
			itemConsumed = 0;
			litter[] = {};
		};
		class CPR: Bandage
		{
			displayName = "$STR_ace_medical_Actions_CPR";
			displayNameProgress = "$STR_ace_medical_Actions_PerformingCPR";
			category = "advanced";
			treatmentLocations[] = {"All"};
			allowedSelections[] = {"body"};
			allowSelfTreatment = 0;
			requiredMedic = 0;
			treatmentTime = 15;
			items[] = {};
			condition = "!([(_this select 1)] call ace_common_fnc_isAwake) && ace_medical_enableRevive>0";
			callbackSuccess = "ace_medical_fnc_treatmentAdvanced_CPR";
			callbackFailure = "";
			callbackProgress = "!([((_this select 0) select 1)] call ace_common_fnc_isAwake)";
			animationPatient = "";
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
			animationCaller = "AinvPknlMstpSlayWnonDnon_medic";
			animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
			animationCallerSelf = "";
			animationCallerSelfProne = "";
			itemConsumed = 0;
			litter[] = {};
		};
	};
	class Advanced
	{
		class FieldDressing
		{
			displayName = "$STR_ace_medical_Actions_FieldDressing";
			displayNameProgress = "$STR_ace_medical_Bandaging";
			category = "bandage";
			treatmentLocations[] = {"All"};
			allowedSelections[] = {"All"};
			allowSelfTreatment = 1;
			requiredMedic = 0;
			treatmentTime = 8;
			items[] = {"ACE_fieldDressing"};
			condition = "";
			patientStateCondition = 0;
			callbackSuccess = "ace_medical_fnc_treatmentAdvanced_bandage";
			callbackFailure = "";
			callbackProgress = "";
			itemConsumed = 1;
			animationPatient = "";
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
			animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
			animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[] = {{"All","_bloodLossOnSelection > 0",{{"ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}},{"All","_bloodLossOnSelection <= 0",{"ACE_MedicalLitter_clean"}}};
		};
		class PackingBandage: fieldDressing
		{
			displayName = "$STR_ace_medical_Actions_PackingBandage";
			items[] = {"ACE_packingBandage"};
			litter[] = {{"All","",{"ACE_MedicalLitter_packingBandage"}},{"All","_bloodLossOnSelection > 0",{{"ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}},{"All","_bloodLossOnSelection <= 0",{"ACE_MedicalLitter_clean"}}};
		};
		class ElasticBandage: fieldDressing
		{
			displayName = "$STR_ace_medical_Actions_ElasticBandage";
			items[] = {"ACE_elasticBandage"};
		};
		class QuikClot: fieldDressing
		{
			displayName = "$STR_ace_medical_Actions_QuikClot";
			items[] = {"ACE_quikclot"};
			litter[] = {{"All","",{"ACE_MedicalLitter_QuickClot"}},{"All","_bloodLossOnSelection > 0",{{"ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}},{"All","_bloodLossOnSelection <= 0",{"ACE_MedicalLitter_clean"}}};
		};
		class Tourniquet: fieldDressing
		{
			displayName = "$STR_ace_medical_Apply_Tourniquet";
			displayNameProgress = "$STR_ace_medical_Applying_Tourniquet";
			allowedSelections[] = {"hand_l","hand_r","leg_l","leg_r"};
			items[] = {"ACE_tourniquet"};
			treatmentTime = 4;
			callbackSuccess = "ace_medical_fnc_treatmentTourniquet";
			condition = "!([_this select 1,_this select 2] call ace_medical_fnc_hasTourniquetAppliedTo)";
			litter[] = {};
		};
		class Morphine: fieldDressing
		{
			displayName = "$STR_ace_medical_Inject_Morphine";
			displayNameProgress = "$STR_ace_medical_Injecting_Morphine";
			allowedSelections[] = {"hand_l","hand_r","leg_l","leg_r"};
			category = "medication";
			items[] = {"ACE_morphine"};
			treatmentTime = 3;
			callbackSuccess = "ace_medical_fnc_treatmentAdvanced_medication";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {{"All","",{"ACE_MedicalLitter_morphine"}}};
		};
		class Adenosine: Morphine
		{
			displayName = "$STR_ace_medical_Inject_Adenosine";
			displayNameProgress = "$STR_ace_medical_Injecting_Adenosine";
			items[] = {"ACE_adenosine"};
			litter[] = {{"All","",{"ACE_MedicalLitter_adenosine"}}};
		};
		class Atropine: Morphine
		{
			displayName = "$STR_ace_medical_Inject_Atropine";
			displayNameProgress = "$STR_ace_medical_Injecting_Atropine";
			items[] = {"ACE_atropine"};
			litter[] = {{"All","",{"ACE_MedicalLitter_atropine"}}};
		};
		class Epinephrine: Morphine
		{
			displayName = "$STR_ace_medical_Inject_Epinephrine";
			displayNameProgress = "$STR_ace_medical_Injecting_Epinephrine";
			items[] = {"ACE_epinephrine"};
			litter[] = {{"All","",{"ACE_MedicalLitter_epinephrine"}}};
		};
		class BloodIV: fieldDressing
		{
			displayName = "$STR_ace_medical_Actions_Blood4_1000";
			displayNameProgress = "$STR_ace_medical_Transfusing_Blood";
			allowedSelections[] = {"hand_l","hand_r","leg_l","leg_r"};
			allowSelfTreatment = 0;
			category = "advanced";
			items[] = {"ACE_bloodIV"};
			requiredMedic = 1;
			treatmentTime = 7;
			callbackSuccess = "ace_medical_fnc_treatmentIV";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {};
		};
		class BloodIV_500: BloodIV
		{
			displayName = "$STR_ace_medical_Actions_Blood4_500";
			items[] = {"ACE_bloodIV_500"};
		};
		class BloodIV_250: BloodIV
		{
			displayName = "$STR_ace_medical_Actions_Blood4_250";
			items[] = {"ACE_bloodIV_250"};
		};
		class PlasmaIV: BloodIV
		{
			displayName = "$STR_ace_medical_Actions_Plasma4_1000";
			displayNameProgress = "$STR_ace_medical_Transfusing_Plasma";
			items[] = {"ACE_plasmaIV"};
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
		};
		class PlasmaIV_500: PlasmaIV
		{
			displayName = "$STR_ace_medical_Actions_Plasma4_500";
			items[] = {"ACE_plasmaIV_500"};
		};
		class PlasmaIV_250: PlasmaIV
		{
			displayName = "$STR_ace_medical_Actions_Plasma4_250";
			items[] = {"ACE_plasmaIV_250"};
		};
		class SalineIV: BloodIV
		{
			displayName = "$STR_ace_medical_Actions_Saline4_1000";
			displayNameProgress = "$STR_ace_medical_Transfusing_Saline";
			items[] = {"ACE_salineIV"};
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
		};
		class SalineIV_500: SalineIV
		{
			displayName = "$STR_ace_medical_Actions_Saline4_500";
			items[] = {"ACE_salineIV_500"};
		};
		class SalineIV_250: SalineIV
		{
			displayName = "$STR_ace_medical_Actions_Saline4_250";
			items[] = {"ACE_salineIV_250"};
		};
		class SurgicalKit: fieldDressing
		{
			displayName = "$STR_ace_medical_Use_SurgicalKit";
			displayNameProgress = "$STR_ace_medical_Stitching";
			category = "advanced";
			items[] = {"ACE_surgicalKit"};
			treatmentLocations[] = {"ace_medical_useLocation_SurgicalKit"};
			allowSelfTreatment = 0;
			requiredMedic = "ace_medical_medicSetting_SurgicalKit";
			patientStateCondition = "ace_medical_useCondition_SurgicalKit";
			treatmentTime = "(count ((_this select 1) getVariable ['ACE_Medical_bandagedWounds', []]) * 5)";
			callbackSuccess = "";
			callbackProgress = "ace_medical_fnc_treatmentAdvanced_surgicalKit_onProgress";
			itemConsumed = "ace_medical_consumeItem_SurgicalKit";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {{"All","",{"ACE_MedicalLitter_gloves"}}};
		};
		class PersonalAidKit: fieldDressing
		{
			displayName = "$STR_ace_medical_Use_Aid_Kit";
			displayNameProgress = "$STR_ace_medical_TreatmentAction";
			category = "advanced";
			items[] = {"ACE_personalAidKit"};
			treatmentLocations[] = {"ace_medical_useLocation_PAK"};
			allowSelfTreatment = 0;
			requiredMedic = "ace_medical_medicSetting_PAK";
			patientStateCondition = "ace_medical_useCondition_PAK";
			treatmentTime = "(_this select 1) call ace_medical_fnc_treatmentAdvanced_fullHealTreatmentTime";
			callbackSuccess = "ace_medical_fnc_treatmentAdvanced_fullHeal";
			itemConsumed = "ace_medical_consumeItem_PAK";
			animationPatient = "";
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
			animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
			animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[] = {{"All","",{"ACE_MedicalLitter_gloves"}},{"All","_bloodLossOnSelection > 0",{{"ACE_MedicalLitterBase","ACE_MedicalLitter_bandage1","ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}},{"All","_bloodLossOnSelection > 0",{{"ACE_MedicalLitterBase","ACE_MedicalLitter_bandage1","ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}},{"All","_bloodLossOnSelection <= 0",{"ACE_MedicalLitter_clean"}}};
		};
		class CheckPulse: fieldDressing
		{
			displayName = "$STR_ace_medical_Actions_CheckPulse";
			displayNameProgress = "$STR_ace_medical_Check_Pulse_Content";
			category = "examine";
			treatmentLocations[] = {"All"};
			requiredMedic = 0;
			treatmentTime = 2;
			items[] = {};
			callbackSuccess = "ace_medical_fnc_actionCheckPulse";
			callbackFailure = "";
			callbackProgress = "";
			animationPatient = "";
			animationCaller = "";
			animationCallerProne = "";
			animationCallerSelfProne = "";
			itemConsumed = 0;
			litter[] = {};
		};
		class CheckBloodPressure: CheckPulse
		{
			displayName = "$STR_ace_medical_Actions_CheckBloodPressure";
			callbackSuccess = "ace_medical_fnc_actionCheckBloodPressure";
			displayNameProgress = "$STR_ace_medical_Check_Bloodpressure_Content";
		};
		class CheckResponse: CheckPulse
		{
			displayName = "$STR_ace_medical_Check_Response";
			callbackSuccess = "ace_medical_fnc_actionCheckResponse";
			displayNameProgress = "$STR_ace_medical_Check_Response_Content";
			allowSelfTreatment = 0;
		};
		class RemoveTourniquet: Tourniquet
		{
			displayName = "$STR_ace_medical_Actions_RemoveTourniquet";
			items[] = {};
			treatmentTime = 2.5;
			callbackSuccess = "ace_medical_fnc_actionRemoveTourniquet";
			condition = "[_this select 1,_this select 2] call ace_medical_fnc_hasTourniquetAppliedTo";
			displayNameProgress = "$STR_ace_medical_RemovingTourniquet";
			litter[] = {};
		};
		class CPR: fieldDressing
		{
			displayName = "$STR_ace_medical_Actions_CPR";
			displayNameProgress = "$STR_ace_medical_Actions_PerformingCPR";
			category = "advanced";
			treatmentLocations[] = {"All"};
			allowedSelections[] = {"body"};
			allowSelfTreatment = 0;
			requiredMedic = 0;
			treatmentTime = 15;
			items[] = {};
			condition = "!([(_this select 1)] call ace_common_fnc_isAwake)";
			callbackSuccess = "ace_medical_fnc_treatmentAdvanced_CPR";
			callbackFailure = "";
			callbackProgress = "!([((_this select 0) select 1)] call ace_common_fnc_isAwake)";
			animationPatient = "";
			animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
			animationCaller = "AinvPknlMstpSlayWnonDnon_medic";
			animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
			animationCallerSelf = "";
			animationCallerSelfProne = "";
			itemConsumed = 0;
			litter[] = {};
		};
		class BodyBag: fieldDressing
		{
			displayName = "$STR_ace_medical_PlaceInBodyBag";
			displayNameProgress = "$STR_ace_medical_PlacingInBodyBag";
			category = "advanced";
			treatmentLocations[] = {"All"};
			allowSelfTreatment = 0;
			requiredMedic = 0;
			treatmentTime = 15;
			items[] = {"ACE_bodyBag"};
			condition = "!alive (_this select 1);";
			callbackSuccess = "ace_medical_fnc_actionPlaceInBodyBag";
			callbackFailure = "";
			callbackProgress = "";
			animationPatient = "";
			animationPatientUnconscious = "";
			itemConsumed = 1;
			litter[] = {};
		};
	};
};
class ACE_Medical_Advanced
{
	class Injuries
	{
		class wounds
		{
			class Abrasion
			{
				name = "$STR_ace_medical_Wounds_Abrasion";
				selections[] = {"All"};
				bleedingRate = 0.0001;
				pain = 0.01;
				causes[] = {"falling","ropeburn","vehiclecrash","unknown"};
				minDamage = 0.01;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_Abrasion_Minor";
					minDamage = 0.01;
					maxDamage = 0.2;
					bleedingRate = 0.0001;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_Abrasion_Medium";
					minDamage = 0.2;
					maxDamage = 0.3;
					bleedingRate = 0.00015;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_Abrasion_Large";
					minDamage = 0.3;
					maxDamage = 0.5;
					bleedingRate = 0.0002;
				};
			};
			class Avulsions
			{
				name = "$STR_ace_medical_Wounds_Avulsion";
				selections[] = {"All"};
				bleedingRate = 0.01;
				pain = 0.3;
				causes[] = {"explosive","vehiclecrash","grenade","shell","bullet","backblast","bite"};
				minDamage = 0.2;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_Avulsion_Minor";
					minDamage = 0.2;
					maxDamage = 0.3;
					bleedingRate = 0.01;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_Avulsion_Medium";
					minDamage = 0.3;
					maxDamage = 0.6;
					bleedingRate = 0.02;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_Avulsion_Large";
					minDamage = 0.5;
					bleedingRate = 0.05;
				};
			};
			class Contusion
			{
				name = "$STR_ace_medical_Wounds_Contusion";
				selections[] = {"All"};
				bleedingRate = 0.0;
				pain = 0.05;
				causes[] = {"bullet","backblast","punch","vehiclecrash","falling"};
				minDamage = 0.01;
				maxDamage = 0.1;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_Contusion_Minor";
					minDamage = 0.01;
					maxDamage = 0.1;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_Contusion_Medium";
					minDamage = 0.1;
					maxDamage = 0.15;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_Contusion_Large";
					minDamage = 0.15;
					maxDamage = 0.2;
				};
			};
			class CrushWound
			{
				name = "$STR_ace_medical_Wounds_Crush";
				selections[] = {"All"};
				bleedingRate = 0.01;
				pain = 0.1;
				causes[] = {"falling","vehiclecrash","punch","unknown"};
				minDamage = 0.1;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_Crush_Minor";
					minDamage = 0.1;
					maxDamage = 0.45;
					bleedingRate = 0.005;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_Crush_Medium";
					minDamage = 0.4;
					maxDamage = 0.7;
					bleedingRate = 0.007;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_Crush_Large";
					minDamage = 0.6;
					bleedingRate = 0.0095;
				};
			};
			class Cut
			{
				name = "$STR_ace_medical_Wounds_Cut";
				selections[] = {"All"};
				bleedingRate = 0.01;
				pain = 0.075;
				causes[] = {"vehiclecrash","grenade","explosive","shell","backblast","stab","unknown"};
				minDamage = 0.1;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_Cut_Minor";
					minDamage = 0.1;
					maxDamage = 0.3;
					bleedingRate = 0.005;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_Cut_Medium";
					minDamage = 0.3;
					maxDamage = 0.65;
					bleedingRate = 0.02;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_Cut_Large";
					minDamage = 0.65;
					bleedingRate = 0.05;
				};
			};
			class Laceration
			{
				name = "$STR_ace_medical_Wounds_Laceration";
				selections[] = {"All"};
				bleedingRate = 0.01;
				pain = 0.075;
				causes[] = {"vehiclecrash","punch"};
				minDamage = 0.01;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_Laceration_Minor";
					minDamage = 0.1;
					maxDamage = 0.5;
					bleedingRate = 0.005;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_Laceration_Medium";
					minDamage = 0.5;
					maxDamage = 0.7;
					bleedingRate = 0.01;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_Laceration_Large";
					minDamage = 0.7;
					bleedingRate = 0.03;
				};
			};
			class velocityWound
			{
				name = "$STR_ace_medical_Wounds_VelocityWound";
				selections[] = {"All"};
				bleedingRate = 0.01;
				pain = 0.2;
				causes[] = {"bullet","grenade","explosive","shell","unknown"};
				minDamage = 0.15;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_VelocityWound_Minor";
					minDamage = 0.15;
					maxDamage = 0.3;
					bleedingRate = 0.025;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_VelocityWound_Medium";
					minDamage = 0.3;
					maxDamage = 0.75;
					bleedingRate = 0.05;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_VelocityWound_Large";
					minDamage = 0.75;
					bleedingRate = 0.1;
				};
			};
			class punctureWound
			{
				name = "$STR_ace_medical_Wounds_PunctureWound";
				selections[] = {"All"};
				bleedingRate = 0.01;
				pain = 0.075;
				causes[] = {"stab","grenade"};
				minDamage = 0.01;
				class Minor
				{
					name = "$STR_ace_medical_Wounds_PunctureWound_Minor";
					minDamage = 0.01;
					maxDamage = 0.5;
					bleedingRate = 0.01;
				};
				class Medium
				{
					name = "$STR_ace_medical_Wounds_PunctureWound_Medium";
					minDamage = 0.5;
					maxDamage = 0.75;
					bleedingRate = 0.03;
				};
				class Large
				{
					name = "$STR_ace_medical_Wounds_PunctureWound_Large";
					minDamage = 0.65;
					bleedingRate = 0.08;
				};
			};
		};
		class fractures
		{
			class Femur
			{
				name = "$STR_ace_medical_Wounds_Femur";
				selections[] = {"Head","Torso"};
				pain = 0.2;
				causes[] = {"Bullet","VehicleCrash","Backblast","Explosive","Shell","Grenade"};
				minDamage = 0.5;
			};
		};
		class damageTypes
		{
			thresholds[] = {{0.1,1}};
			selectionSpecific = 1;
			lethalDamage = 0.01;
			class bullet
			{
				thresholds[] = {{0.1,1}};
				selectionSpecific = 1;
			};
			class grenade
			{
				thresholds[] = {{0.1,3},{0,1}};
				selectionSpecific = 0;
			};
			class explosive
			{
				thresholds[] = {{1,6},{0.1,4},{0,1}};
				selectionSpecific = 0;
			};
			class shell
			{
				thresholds[] = {{1,7},{0.1,5},{0,1}};
				selectionSpecific = 0;
			};
			class vehiclecrash
			{
				thresholds[] = {{0.25,5},{0.05,1}};
				selectionSpecific = 0;
				lethalDamage = 0.2;
			};
			class backblast
			{
				thresholds[] = {{1,6},{0.55,5},{0,2}};
				selectionSpecific = 0;
				lethalDamage = 1;
			};
			class stab
			{
				thresholds[] = {{0.1,1}};
				selectionSpecific = 1;
			};
			class punch
			{
				thresholds[] = {{0.1,1}};
				selectionSpecific = 1;
			};
			class falling
			{
				thresholds[] = {{0.1,1}};
				selectionSpecific = 1;
				lethalDamage = 0.4;
			};
			class ropeburn
			{
				thresholds[] = {{0.1,1}};
				selectionSpecific = 1;
			};
			class unknown
			{
				thresholds[] = {{0.1,1}};
			};
		};
	};
	class Treatment
	{
		class Bandaging
		{
			class Bandage
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class FieldDressing
			{
				effectiveness = 1;
				reopeningChance = 0.1;
				reopeningMinDelay = 120;
				reopeningMaxDelay = 200;
				class Abrasion
				{
					effectiveness = 3;
					reopeningChance = 0.3;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 1000;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness = 3;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness = 2.5;
					reopeningChance = 0.7;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.9;
				};
				class Avulsions: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 120;
					reopeningMaxDelay = 200;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness = 1;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness = 0.9;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness = 0.75;
				};
				class Contusion: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion{};
				class ContusionMedium: Contusion{};
				class ContusionLarge: Contusion{};
				class CrushWound: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 20;
					reopeningMaxDelay = 1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness = 1;
					reopeningChance = 0.2;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness = 0.7;
					reopeningChance = 0.3;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness = 0.6;
					reopeningChance = 0.4;
				};
				class Cut: Abrasion
				{
					effectiveness = 4;
					reopeningChance = 0.1;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 1000;
				};
				class CutMinor: Cut
				{
					effectiveness = 4;
					reopeningChance = 0.1;
				};
				class CutMedium: Cut
				{
					effectiveness = 3;
					reopeningChance = 0.3;
				};
				class CutLarge: Cut
				{
					effectiveness = 1;
					reopeningChance = 0.5;
				};
				class Laceration: Abrasion
				{
					effectiveness = 0.95;
					reopeningChance = 0.3;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 800;
				};
				class LacerationMinor: Laceration
				{
					effectiveness = 0.95;
					reopeningChance = 0.3;
				};
				class LacerationMedium: Laceration
				{
					effectiveness = 0.7;
					reopeningChance = 0.5;
				};
				class LacerationLarge: Laceration
				{
					effectiveness = 0.5;
					reopeningChance = 0.6;
				};
				class velocityWound: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.7;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 500;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness = 1.5;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness = 1;
				};
				class punctureWound: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.5;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 850;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness = 2;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness = 1.3;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness = 0.9;
				};
			};
			class PackingBandage: fieldDressing
			{
				class Abrasion
				{
					effectiveness = 3;
					reopeningChance = 0.6;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness = 3;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness = 2.5;
					reopeningChance = 0.9;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 1;
				};
				class Avulsions: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.7;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 1600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness = 1;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness = 0.9;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness = 0.75;
				};
				class Contusion: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion{};
				class ContusionMedium: Contusion{};
				class ContusionLarge: Contusion{};
				class CrushWound: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness = 1;
					reopeningChance = 0.6;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness = 0.7;
					reopeningChance = 0.7;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness = 0.6;
					reopeningChance = 0.8;
				};
				class Cut: Abrasion
				{
					effectiveness = 4;
					reopeningChance = 0.4;
					reopeningMinDelay = 700;
					reopeningMaxDelay = 1000;
				};
				class CutMinor: Cut
				{
					effectiveness = 4;
					reopeningChance = 0.6;
				};
				class CutMedium: Cut
				{
					effectiveness = 3;
					reopeningChance = 0.7;
				};
				class CutLarge: Cut
				{
					effectiveness = 1;
					reopeningChance = 0.8;
				};
				class Laceration: Abrasion
				{
					effectiveness = 0.95;
					reopeningChance = 0.65;
					reopeningMinDelay = 500;
					reopeningMaxDelay = 2000;
				};
				class LacerationMinor: Laceration
				{
					effectiveness = 0.95;
					reopeningChance = 0.65;
				};
				class LacerationMedium: Laceration
				{
					effectiveness = 0.7;
					reopeningChance = 0.8;
				};
				class LacerationLarge: Laceration
				{
					effectiveness = 0.5;
					reopeningChance = 0.9;
				};
				class velocityWound: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 1;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 2000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness = 1.5;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness = 1;
				};
				class punctureWound: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 1;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 3000;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness = 2;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness = 1.3;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness = 0.9;
				};
			};
			class ElasticBandage: fieldDressing
			{
				class Abrasion
				{
					effectiveness = 4;
					reopeningChance = 0.6;
					reopeningMinDelay = 80;
					reopeningMaxDelay = 150;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness = 4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness = 3;
					reopeningChance = 0.9;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness = 2.5;
					reopeningChance = 1;
				};
				class Avulsions: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.7;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 160;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness = 2;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness = 1.4;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness = 1;
				};
				class Contusion: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion{};
				class ContusionMedium: Contusion{};
				class ContusionLarge: Contusion{};
				class CrushWound: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.5;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 100;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness = 2;
					reopeningChance = 0.6;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness = 1.7;
					reopeningChance = 0.7;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness = 1.6;
					reopeningChance = 0.8;
				};
				class Cut: Abrasion
				{
					effectiveness = 5;
					reopeningChance = 0.4;
					reopeningMinDelay = 70;
					reopeningMaxDelay = 100;
				};
				class CutMinor: Cut
				{
					effectiveness = 5;
					reopeningChance = 0.6;
				};
				class CutMedium: Cut
				{
					effectiveness = 3.5;
					reopeningChance = 0.7;
				};
				class CutLarge: Cut
				{
					effectiveness = 2;
					reopeningChance = 0.8;
				};
				class Laceration: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.65;
					reopeningMinDelay = 50;
					reopeningMaxDelay = 200;
				};
				class LacerationMinor: Laceration
				{
					effectiveness = 2;
					reopeningChance = 0.65;
				};
				class LacerationMedium: Laceration
				{
					effectiveness = 1.5;
					reopeningChance = 0.8;
				};
				class LacerationLarge: Laceration
				{
					effectiveness = 1;
					reopeningChance = 0.9;
				};
				class velocityWound: Abrasion
				{
					effectiveness = 2.2;
					reopeningChance = 1;
					reopeningMinDelay = 80;
					reopeningMaxDelay = 200;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness = 2.2;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness = 1.75;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness = 1.5;
				};
				class punctureWound: Abrasion
				{
					effectiveness = 2.5;
					reopeningChance = 1;
					reopeningMinDelay = 100;
					reopeningMaxDelay = 300;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness = 2.5;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness = 2;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness = 1.5;
				};
			};
			class QuikClot: fieldDressing
			{
				class Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness = 2;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.4;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness = 0.7;
					reopeningChance = 0.5;
				};
				class Avulsions: Abrasion
				{
					effectiveness = 0.7;
					reopeningChance = 0.2;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 1600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness = 0.7;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness = 0.65;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness = 0.5;
				};
				class Contusion: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion{};
				class ContusionMedium: Contusion{};
				class ContusionLarge: Contusion{};
				class CrushWound: Abrasion
				{
					effectiveness = 0.6;
					reopeningChance = 0.5;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness = 0.6;
					reopeningChance = 0.3;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness = 0.5;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness = 0.4;
				};
				class Cut: Abrasion
				{
					effectiveness = 2;
					reopeningChance = 0.2;
					reopeningMinDelay = 700;
					reopeningMaxDelay = 1000;
				};
				class CutMinor: Cut
				{
					effectiveness = 2;
					reopeningChance = 0.3;
				};
				class CutMedium: Cut
				{
					effectiveness = 1;
				};
				class CutLarge: Cut
				{
					effectiveness = 0.6;
				};
				class Laceration: Abrasion
				{
					effectiveness = 0.7;
					reopeningChance = 0.4;
					reopeningMinDelay = 500;
					reopeningMaxDelay = 2000;
				};
				class LacerationMinor: Laceration
				{
					effectiveness = 0.7;
					reopeningChance = 0.4;
				};
				class LacerationMedium: Laceration
				{
					effectiveness = 0.7;
				};
				class LacerationLarge: Laceration
				{
					effectiveness = 0.5;
				};
				class velocityWound: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 2000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness = 1;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness = 0.75;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness = 0.5;
				};
				class punctureWound: Abrasion
				{
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 3000;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness = 1;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness = 0.7;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness = 0.4;
				};
			};
		};
		class Medication
		{
			painReduce = 0;
			hrIncreaseLow[] = {0,0,0};
			hrIncreaseNormal[] = {0,0,0};
			hrIncreaseHigh[] = {0,0,0};
			hrCallback = "";
			timeInSystem = 120;
			maxDose = 4;
			onOverDose = "";
			viscosityChange = 0;
			class Morphine
			{
				painReduce = 15;
				hrIncreaseLow[] = {-10,-20,35};
				hrIncreaseNormal[] = {-10,-30,35};
				hrIncreaseHigh[] = {-10,-35,50};
				timeInSystem = 900;
				maxDose = 4;
				inCompatableMedication[] = {};
				viscosityChange = -10;
			};
			class Epinephrine
			{
				painReduce = 0;
				hrIncreaseLow[] = {10,20,15};
				hrIncreaseNormal[] = {10,50,10};
				hrIncreaseHigh[] = {10,40,5};
				timeInSystem = 120;
				maxDose = 10;
				inCompatableMedication[] = {};
			};
			class Adenosine
			{
				painReduce = 0;
				hrIncreaseLow[] = {-7,-10,15};
				hrIncreaseNormal[] = {-15,-30,20};
				hrIncreaseHigh[] = {-15,-35,10};
				timeInSystem = 120;
				maxDose = 6;
				inCompatableMedication[] = {};
			};
			class Atropine
			{
				painReduce = 0;
				hrIncreaseLow[] = {-2,-5,15};
				hrIncreaseNormal[] = {-10,-15,20};
				hrIncreaseHigh[] = {-5,-20,10};
				timeInSystem = 120;
				maxDose = 6;
				inCompatableMedication[] = {};
			};
			class PainKillers
			{
				painReduce = 0.7;
				timeInSystem = 120;
				maxDose = 10;
				inCompatableMedication[] = {};
				viscosityChange = 5;
			};
		};
		class IV
		{
			volume = 1000;
			ratio[] = {};
			type = "Blood";
			class BloodIV
			{
				volume = 1000;
				ratio[] = {"Plasma",1};
			};
			class BloodIV_500: BloodIV
			{
				volume = 500;
			};
			class BloodIV_250: BloodIV
			{
				volume = 250;
			};
			class PlasmaIV: BloodIV
			{
				volume = 1000;
				ratio[] = {"Blood",1};
				type = "Plasma";
			};
			class PlasmaIV_500: PlasmaIV
			{
				volume = 500;
			};
			class PlasmaIV_250: PlasmaIV
			{
				volume = 250;
			};
			class SalineIV: BloodIV
			{
				volume = 1000;
				type = "Saline";
				ratio[] = {};
			};
			class SalineIV_500: SalineIV
			{
				volume = 500;
			};
			class SalineIV_250: SalineIV
			{
				volume = 250;
			};
		};
	};
};
class ACE_Settings
{
	class ace_medical_level
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_level_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_level_Description";
		value = 1;
		typeName = "SCALAR";
		values[] = {"Disabled","Basic","Advanced"};
	};
	class ace_medical_medicSetting
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_medicSetting_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_medicSetting_Description";
		value = 1;
		typeName = "SCALAR";
		values[] = {"Disabled","Normal","Advanced"};
	};
	class ace_medical_increaseTrainingInLocations
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_increaseTrainingInLocations_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_increaseTrainingInLocations_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_medical_enableFor
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_enableFor_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_enableFor_Description";
		value = 0;
		typeName = "SCALAR";
		values[] = {"Players only","Players and AI"};
	};
	class ace_medical_enableOverdosing
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_enableOverdosing_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_enableOverdosing_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_bleedingCoefficient
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_bleedingCoefficient_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_bleedingCoefficient_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,25,1,1};
	};
	class ace_medical_painCoefficient
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_painCoefficient_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_painCoefficient_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,25,1,1};
	};
	class ace_medical_enableAdvancedWounds
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_enableAdvancedWounds_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_enableAdvancedWounds_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_medical_enableVehicleCrashes
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_enableVehicleCrashes_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_enableVehicleCrashes_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_enableScreams
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_enableScreams_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_enableScreams_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_playerDamageThreshold
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_playerDamageThreshold_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_playerDamageThreshold_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,25,1,1};
	};
	class ace_medical_AIDamageThreshold
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_AIDamageThreshold_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_AIDamageThreshold_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,25,1,1};
	};
	class ace_medical_enableUnconsciousnessAI
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_enableUnconsciousnessAI_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_enableUnconsciousnessAI_Description";
		value = 1;
		typeName = "SCALAR";
		values[] = {"Disabled","50/50","Enabled"};
	};
	class ace_medical_remoteControlledAI
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_remoteControlledAI_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_remoteControlledAI_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_preventInstaDeath
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_preventInstaDeath_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_preventInstaDeath_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_medical_enableRevive
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_ReviveSettings_enableRevive_DisplayName";
		description = "$STR_ace_medical_ReviveSettings_enableRevive_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"Disabled","Players only","Players and AI"};
	};
	class ace_medical_maxReviveTime
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_ReviveSettings_maxReviveTime_DisplayName";
		description = "$STR_ace_medical_ReviveSettings_maxReviveTime_Description";
		typeName = "SCALAR";
		value = 120;
		sliderSettings[] = {0,3600,120,0};
	};
	class ace_medical_amountOfReviveLives
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_ReviveSettings_amountOfReviveLives_DisplayName";
		description = "$STR_ace_medical_ReviveSettings_amountOfReviveLives_Description";
		typeName = "SCALAR";
		value = -1;
		sliderSettings[] = {-1,25,-1,-1};
	};
	class ace_medical_allowLitterCreation
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_allowLitterCreation_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_allowLitterCreation_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_litterSimulationDetail
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_litterSimulationDetail";
		description = "$STR_ace_medical_litterSimulationDetail_Desc";
		typeName = "SCALAR";
		value = 3;
		values[] = {"Off","Low","Medium","High","Ultra"};
		_values[] = {0,50,100,1000,5000};
	};
	class ace_medical_litterCleanUpDelay
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_litterCleanUpDelay_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_litterCleanUpDelay_Description";
		typeName = "SCALAR";
		value = 0;
		sliderSettings[] = {-1,3600,0,0};
	};
	class ace_medical_medicSetting_basicEpi
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_BasicMedicalSettings_medicSetting_basicEpi_DisplayName";
		description = "$STR_ace_medical_BasicMedicalSettings_medicSetting_basicEpi_Description";
		typeName = "SCALAR";
		value = 1;
		values[] = {"Anyone","Medics only","Doctors only"};
	};
	class ace_medical_medicSetting_PAK
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_PAK_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_PAK_Description";
		typeName = "SCALAR";
		value = 1;
		values[] = {"Anyone","Medics only","Doctors only"};
	};
	class ace_medical_medicSetting_SurgicalKit
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_SurgicalKit_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_medicSetting_SurgicalKit_Description";
		typeName = "SCALAR";
		value = 1;
		values[] = {"Anyone","Medics only","Doctors only"};
	};
	class ace_medical_consumeItem_PAK
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_PAK_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_PAK_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"No","Yes"};
	};
	class ace_medical_consumeItem_SurgicalKit
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_SurgicalKit_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_consumeItem_SurgicalKit_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"No","Yes"};
	};
	class ace_medical_useLocation_basicEpi
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_BasicMedicalSettings_useLocation_basicEpi_DisplayName";
		description = "$STR_ace_medical_BasicMedicalSettings_useLocation_basicEpi_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_medical_AdvancedMedicalSettings_anywhere","$STR_ace_medical_AdvancedMedicalSettings_vehicle","$STR_ace_medical_AdvancedMedicalSettings_facility","$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility","$STR_ace_common_Disabled"};
	};
	class ace_medical_useLocation_PAK
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_PAK_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_PAK_Description";
		typeName = "SCALAR";
		value = 3;
		values[] = {"$STR_ace_medical_AdvancedMedicalSettings_anywhere","$STR_ace_medical_AdvancedMedicalSettings_vehicle","$STR_ace_medical_AdvancedMedicalSettings_facility","$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility","$STR_ace_common_Disabled"};
	};
	class ace_medical_useLocation_SurgicalKit
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_SurgicalKit_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_useLocation_SurgicalKit_Description";
		typeName = "SCALAR";
		value = 2;
		values[] = {"$STR_ace_medical_AdvancedMedicalSettings_anywhere","$STR_ace_medical_AdvancedMedicalSettings_vehicle","$STR_ace_medical_AdvancedMedicalSettings_facility","$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility","$STR_ace_common_Disabled"};
	};
	class ace_medical_useCondition_PAK
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_PAK_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_PAK_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"Anytime","Stable"};
	};
	class ace_medical_useCondition_SurgicalKit
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_SurgicalKit_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_SurgicalKit_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"Anytime","Stable"};
	};
	class ace_medical_keepLocalSettingsSynced
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_keepLocalSettingsSynced_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_keepLocalSettingsSynced_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_healHitPointAfterAdvBandage
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_healHitPointAfterAdvBandage_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_healHitPointAfterAdvBandage_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_medical_painIsOnlySuppressed
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_AdvancedMedicalSettings_painIsOnlySuppressed_DisplayName";
		description = "$STR_ace_medical_AdvancedMedicalSettings_painIsOnlySuppressed_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_medical_painEffectType
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_painEffectType";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_medical_painEffect_Flash","$STR_ace_medical_painEffect_Chroma"};
		isClientSettable = 1;
	};
	class ace_medical_allowUnconsciousAnimationOnTreatment
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_allowUnconsciousAnimationOnTreatment_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_allowUnconsciousAnimationOnTreatment_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_medical_moveUnitsFromGroupOnUnconscious
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_moveUnitsFromGroupOnUnconscious_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_moveUnitsFromGroupOnUnconscious_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_medical_menuTypeStyle
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_menuTypeDisplay";
		description = "$STR_ace_medical_menuTypeDescription";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_medical_useSelection","$STR_ace_medical_useRadial","Disabled"};
		isClientSettable = 1;
	};
	class ace_medical_delayUnconCaptive
	{
		category = "$STR_ace_medical_Category_Medical";
		displayName = "$STR_ace_medical_MedicalSettings_delayUnconCaptive_DisplayName";
		description = "$STR_ace_medical_MedicalSettings_delayUnconCaptive_Description";
		typeName = "SCALAR";
		value = 3;
		sliderSettings[] = {0,30,3,0};
	};
};
class CfgInGameUI
{
	class PeripheralVision
	{
		bloodTexture = "";
	};
};
class ACE_gui_backgroundBase;
class ACE_gui_listBoxBase;
class Rsctitles
{
	class ace_medical_DisplayInformation
	{
		duration = "10e10";
		idd = 1111;
		movingenable = 0;
		onLoad = "uiNamespace setVariable [""ace_medical_DisplayInformation"",_this select 0]";
		onUnload = "uiNamespace setVariable [""ace_medical_DisplayInformation"",nil]";
		class controlsBackground
		{
			class bodyImgBackground: ACE_gui_backgroundBase
			{
				idc = -1;
				x = "safezoneX + (2.5 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
				w = "8.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
				h = "8.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
				colorBackground[] = {1,1,1,1};
				colorPicture[] = {1,1,1,1};
				colorText[] = {1,1,1,1};
				text = "\z\ace\addons\medical\ui\body_background.paa";
			};
			class bodyImgHead: bodyImgBackground
			{
				idc = 50;
				colorBackground[] = {1,1,1,1};
				colorPicture[] = {1,1,1,1};
				colorText[] = {1,1,1,1};
				text = "\z\ace\addons\medical\ui\body_head.paa";
			};
			class bodyImgTorso: bodyImgHead
			{
				idc = 51;
				text = "\z\ace\addons\medical\ui\body_torso.paa";
			};
			class bodyImgArms_l: bodyImgHead
			{
				idc = 52;
				text = "\z\ace\addons\medical\ui\body_arm_left.paa";
			};
			class bodyImgArms_r: bodyImgHead
			{
				idc = 53;
				text = "\z\ace\addons\medical\ui\body_arm_right.paa";
			};
			class bodyImgLegs_l: bodyImgHead
			{
				idc = 54;
				text = "\z\ace\addons\medical\ui\body_leg_left.paa";
			};
			class bodyImgLegs_r: bodyImgHead
			{
				idc = 55;
				text = "\z\ace\addons\medical\ui\body_leg_right.paa";
			};
			class InjuryListLabel
			{
				idc = 199;
				type = "CT_STATIC";
				x = "safezoneX + (2 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "10.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
				w = "9 * (((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
				style = "0x00 + 0x100";
				font = "RobotoCondensed";
				colorText[] = {0.95,0.95,0.95,0.75};
				colorBackground[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
				text = "$STR_ace_medical_Injuries";
			};
			class InjuryList: ACE_gui_listBoxBase
			{
				idc = 200;
				x = "safezoneX + (2 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "11 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
				w = "9 * (((safezoneW / safezoneH) min 1.2) / 40)";
				h = "9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
				rowHeight = 0.03;
				colorBackground[] = {0,0,0,0.2};
				colorText[] = {1,1,1,1.0};
				colorScrollbar[] = {0.95,0.95,0.95,1};
				colorSelect[] = {0.95,0.95,0.95,1};
				colorSelect2[] = {0.95,0.95,0.95,1};
				colorSelectBackground[] = {0,0,0,0.0};
				colorSelectBackground2[] = {0.0,0.0,0.0,0.5};
			};
			class ActivityLog: InjuryList
			{
				idc = 302;
				y = "21.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
				h = "7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
				rowHeight = 0.03;
				shadow = 2;
				colorBackground[] = {0,0,0,0};
				colorText[] = {1,1,1,1.0};
				colorScrollbar[] = {0.95,0.95,0.95,1};
				colorSelect[] = {1,1,1,1};
				colorSelect2[] = {1,1,1,1};
				colorSelectBackground[] = {0,0,0,0.0};
				colorSelectBackground2[] = {0.0,0.0,0.0,0};
			};
			class TriageStatus
			{
				idc = 303;
				type = "CT_STATIC";
				x = "safezoneX + (2 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "20.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
				w = "9 * (((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
				style = "0x00 + 0x100";
				font = "RobotoCondensed";
				colorText[] = {0.95,0.95,0.95,0.75};
				colorBackground[] = {0,0,0,0.9};
				text = "";
			};
		};
	};
	class RscHealthTextures
	{
		class controls
		{
			class Flame_1;
			class Blood_1: Flame_1
			{
				text = "";
			};
			class Blood_2: Flame_1
			{
				text = "";
			};
			class Blood_3: Flame_1
			{
				text = "";
			};
		};
	};
};
class ACE_gui_buttonBase;
class ace_medical_triageCard
{
	idd = 7010;
	movingenable = 0;
	onLoad = "uiNamespace setVariable [""ace_medical_triageCard"",_this select 0]";
	onUnload = "uiNamespace setVariable [""ace_medical_triageCard"",nil]";
	class controlsBackground
	{
		class Background: ACE_gui_backgroundBase
		{
			idc = -1;
			type = "CT_STATIC";
			x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "19 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = "ST_LEFT + ST_SHADOW";
			font = "RobotoCondensed";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorText[] = {0.0,0.0,0.0,1};
			colorBackground[] = {1,1,1,1};
			text = "";
		};
		class cornor_top_l: ACE_gui_backgroundBase
		{
			idc = -1;
			x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font = "RobotoCondensed";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorText[] = {1,1,0,1};
			colorBackground[] = {0,0,0,0};
			text = "\z\ace\addons\medical\ui\triage_card_corner_l.paa";
		};
		class cornor_top_r: cornor_top_l
		{
			x = "20 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical\ui\triage_card_corner_r.paa";
		};
		class TriageCardLabel
		{
			idc = 199;
			type = "CT_STATIC";
			x = "14.25 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "7.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			style = "0x02 + 0x100";
			font = "RobotoCondensed";
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			text = "$STR_ace_medical_Actions_TriageCard";
		};
		class TriageList: ACE_gui_listBoxBase
		{
			idc = 200;
			x = "11 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "13 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "13 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			rowHeight = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1.0};
			colorScrollbar[] = {0.95,0.95,0.95,0};
			colorSelect[] = {0.0,0.0,0.0,1};
			colorSelect2[] = {0.0,0.0,0.0,1};
			colorSelectBackground[] = {0,0,0,0.0};
			colorSelectBackground2[] = {0.0,0.0,0.0,0.0};
		};
		class TriageTextBottom: TriageCardLabel
		{
			idc = 2000;
			x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "20 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			colorText[] = {1,1,1.0,1};
			colorBackground[] = {0,0.0,0.0,0.7};
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "";
		};
		class selectTriageStatus: ACE_gui_buttonBase
		{
			idc = 2001;
			x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "20 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.0)";
			action = "[true] call ace_medical_fnc_dropDownTriageCard;";
			text = "";
		};
		class selectTriageStatusNone: selectTriageStatus
		{
			idc = 2002;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_medical_Triage_Status_None";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.9)";
			action = "[false] call ace_medical_fnc_dropDownTriageCard; (ace_medical_TriageCardTarget) setVariable [""ace_medical_triageLevel"",0,true];";
		};
		class selectTriageStatusMinor: selectTriageStatus
		{
			idc = 2003;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_medical_Triage_Status_Minor";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			action = "[false] call ace_medical_fnc_dropDownTriageCard; (ace_medical_TriageCardTarget) setVariable [""ace_medical_triageLevel"",1,true];";
		};
		class selectTriageStatusDelayed: selectTriageStatus
		{
			idc = 2004;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_medical_Triage_Status_Delayed";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			action = "[false] call ace_medical_fnc_dropDownTriageCard; (ace_medical_TriageCardTarget) setVariable [""ace_medical_triageLevel"",2,true];";
		};
		class selectTriageStatusImmediate: selectTriageStatus
		{
			idc = 2005;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_medical_Triage_Status_Immediate";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureOver = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			action = "[false] call ace_medical_fnc_dropDownTriageCard; (ace_medical_TriageCardTarget) setVariable [""ace_medical_triageLevel"",3,true];";
		};
		class selectTriageStatusDeceased: selectTriageStatus
		{
			idc = 2006;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_medical_Triage_Status_Deceased";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.9)";
			action = "[false] call ace_medical_fnc_dropDownTriageCard; (ace_medical_TriageCardTarget) setVariable [""ace_medical_triageLevel"",4,true];";
		};
	};
};
class ACE_newEvents
{
	medical_onUnconscious = "ace_unconscious";
	medical_treatmentSuccess = "ace_treatmentSucceded";
	medical_onSetDead = "ace_killed";
	Medical_onEnteredCardiacArrest = "ace_cardiacArrestEntered";
	Medical_onItemAddedToTriageCard = "ace_triageCardItemAdded";
	medical_onLogEntryAdded = "ace_medicalLogEntryAdded";
	Medical_onHeartRateAdjustmentAdded = "ace_heartRateAdjustmentAdded";
	placedInBodyBag = "ace_placedInBodyBag";
	actionPlaceInBodyBag = "ace_medical_actionPlaceInBodyBag";
	treatmentTourniquetLocal = "ace_medical_treatmentTourniquetLocal";
	treatmentIVLocal = "ace_medical_treatmentIVLocal";
	treatmentBasic_morphineLocal = "ace_medical_treatmentBasic_morphineLocal";
	treatmentBasic_bloodbagLocal = "ace_medical_treatmentBasic_bloodbagLocal";
	treatmentAdvanced_medicationLocal = "ace_medical_treatmentAdvanced_medicationLocal";
	treatmentAdvanced_fullHealLocal = "ace_medical_treatmentAdvanced_fullHealLocal";
	treatmentAdvanced_CPRLocal = "ace_medical_treatmentAdvanced_CPRLocal";
	treatmentAdvanced_bandageLocal = "ace_medical_treatmentAdvanced_bandageLocal";
	setUnconscious = "ace_medical_setUnconscious";
	setHitPointDamage = "ace_medical_setHitPointDamage";
	setDead = "ace_medical_setDead";
	addToTriageCard = "ace_medical_addToTriageCard";
	addToMedicalLog = "ace_medical_addToMedicalLog";
	actionCheckPulseLocal = "ace_medical_actionCheckPulseLocal";
	actionCheckBloodPressureLocal = "ace_medical_actionCheckBloodPressureLocal";
	addVitalLoop = "ace_medical_addVitalLoop";
};
class ACE_Extensions
{
	extensions[] += {"ace_medical"};
};
