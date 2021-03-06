////////////////////////////////////////////////////////////////////
//DeRap: ace_explosives\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:43:12 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_explosives
	{
		name = "ACE3 - Explosives";
		units[] = {"ACE_ModuleMine_SLAMBottomMine","ACE_ModuleExplosive_IEDUrbanBig_Range","ACE_ModuleExplosive_IEDLandBig_Range","ACE_ModuleExplosive_IEDUrbanSmall_Range","ACE_ModuleExplosive_IEDLandSmall_Range"};
		weapons[] = {"ACE_Clacker","ACE_DefusalKit","ACE_M26_Clacker","ACE_DeadManSwitch","ACE_Cellphone"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Garth 'L-H' de Wet"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
		ammo[] = {"TimeBombCore","ClaymoreDirectionalMine_Remote_Ammo","APERSTripMine_Wire_Ammo","ACE_FlareTripMine_Wire_Ammo","ACE_TripFlare_FlareEffect","SLAMDirectionalMine_Wire_Ammo","ACE_SLAMDirectionalMine_Command_Ammo","ACE_SLAMDirectionalMine_Timer_Ammo","ACE_SLAMDirectionalMine_Magnetic_Ammo","DemoCharge_Remote_Ammo","SatchelCharge_Remote_Ammo","IEDUrbanBig_Remote_Ammo","ACE_IEDUrbanBig_Command_Ammo","ACE_IEDUrbanBig_Range_Ammo","IEDUrbanSmall_Remote_Ammo","ACE_IEDUrbanSmall_Command_Ammo","ACE_IEDUrbanSmall_Range_Ammo","IEDLandBig_Remote_Ammo","ACE_IEDLandBig_Command_Ammo","ACE_IEDLandBig_Range_Ammo","IEDLandSmall_Remote_Ammo","ACE_IEDLandSmall_Command_Ammo","ACE_IEDLandSmall_Range_Ammo","APERSMineDispenser_Ammo","TrainingMine_Ammo"};
	};
};
class ACE_Settings
{
	class ace_explosives_requireSpecialist
	{
		category = "$STR_ace_explosives_Menu";
		displayName = "$STR_ace_explosives_RequireSpecialist_DisplayName";
		description = "$STR_ace_explosives_RequireSpecialist_Description";
		value = 0;
		typeName = "BOOL";
	};
	class ace_explosives_punishNonSpecialists
	{
		category = "$STR_ace_explosives_Menu";
		displayName = "$STR_ace_explosives_PunishNonSpecialists_DisplayName";
		description = "$STR_ace_explosives_PunishNonSpecialists_Description";
		value = 1;
		typeName = "BOOL";
	};
	class ace_explosives_explodeOnDefuse
	{
		category = "$STR_ace_explosives_Menu";
		displayName = "$STR_ace_explosives_ExplodeOnDefuse_DisplayName";
		description = "$STR_ace_explosives_ExplodeOnDefuse_Description";
		value = 1;
		typeName = "BOOL";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_explosives
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\explosives\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_explosives
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\explosives\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_explosives
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\explosives\XEH_postInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class CAManBase
	{
		ace_explosives_killedHandler = "_this call ace_explosives_fnc_onIncapacitated";
	};
};
class Extended_Take_EventHandlers
{
	class CAManBase
	{
		ace_explosives_takeHandler = "call ace_explosives_fnc_onInventoryChanged";
	};
};
class Extended_Put_EventHandlers
{
	class CAManBase
	{
		ace_explosives_takeHandler = "[_this select 1,_this select 0,_this select 2] call ace_explosives_fnc_onInventoryChanged";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_explosives = "_this call compile preProcessFileLineNumbers '\z\ace\addons\explosives\XEH_missionDisplayLoad.sqf'";
	};
};
class CfgAmmo
{
	class Default;
	class TimeBombCore: Default
	{
		ace_explosives_DefuseTime = 5;
	};
	class DirectionalBombBase;
	class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase
	{
		ace_explosives_magazine = "ClaymoreDirectionalMine_Remote_Mag";
		ace_explosives_Explosive = "ClaymoreDirectionalMine_Remote_Ammo_Scripted";
		ace_explosives_size = 0;
		ace_explosives_defuseObjectPosition[] = {0,0,0.038};
		soundActivation[] = {"",0,0,0};
		soundDeactivation[] = {"",0,0,0};
	};
	class APERSTripMine_Wire_Ammo: DirectionalBombBase
	{
		ace_explosives_defuseObjectPosition[] = {-1.415,0,0.12};
		ace_explosives_size = 0;
	};
	class ACE_FlareTripMine_Wire_Ammo: APERSTripMine_Wire_Ammo
	{
		SoundSetExplosion[] = {};
		defaultMagazine = "ACE_FlareTripMine_Mag";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		soundHit[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3",1.25893,1,100};
		explosionEffects = "ACE_TripflareEffect";
		CraterEffects = "";
		soundTrigger[] = {"",1,1};
		class CamShakeExplode
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class F_20mm_Red;
	class ACE_TripFlare_FlareEffect: F_20mm_Red
	{
		triggerTime = 0.1;
		ace_explosives_size = 0;
	};
	class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase
	{
		indirectHitRange = 20;
		ace_explosives_explodeOnDefuseChance = 1;
		ace_explosives_magazine = "SLAMDirectionalMine_Wire_Mag";
		ace_explosives_size = 0;
	};
	class ACE_SLAMDirectionalMine_Command_Ammo: SLAMDirectionalMine_Wire_Ammo
	{
		mineTrigger = "RemoteTrigger";
		ace_explosives_explodeOnDefuseChance = 0;
	};
	class ACE_SLAMDirectionalMine_Timer_Ammo: SLAMDirectionalMine_Wire_Ammo
	{
		mineTrigger = "TimeTrigger";
	};
	class ACE_SLAMDirectionalMine_Magnetic_Ammo: SLAMDirectionalMine_Wire_Ammo
	{
		mineTrigger = "ACE_MagneticTrigger";
		ace_explosives_explodeOnDefuseChance = 0;
		explosionAngle = 360;
		indirectHitRange = 1;
		mineInconspicuousness = 25;
		icon = "iconExplosiveGP";
	};
	class PipeBombBase;
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		ace_explosives_magazine = "DemoCharge_Remote_Mag";
		ace_explosives_Explosive = "DemoCharge_Remote_Ammo_Scripted";
		ace_explosives_size = 0;
		ace_explosives_defuseObjectPosition[] = {0.07,0,0.055};
		soundActivation[] = {"",0,0,0};
		soundDeactivation[] = {"",0,0,0};
		hit = 500;
		indirectHit = 500;
		indirectHitRange = 7;
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		ace_explosives_magazine = "SatchelCharge_Remote_Mag";
		ace_explosives_Explosive = "SatchelCharge_Remote_Ammo_Scripted";
		ace_explosives_size = 0;
		ace_explosives_defuseObjectPosition[] = {0.1,0.1,0.05};
		soundActivation[] = {"",0,0,0};
		soundDeactivation[] = {"",0,0,0};
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
		triggerWhenDestroyed = 1;
		ace_explosives_explodeOnDefuseChance = 0.02;
		ace_explosives_magazine = "IEDUrbanBig_Remote_Mag";
		ace_explosives_size = 1;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1",0.8,1,40};
	};
	class ACE_IEDUrbanBig_Command_Ammo: IEDUrbanBig_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class ACE_IEDUrbanBig_Range_Ammo: IEDUrbanBig_Remote_Ammo
	{
		mineTrigger = "RangeTrigger";
	};
	class IEDUrbanSmall_Remote_Ammo: PipeBombBase
	{
		triggerWhenDestroyed = 1;
		ace_explosives_explodeOnDefuseChance = 0.02;
		ace_explosives_magazine = "IEDUrbanSmall_Remote_Mag";
		ace_explosives_size = 0;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1",0.8,1,40};
	};
	class ACE_IEDUrbanSmall_Command_Ammo: IEDUrbanSmall_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class ACE_IEDUrbanSmall_Range_Ammo: IEDUrbanSmall_Remote_Ammo
	{
		mineTrigger = "RangeTriggerShort";
	};
	class IEDLandBig_Remote_Ammo: PipeBombBase
	{
		triggerWhenDestroyed = 1;
		ace_explosives_explodeOnDefuseChance = 0.02;
		ace_explosives_magazine = "IEDLandBig_Remote_Mag";
		ace_explosives_size = 1;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1",0.8,1,40};
	};
	class ACE_IEDLandBig_Command_Ammo: IEDLandBig_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class ACE_IEDLandBig_Range_Ammo: IEDLandBig_Remote_Ammo
	{
		mineTrigger = "RangeTrigger";
	};
	class IEDLandSmall_Remote_Ammo: PipeBombBase
	{
		triggerWhenDestroyed = 1;
		ace_explosives_explodeOnDefuseChance = 0.02;
		ace_explosives_magazine = "IEDLandSmall_Remote_Mag";
		ace_explosives_size = 0;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1",0.8,1,40};
	};
	class ACE_IEDLandSmall_Command_Ammo: IEDLandSmall_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class ACE_IEDLandSmall_Range_Ammo: IEDLandBig_Remote_Ammo
	{
		mineTrigger = "RangeTriggerShort";
	};
	class APERSMineDispenser_Ammo: PipeBombBase
	{
		ace_explosives_magazine = "APERSMineDispenser_Mag";
		ace_explosives_Explosive = "APERSMineDispenser_Ammo_Scripted";
		ace_explosives_size = 0;
		ace_explosives_defuseObjectPosition[] = {0.0,-0.05,0.15};
	};
	class APERSMine_Range_Ammo;
	class TrainingMine_Ammo: APERSMine_Range_Ammo
	{
		ace_explosives_magazine = "TrainingMine_Mag";
		ace_explosives_size = 0;
		ace_explosives_defuseObjectPosition[] = {0,0,0.15};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class ATMine_Range_Mag: CA_Magazine
	{
		ace_explosives_Placeable = 1;
		useAction = 0;
		ace_explosives_SetupObject = "ACE_Explosives_Place_ATMine";
		ace_explosives_DelayTime = 2.5;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = 0.06;
			};
		};
	};
	class APERSBoundingMine_Range_Mag: ATMine_Range_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_APERSBoundingMine";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = 0.08;
			};
		};
	};
	class APERSMine_Range_Mag: ATMine_Range_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_APERSMine";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = 0.02;
			};
		};
	};
	class APERSTripMine_Wire_Mag: ATMine_Range_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_APERSTripwireMine";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Tripwire"};
			class Tripwire;
		};
	};
	class ACE_FlareTripMine_Mag: APERSTripMine_Wire_Mag
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_FlareTripMine_Wire_Ammo";
		ace_explosives_SetupObject = "ACE_Explosives_Place_APERSTripwireMine";
		displayName = "$STR_ace_explosives_TripFlare_Name";
		descriptionShort = "$STR_ace_explosives_TripFlare_Description";
		class Library
		{
			libTextDesc = "$STR_ace_explosives_TripFlare_Description";
		};
	};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine
	{
		ace_explosives_Placeable = 1;
		useAction = 0;
		ace_explosives_SetupObject = "ACE_Explosives_Place_Claymore";
		ace_explosives_DelayTime = 1.5;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","MK16_Transmitter"};
			class Command
			{
				FuseTime = 0.5;
			};
			class MK16_Transmitter: Command{};
		};
	};
	class SatchelCharge_Remote_Mag: CA_Magazine
	{
		ace_explosives_Placeable = 1;
		useAction = 0;
		ace_explosives_SetupObject = "ACE_Explosives_Place_SatchelCharge";
		ace_explosives_DelayTime = 1;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Timer","Command","MK16_Transmitter","DeadmanSwitch"};
			class Timer
			{
				FuseTime = 0.5;
			};
			class Command
			{
				FuseTime = 0.5;
			};
			class MK16_Transmitter: Command{};
			class DeadmanSwitch: Command{};
		};
	};
	class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_DemoCharge";
		model = "\A3\Weapons_F\explosives\c4_charge_small_d";
	};
	class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_SLAM";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"IRSensor","PressurePlate","Timer","Command","MK16_Transmitter"};
			class PressurePlate
			{
				displayName = "$STR_ace_explosives_SLAME_Magnetic";
				digDistance = 0;
				ammo = "ACE_SLAMDirectionalMine_Magnetic_Ammo";
				pitch = 90;
			};
			class IRSensor
			{
				displayName = "$STR_ace_explosives_SLAME_IRSensor";
			};
			class Timer
			{
				ammo = "ACE_SLAMDirectionalMine_Timer_Ammo";
			};
			class Command
			{
				ammo = "ACE_SLAMDirectionalMine_Command_Ammo";
				fuseTime = 0.5;
			};
			class MK16_Transmitter: Command{};
		};
	};
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_IEDUrbanBig";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "ACE_IEDUrbanBig_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "$STR_ace_explosives_PressurePlate";
				digDistance = 0;
				ammo = "ACE_IEDUrbanBig_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_IEDLandBig";
		picture = "\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo = "ACE_IEDLandBig_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate: PressurePlate
			{
				ammo = "ACE_IEDLandBig_Range_Ammo";
			};
		};
	};
	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "ACE_IEDUrbanSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "$STR_ace_explosives_PressurePlate";
				digDistance = 0;
				ammo = "ACE_IEDUrbanSmall_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo = "ACE_IEDLandSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate: PressurePlate
			{
				ammo = "ACE_IEDLandSmall_Range_Ammo";
			};
		};
	};
	class APERSMineDispenser_Mag: SatchelCharge_Remote_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_APERSMineDispenser";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Timer","Command","MK16_Transmitter"};
			class Timer
			{
				FuseTime = 0.5;
			};
			class Command
			{
				FuseTime = 0.5;
			};
			class MK16_Transmitter: Command{};
		};
	};
	class TrainingMine_Mag: APERSMine_Range_Mag
	{
		ace_explosives_SetupObject = "ACE_Explosives_Place_TrainingMine";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				digDistance = 0.02;
			};
		};
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[] += {"ace_explosives_muzzle"};
		class PutMuzzle: Default{};
		class ace_explosives_muzzle: PutMuzzle
		{
			magazines[] = {"ACE_FlareTripMine_Mag"};
		};
	};
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ExplosiveItem: CBA_MiscItem_ItemInfo
	{
		allowedSlots[] = {801,701,901};
	};
	class ACE_Clacker: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_explosives_clacker_displayName";
		descriptionShort = "$STR_ace_explosives_clacker_description";
		picture = "\z\ace\addons\explosives\Data\UI\Clacker.paa";
		model = "\z\ace\addons\explosives\data\ace_m57.p3d";
		ace_explosives_Range = 250;
		ace_explosives_Detonator = 1;
		ace_explosives_triggerType = "Command";
		class ItemInfo: ACE_ExplosiveItem
		{
			mass = 3;
			uniformModel = "\A3\weapons_F\ammo\mag_univ.p3d";
		};
	};
	class ACE_M26_Clacker: ACE_Clacker
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_explosives_M152_Clacker_displayName";
		picture = "\z\ace\addons\explosives\Data\UI\MK26_Transmitter_ca.paa";
		ace_explosives_Range = 5000;
		ace_explosives_triggerType = "MK16_Transmitter";
	};
	class ACE_DefusalKit: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_explosives_DefusalKit_displayName";
		descriptionShort = "$STR_ace_explosives_DefusalKit_description";
		picture = "\z\ace\addons\explosives\Data\UI\Pliers.paa";
		model = "\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		class ItemInfo: ACE_ExplosiveItem
		{
			mass = 5;
			uniformModel = "\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		};
	};
	class ACE_DeadManSwitch: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_explosives_DeadManSwitch_displayName";
		descriptionShort = "$STR_ace_explosives_DeadManSwitch_description";
		picture = "\z\ace\addons\explosives\Data\UI\DeadmanSwitch.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ace_explosives_Range = 100;
		ace_explosives_Detonator = 1;
		ace_explosives_triggerType = "DeadManSwitch";
		class ItemInfo: ACE_ExplosiveItem
		{
			mass = 2;
			uniformModel = "\A3\weapons_F\ammo\mag_univ.p3d";
		};
	};
	class ACE_Cellphone: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_explosives_cellphone_displayName";
		descriptionShort = "$STR_ace_explosives_cellphone_description";
		picture = "\z\ace\addons\explosives\Data\UI\Cellphone_UI.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		ace_explosives_Range = 15000;
		ace_explosives_Detonator = 1;
		ace_explosives_triggerType = "Cellphone";
		class ItemInfo: ACE_ExplosiveItem
		{
			mass = 2;
			uniformModel = "\A3\weapons_F\ammo\mag_univ.p3d";
		};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Explosives
			{
				displayName = "$STR_ace_explosives_Menu";
				condition = "!(_player getVariable [""ace_explosives_PlantingExplosive"",false])";
				statement = "";
				exceptions[] = {"isNotSwimming","isNotInside","isNotSitting"};
				showDisabled = 1;
				priority = 4;
				icon = "\z\ace\addons\explosives\UI\Explosives_Menu_ca.paa";
				insertChildren = "[_player] call ace_explosives_fnc_addTransmitterActions;";
				class ACE_Place
				{
					displayName = "$STR_ace_explosives_Place";
					condition = "(vehicle _player == _player) and {[_player] call ace_explosives_fnc_hasExplosives}";
					statement = "";
					insertChildren = "[_player] call ace_explosives_fnc_addExplosiveActions;";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					icon = "\z\ace\addons\explosives\UI\Place_Explosive_ca.paa";
					priority = 1;
				};
				class ACE_Cellphone
				{
					displayName = "$STR_ace_explosives_cellphone_displayName";
					condition = "('ACE_Cellphone' in (items ace_player))";
					statement = "closeDialog 0;createDialog 'Rsc_ACE_PhoneInterface';";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting"};
					showDisabled = 0;
					icon = "\z\ace\addons\explosives\Data\UI\Cellphone_UI.paa";
					priority = 0.8;
				};
			};
		};
	};
	class Items_base_F;
	class ACE_DefuseObject: Items_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_aceteam";
		_generalMacro = "ACE_DefuseObject";
		displayName = "ACE Defuse Helper";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		scope = 1;
		class ACE_Actions
		{
			class ACE_Defuse
			{
				distance = 1;
				displayName = "$STR_ace_explosives_Defuse";
				condition = "[_player,_target] call ace_explosives_fnc_canDefuse";
				statement = "[_player,_target] call ace_explosives_fnc_startDefuse;";
				exceptions[] = {"isNotSwimming"};
				icon = "\z\ace\addons\explosives\UI\Defuse_ca.paa";
			};
		};
	};
	class ACE_DefuseObject_Large: ACE_DefuseObject
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_Defuse: ACE_Defuse
			{
				distance = 2;
			};
		};
	};
	class ACE_Explosives_Place: Items_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		author = "$STR_ace_common_aceteam";
		_generalMacro = "ACE_Explosives_Place";
		displayName = "Multi-meter";
		mapSize = 0.2;
		icon = "iconObject_1x2";
		model = "\A3\Structures_F\Items\Tools\MultiMeter_F.p3d";
		scope = 1;
		vehicleClass = "Cargo";
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "";
				distance = 1.5;
				condition = "true";
				class ACE_SetTrigger
				{
					selection = "";
					displayName = "$STR_ace_explosives_TriggerMenu";
					condition = "true";
					statement = "";
					insertChildren = "[_target getVariable ""ace_explosives_class"",_target,_player] call ace_explosives_fnc_addTriggerActions;";
					showDisabled = 0;
					exceptions[] = {"isNotSwimming"};
					priority = 5;
					icon = "\z\ace\addons\explosives\UI\Explosives_Menu_ca.paa";
				};
				class ACE_PickUp
				{
					selection = "";
					displayName = "$STR_ace_explosives_Pickup";
					condition = "true";
					statement = "[_player,_target getVariable ""ace_explosives_class""] call ace_common_fnc_addToInventory;deleteVehicle _target;";
					showDisabled = 0;
					exceptions[] = {"isNotSwimming"};
					priority = 5;
					icon = "\A3\ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_takemine_ca.paa";
				};
			};
		};
	};
	class ACE_Explosives_Place_DemoCharge: ACE_Explosives_Place
	{
		displayName = "Demo Charge";
		model = "\A3\Weapons_F\explosives\c4_charge_small_d";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[-0.07,0,0.055]";
			};
		};
	};
	class ACE_Explosives_Place_APERSBoundingMine: ACE_Explosives_Place
	{
		displayName = "APERS Bounding Mine";
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
	};
	class ACE_Explosives_Place_APERSMine: ACE_Explosives_Place
	{
		displayName = "APERS Mine";
		model = "\A3\Weapons_F\explosives\mine_ap";
	};
	class ACE_Explosives_Place_APERSTripwireMine: ACE_Explosives_Place
	{
		displayName = "APERS Tripwire Mine";
		model = "\A3\Weapons_F\explosives\mine_AP_tripwire";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[1.415,0,0.12]";
			};
		};
	};
	class ACE_Explosives_Place_ATMine: ACE_Explosives_Place
	{
		displayName = "AT Mine";
		model = "\A3\Weapons_f\Explosives\mine_at";
	};
	class ACE_Explosives_Place_Claymore: ACE_Explosives_Place
	{
		displayName = "Claymore";
		model = "\A3\Weapons_F\explosives\mine_AP_miniclaymore";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,0,0.038]";
			};
		};
	};
	class ACE_Explosives_Place_SatchelCharge: ACE_Explosives_Place
	{
		displayName = "Satchel Charge";
		model = "\A3\Weapons_F\Explosives\satchel";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[-0.1,-0.1,0.05]";
			};
		};
	};
	class ACE_Explosives_Place_APERSMineDispenser: ACE_Explosives_Place
	{
		displayName = "APERSMineDispenser";
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0.0, -0.05, 0.15]";
			};
		};
	};
	class ACE_Explosives_Place_TrainingMine: ACE_Explosives_Place
	{
		displayName = "TrainingMine";
		model = "\A3\Weapons_F_Orange\Explosives\TrainingMine_F";
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0, 0, 0.15]";
			};
		};
	};
	class ACE_Explosives_Place_SLAM: ACE_Explosives_Place
	{
		displayName = "SLAM";
		model = "\A3\Weapons_F\Explosives\mine_SLAM_directional";
	};
	class ACE_Explosives_Place_IEDUrbanBig: ACE_Explosives_Place
	{
		displayName = "IED Urban Big";
		model = "\A3\Weapons_F\Explosives\IED_urban_big";
	};
	class ACE_Explosives_Place_IEDLandBig: ACE_Explosives_Place
	{
		displayName = "IED Land Big";
		model = "\A3\Weapons_F\Explosives\IED_land_big";
	};
	class ACE_Explosives_Place_IEDUrbanSmall: ACE_Explosives_Place
	{
		displayName = "IED Urban Small";
		model = "\A3\Weapons_F\Explosives\IED_urban_small";
	};
	class ACE_Explosives_Place_IEDLandSmall: ACE_Explosives_Place
	{
		displayName = "IED Land Small";
		model = "\A3\Weapons_F\Explosives\IED_land_small";
	};
	class NATO_Box_Base;
	class EAST_Box_Base;
	class IND_Box_Base;
	class FIA_Box_Base_F;
	class Box_NATO_Support_F;
	class Box_NATO_AmmoOrd_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 12;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 6;
			};
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 12;
			};
		};
	};
	class Box_East_AmmoOrd_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 12;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 6;
			};
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 12;
			};
		};
	};
	class Box_IND_AmmoOrd_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 12;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 6;
			};
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 12;
			};
			class _xx_ACE_Deadmanswitch
			{
				name = "ACE_Deadmanswitch";
				count = 2;
			};
			class _xx_ACE_Cellphone
			{
				name = "ACE_Cellphone";
				count = 3;
			};
		};
	};
	class Box_FIA_Ammo_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 2;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 2;
			};
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 2;
			};
			class _xx_ACE_Deadmanswitch
			{
				name = "ACE_Deadmanswitch";
				count = 1;
			};
			class _xx_ACE_Cellphone
			{
				name = "ACE_Cellphone";
				count = 2;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 12;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 6;
			};
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 12;
			};
			class _xx_ACE_Deadmanswitch
			{
				name = "ACE_Deadmanswitch";
				count = 6;
			};
			class _xx_ACE_Cellphone
			{
				name = "ACE_Cellphone";
				count = 10;
			};
		};
	};
	class B_Kitbag_rgr;
	class B_Kitbag_rgr_Exp: B_Kitbag_rgr
	{
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 0;
			};
		};
	};
	class B_Carryall_ocamo;
	class B_Carryall_ocamo_Exp: B_Carryall_ocamo
	{
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 0;
			};
		};
	};
	class B_Carryall_oucamo;
	class B_Carryall_oucamo_Exp: B_Carryall_oucamo
	{
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 0;
			};
		};
	};
	class B_Carryall_oli;
	class G_Carryall_Exp: B_Carryall_oli
	{
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 0;
			};
		};
	};
	class I_Carryall_oli_Exp: B_Carryall_oli
	{
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 0;
			};
		};
	};
	class ACE_Module;
	class ACE_ModuleExplosive: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_explosives_Module_DisplayName";
		function = "ace_explosives_fnc_module";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\explosives\UI\Icon_Module_Explosives_ca.paa";
		class Arguments
		{
			class RequireSpecialist
			{
				displayName = "$STR_ace_explosives_RequireSpecialist_DisplayName";
				description = "$STR_ace_explosives_RequireSpecialist_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class PunishNonSpecialists
			{
				displayName = "$STR_ace_explosives_PunishNonSpecialists_DisplayName";
				description = "$STR_ace_explosives_PunishNonSpecialists_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class ExplodeOnDefuse
			{
				displayName = "$STR_ace_explosives_ExplodeOnDefuse_DisplayName";
				description = "$STR_ace_explosives_ExplodeOnDefuse_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_explosives_Module_Description";
		};
	};
	class B_Soldier_base_F;
	class B_soldier_exp_F: B_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Soldier_03_f;
	class B_engineer_F: B_Soldier_03_f
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Soldier_diver_base_F;
	class B_diver_exp_F: B_Soldier_diver_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Soldier_recon_base;
	class B_recon_exp_F: B_Soldier_recon_base
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Soldier_02_f;
	class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_G_Soldier_base_F;
	class I_G_engineer_F: I_G_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_G_Soldier_exp_F: I_G_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_G_engineer_F: I_G_engineer_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_G_engineer_F: I_G_engineer_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_Soldier_02_F;
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_Soldier_base_F;
	class I_engineer_F: I_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_Soldier_diver_base_F;
	class I_diver_exp_F: I_Soldier_diver_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_Soldier_base_F;
	class O_soldier_exp_F: O_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_engineer_F: O_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_Soldier_diver_base_F;
	class O_diver_exp_F: O_Soldier_diver_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_Soldier_recon_base;
	class O_recon_exp_F: O_Soldier_recon_base
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_Soldier_Urban_base;
	class O_soldierU_exp_F: O_Soldier_Urban_base
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_engineer_U_F: O_Soldier_Urban_base
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Protagonist_VR_F: B_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_Protagonist_VR_F: O_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_Protagonist_VR_F: I_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Soldier_F;
	class b_soldier_universal_f: B_Soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_G_Soldier_F;
	class b_g_soldier_universal_f: B_G_Soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_Soldier_F;
	class o_soldier_universal_f: O_Soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_G_Soldier_F;
	class o_g_soldier_universal_f: O_G_Soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_soldier_F;
	class i_soldier_universal_f: I_soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_G_Soldier_F;
	class i_g_soldier_universal_f: I_G_Soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_V_Soldier_base_F;
	class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F
	{
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class B_Soldier_sniper_base_F;
	class B_sniper_F: B_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class I_Soldier_sniper_base_F;
	class I_Sniper_F: I_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class I_Spotter_F: I_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class O_Soldier_sniper_base_F;
	class O_sniper_F: O_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class O_spotter_F: O_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class B_ghillie_base_F: B_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class O_ghillie_base_F: O_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class I_ghillie_base_F: I_Soldier_sniper_base_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class O_T_Spotter_F: O_spotter_F
	{
		items[] = {"FirstAidKit","ACE_Clacker"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker"};
	};
	class MineBase;
	class SLAMDirectionalMine: MineBase
	{
		displayName = "$STR_ace_explosives_Module_SLAMSideAttack_DisplayName";
	};
	class ACE_SLAMBottomMine: SLAMDirectionalMine
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_SLAMDirectionalMine_Magnetic_Ammo";
		displayName = "$STR_ace_explosives_Module_SLAMBottomAttack_DisplayName";
	};
	class APERSTripMine: MineBase{};
	class ACE_FlareTripMine: APERSTripMine
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_FlareTripMine_Wire_Ammo";
		displayName = "$STR_ace_explosives_TripFlare_Name";
	};
	class IEDUrbanBig_F;
	class ACE_IEDUrbanBig_Range: IEDUrbanBig_F
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_IEDUrbanBig_Range_Ammo";
		displayName = "$STR_ace_explosives_Module_IEDUrbanBig_Range_DisplayName";
	};
	class IEDLandBig_F;
	class ACE_IEDLandBig_Range: IEDLandBig_F
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_IEDLandBig_Range_Ammo";
		displayName = "$STR_ace_explosives_Module_IEDLandBig_Range_DisplayName";
	};
	class IEDUrbanSmall_F;
	class ACE_IEDUrbanSmall_Range: IEDUrbanSmall_F
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_IEDUrbanSmall_Range_Ammo";
		displayName = "$STR_ace_explosives_Module_IEDUrbanSmall_Range_DisplayName";
	};
	class IEDLandSmall_F;
	class ACE_IEDLandSmall_Range: IEDLandSmall_F
	{
		author = "$STR_ace_common_aceteam";
		ammo = "ACE_IEDLandSmall_Range_Ammo";
		displayName = "$STR_ace_explosives_Module_IEDLandSmall_Range_DisplayName";
	};
	class ModuleMine_F;
	class ModuleMine_SLAMDirectionalMine_F: ModuleMine_F
	{
		displayName = "$STR_ace_explosives_Module_SLAMSideAttack_DisplayName";
	};
	class ACE_ModuleMine_SLAMBottomMine: ModuleMine_SLAMDirectionalMine_F
	{
		author = "$STR_ace_common_aceteam";
		displayName = "$STR_ace_explosives_Module_SLAMBottomAttack_DisplayName";
		explosive = "ACE_SLAMDirectionalMine_Magnetic_Ammo";
		icon = "iconExplosiveGP";
	};
	class ModuleExplosive_IEDUrbanBig_F;
	class ACE_ModuleExplosive_IEDUrbanBig_Range: ModuleExplosive_IEDUrbanBig_F
	{
		author = "$STR_ace_common_aceteam";
		displayName = "$STR_ace_explosives_Module_IEDUrbanBig_Range_DisplayName";
		explosive = "ACE_IEDUrbanBig_Range_Ammo";
	};
	class ModuleExplosive_IEDLandBig_F;
	class ACE_ModuleExplosive_IEDLandBig_Range: ModuleExplosive_IEDLandBig_F
	{
		author = "$STR_ace_common_aceteam";
		displayName = "$STR_ace_explosives_Module_IEDLandBig_Range_DisplayName";
		explosive = "ACE_IEDLandBig_Range_Ammo";
	};
	class ModuleExplosive_IEDUrbanSmall_F;
	class ACE_ModuleExplosive_IEDUrbanSmall_Range: ModuleExplosive_IEDUrbanSmall_F
	{
		author = "$STR_ace_common_aceteam";
		displayName = "$STR_ace_explosives_Module_IEDUrbanSmall_Range_DisplayName";
		explosive = "ACE_IEDUrbanSmall_Range_Ammo";
	};
	class ModuleExplosive_IEDLandSmall_F;
	class ACE_ModuleExplosive_IEDLandSmall_Range: ModuleExplosive_IEDLandSmall_F
	{
		author = "$STR_ace_common_aceteam";
		displayName = "$STR_ace_explosives_Module_IEDLandSmall_Range_DisplayName";
		explosive = "ACE_IEDLandSmall_Range_Ammo";
	};
};
class CfgCloudlets
{
	class Default;
	class ACE_TripFlare: Default
	{
		lifeTime = 0;
		beforeDestroyScript = "\z\ace\addons\explosives\scripts\TripflareEffect.sqf";
	};
};
class ACE_TripflareEffect
{
	class SpawnFlare
	{
		simulation = "particles";
		type = "ACE_TripFlare";
		position = "explosionPos";
	};
};
class ACE_Triggers
{
	class Command
	{
		isAttachable = 1;
		displayName = "$STR_ace_explosives_clacker_displayName";
		picture = "\z\ace\addons\explosives\Data\UI\Clacker.paa";
		onPlace = "_this call ace_explosives_fnc_AddClacker;false";
		requires[] = {"ACE_Clacker"};
	};
	class MK16_Transmitter: Command
	{
		isAttachable = 1;
		displayName = "$STR_ace_explosives_M152_displayName";
		picture = "\z\ace\addons\explosives\Data\UI\MK16_Reciever_ca.paa";
		requires[] = {"ACE_M26_Clacker"};
	};
	class DeadManSwitch: Command
	{
		isAttachable = 1;
		displayName = "$STR_ace_explosives_DeadManSwitch_displayName";
		picture = "\z\ace\addons\explosives\Data\UI\DeadmanSwitch.paa";
		requires[] = {"ACE_DeadManSwitch"};
	};
	class Cellphone: Command
	{
		isAttachable = 1;
		displayName = "$STR_ace_explosives_cellphone_displayName";
		picture = "\z\ace\addons\explosives\Data\UI\Cellphone_UI.paa";
		onPlace = "_this call ace_explosives_fnc_addCellphoneIED;false";
		requires[] = {"ACE_Cellphone"};
	};
	class PressurePlate
	{
		isAttachable = 0;
		displayName = "$STR_ace_explosives_PressurePlate";
		picture = "\z\ace\addons\explosives\Data\UI\PressurePlate.paa";
		onPlace = "false";
	};
	class IRSensor
	{
		isAttachable = 0;
		displayName = "$STR_ace_explosives_IRSensor";
		picture = "\z\ace\addons\explosives\Data\UI\PressurePlate.paa";
		onPlace = "false";
	};
	class Timer
	{
		isAttachable = 1;
		displayName = "$STR_ace_explosives_timerName";
		picture = "\z\ace\addons\explosives\data\UI\Timer.paa";
		onPlace = "[_this select 1,(_this select 3) select 0] call ace_explosives_fnc_startTimer;false";
		onSetup = "_this call ace_explosives_fnc_openTimerSetUI;true";
	};
	class Tripwire
	{
		isAttachable = 0;
		displayName = "$STR_ace_explosives_TripWire";
		picture = "\z\ace\addons\explosives\Data\UI\Tripwire.paa";
		onPlace = "false";
	};
};
class RscText;
class RscButton;
class RscXSliderH;
class IGUIBack;
class RscPicture;
class RscEdit;
class Rsc_ACE_CallScreen_Edit: RscEdit
{
	canModify = 1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])",1};
	text = "";
	style = "0x00 + 0x40 + 0x200";
	shadow = 1;
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1)";
	x = "0.288594 * safezoneW + safezoneX";
	w = "0.0825 * safezoneW";
	h = "0.044 * safezoneH";
};
class Rsc_ACE_HiddenButton: RscButton
{
	colorText[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	w = 0.095589;
	h = 0.039216;
	shadow = 0;
};
class Rsc_ACE_Timer_Slider: RscXSliderH
{
	x = 0.4;
	y = 0.2;
	w = 0.3;
	h = "1*((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	colorBackground[] = {0,0,0,0.5};
};
class RscACE_SelectTimeUI
{
	idd = 8854;
	movingEnable = 0;
	class controls
	{
		class back: IGUIBack
		{
			x = 0.25;
			y = 0;
			w = 0.5;
			h = 0.2;
			colorBackground[] = {0,0,0,0.5};
		};
		class header: RscText
		{
			idc = 8870;
			x = "0.25+ 0.005";
			y = 0.005;
			w = 0.49;
			h = 0.05;
			style = 2;
			text = "";
		};
		class slider: Rsc_ACE_Timer_Slider
		{
			idc = 8845;
			x = "0.25+ 0.005";
			y = 0.06;
			w = 0.49;
			h = 0.025;
			onSliderPosChanged = "_mins = floor((_this select 1)/60);_secs=floor((_this select 1) - (_mins*60));ctrlSetText [8870, format[localize 'STR_ACE_Explosives_TimerMenu',_mins, _secs]];";
		};
		class cancelBtn: RscButton
		{
			idc = 8855;
			x = "0.25+ 0.005";
			w = 0.15;
			h = 0.1;
			y = 0.09;
			style = 2;
			text = "$STR_ace_explosives_Cancel";
			action = "closeDialog 0;";
		};
		class approveBtn: RscButton
		{
			idc = 8860;
			x = "0.25+ 0.345";
			y = 0.09;
			h = 0.1;
			w = 0.15;
			style = 2;
			text = "$STR_ace_explosives_SetTime";
			action = "closeDialog 0;";
		};
	};
};
class Rsc_ACE_NumKeyButton: Rsc_ACE_HiddenButton{};
class Rsc_ACE_PhoneInterface
{
	idd = 8855;
	movingEnable = 1;
	onLoad = "ace_explosives_IED_CurrentSpeedDial= -1";
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\z\ace\addons\explosives\Data\UI\Cellphone_Background.paa";
			x = "0.231875 * safezoneW + safezoneX";
			y = "0.104 * safezoneH + safezoneY";
			w = "0.195937 * safezoneW";
			h = "0.704 * safezoneH";
		};
		class numkey_1: Rsc_ACE_NumKeyButton
		{
			idc = 1600;
			x = "0.278281 * safezoneW + safezoneX";
			y = "0.533 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "1";
			action = "ctrlSetText [1400,((ctrlText 1400) + '1')];";
		};
		class numkey_2: Rsc_ACE_NumKeyButton
		{
			idc = 1601;
			x = "0.314375 * safezoneW + safezoneX";
			y = "0.533 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "2";
			action = "ctrlSetText [1400,((ctrlText 1400) + '2')];";
		};
		class numkey_3: Rsc_ACE_NumKeyButton
		{
			idc = 1602;
			x = "0.350469 * safezoneW + safezoneX";
			y = "0.533 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "3";
			action = "ctrlSetText [1400,((ctrlText 1400) + '3')];";
		};
		class numkey_4: Rsc_ACE_NumKeyButton
		{
			idc = 1603;
			x = "0.278281 * safezoneW + safezoneX";
			y = "0.577 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "4";
			action = "ctrlSetText [1400,((ctrlText 1400) + '4')];";
		};
		class numkey_5: Rsc_ACE_NumKeyButton
		{
			idc = 1604;
			x = "0.314375 * safezoneW + safezoneX";
			y = "0.577 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "5";
			action = "ctrlSetText [1400,((ctrlText 1400) + '5')];";
		};
		class numkey_6: Rsc_ACE_NumKeyButton
		{
			idc = 1605;
			x = "0.350469 * safezoneW + safezoneX";
			y = "0.577 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "6";
			action = "ctrlSetText [1400,((ctrlText 1400) + '6')];";
		};
		class numkey_7: Rsc_ACE_NumKeyButton
		{
			idc = 1606;
			x = "0.278281 * safezoneW + safezoneX";
			y = "0.621 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "7";
			action = "ctrlSetText [1400,((ctrlText 1400) + '7')];";
		};
		class numkey_8: Rsc_ACE_NumKeyButton
		{
			idc = 1607;
			x = "0.314375 * safezoneW + safezoneX";
			y = "0.621 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "8";
			action = "ctrlSetText [1400,((ctrlText 1400) + '8')];";
		};
		class numkey_9: Rsc_ACE_NumKeyButton
		{
			idc = 1608;
			x = "0.350469 * safezoneW + safezoneX";
			y = "0.621 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "9";
			action = "ctrlSetText [1400,((ctrlText 1400) + '9')];";
		};
		class numkey_0: Rsc_ACE_NumKeyButton
		{
			idc = 1609;
			x = "0.314375 * safezoneW + safezoneX";
			y = "0.676 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "0";
			action = "ctrlSetText [1400,((ctrlText 1400) + '0')];";
		};
		class speedDialAdd: Rsc_ACE_NumKeyButton
		{
			idc = 1610;
			x = "0.278281 * safezoneW + safezoneX";
			y = "0.676 * safezoneH + safezoneY";
			w = "0.0309375 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "$STR_ace_explosives_Phone_AddToSpeedDial";
			action = "[ctrlText 1401,ctrlText 1400] call ace_explosives_fnc_addToSpeedDial;";
		};
		class clear: Rsc_ACE_HiddenButton
		{
			idc = 1610;
			x = "0.278281 * safezoneW + safezoneX";
			y = "0.445 * safezoneH + safezoneY";
			w = "0.020625 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "$STR_ace_explosives_Clear";
			action = "ctrlSetText [1400,''];[ctrlText 1401] call ace_explosives_fnc_removeFromSpeedDial;ctrlSetText [1401,''];";
		};
		class dial: Rsc_ACE_HiddenButton
		{
			idc = 1611;
			x = "0.309219 * safezoneW + safezoneX";
			y = "0.445 * safezoneH + safezoneY";
			w = "0.04125 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "$STR_ace_explosives_Phone_Dial";
			action = "[ace_player,ctrlText 1400] call ace_explosives_fnc_dialPhone;";
		};
		class up: Rsc_ACE_HiddenButton
		{
			idc = 1612;
			x = "0.360781 * safezoneW + safezoneX";
			y = "0.445 * safezoneH + safezoneY";
			w = "0.020625 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "$STR_ace_explosives_Phone_Up";
			action = "[true] call ace_explosives_fnc_setSpeedDial";
		};
		class down: Rsc_ACE_HiddenButton
		{
			idc = 1613;
			x = "0.345312 * safezoneW + safezoneX";
			y = "0.485 * safezoneH + safezoneY";
			w = "0.020625 * safezoneW";
			h = "0.033 * safezoneH";
			tooltip = "$STR_ace_explosives_Phone_Down";
			action = "[false] call ace_explosives_fnc_setSpeedDial";
		};
		class speedDial_Text: RscText
		{
			idc = 1405;
			y = "0.302 * safezoneH + safezoneY";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1)";
			x = "0.288594 * safezoneW + safezoneX";
			w = "0.0825 * safezoneW";
			h = "0.044 * safezoneH";
			text = "Name";
		};
		class speedDial_edit: Rsc_ACE_CallScreen_Edit
		{
			idc = 1401;
			y = "0.302 * safezoneH + safezoneY";
			x = "0.318 * safezoneW + safezoneX";
			w = 0.1;
		};
		class numberEdit_Text: RscText
		{
			idc = 1406;
			y = "0.348 * safezoneH + safezoneY";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1)";
			x = "0.288594 * safezoneW + safezoneX";
			w = "0.0825 * safezoneW";
			h = "0.044 * safezoneH";
			text = "#";
		};
		class number_edit: Rsc_ACE_CallScreen_Edit
		{
			canModify = 0;
			idc = 1400;
			y = "0.348 * safezoneH + safezoneY";
			x = "0.3 * safezoneW + safezoneX";
		};
	};
};
class RscTitles
{
	class ace_explosives_virtualAmmo
	{
		idd = -1;
		movingEnable = 1;
		duration = 9999999;
		fadein = 0;
		fadeout = 0;
		onLoad = "uiNamespace setVariable [""ace_explosives_virtualAmmoDisplay"",_this select 0]";
		class controls{};
		class objects
		{
			class TheObject
			{
				idc = 800851;
				type = 82;
				model = "\a3\weapons_f\Ammo\Handgrenade.p3d";
				scale = 1;
				direction[] = {0,0,1};
				up[] = {0,1,0};
				x = 0.5;
				y = 0.5;
				z = 1;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0.5;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 1;
			};
		};
	};
};
class ace_arsenal_stats
{
	class statBase;
	class ACE_explosiveRange: statBase
	{
		scope = 2;
		priority = 1;
		stats[] = {"ace_explosives_Range"};
		displayName = "$STR_ace_explosives_statExploRange";
		showText = 1;
		textStatement = "params ['_stat','_config']; private _exploRangeStat = getNumber (_config >> _stat select 0); format ['%1m (%2ft)',_exploRangeStat,(_exploRangeStat / 0.3048) toFixed 1]";
		condition = "params ['','_config']; (getNumber (_config >> ""ace_explosives_Detonator"")) > 0";
		tabs[] = {{},{7}};
	};
};
class CfgActions
{
	class None;
	class Deactivate: None
	{
		show = 0;
	};
	class DeactivateMine: None
	{
		show = 0;
	};
};
class CfgMineTriggers
{
	class RangeTrigger;
	class ACE_MagneticTrigger: RangeTrigger
	{
		mineMagnetic = 1;
		mineTriggerRange = 1;
	};
};
