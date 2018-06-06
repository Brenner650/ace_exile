////////////////////////////////////////////////////////////////////
//DeRap: ace_vehiclelock\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:12 2018 : 'file' last modified on Mon Apr 16 21:49:05 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_vehiclelock
	{
		name = "ACE3 - Vehicle Lock";
		units[] = {"ACE_VehicleLock_ModuleSyncedAssign"};
		weapons[] = {"ACE_key_master","ACE_key_lockpick","ACE_key_west","ACE_key_east","ACE_key_indp","ACE_key_civ"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		authors[] = {"PabstMirror"};
		authorUrl = "https://github.com/acemod/ACE3";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
	};
};
class ACE_Settings
{
	class ace_vehiclelock_defaultLockpickStrength
	{
		movedToSQF = 1;
	};
	class ace_vehiclelock_lockVehicleInventory
	{
		movedToSQF = 1;
	};
	class ace_vehiclelock_vehicleStartingLockState
	{
		movedToSQF = 1;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_vehiclelock
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vehiclelock\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_vehiclelock
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vehiclelock\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_vehiclelock
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\vehiclelock\XEH_postInit.sqf'";
	};
};
class Extended_InitPost_EventHandlers
{
	class Car
	{
		class ace_vehiclelock
		{
			serverInit = "_this call ace_vehiclelock_fnc_handleVehicleInitPost";
		};
	};
	class Tank
	{
		class ace_vehiclelock
		{
			serverInit = "_this call ace_vehiclelock_fnc_handleVehicleInitPost";
		};
	};
	class Helicopter
	{
		class ace_vehiclelock
		{
			serverInit = "_this call ace_vehiclelock_fnc_handleVehicleInitPost";
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class ACE_key_customKeyMagazine: CA_Magazine
	{
		picture = "\z\ace\addons\vehiclelock\ui\keyBlack.paa";
		displayName = "ACE Vehicle Key";
		descriptionShort = "$STR_ace_vehiclelock_Item_Custom_Description";
		count = 1;
		mass = 0;
		ACE_isUnique = 1;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_SelfActions
		{
			class ACE_unlockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_UnLock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
				priority = 0.3;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
				priority = 0.2;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockpickVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lockpick";
				condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
				statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
				priority = 0.1;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_unlockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_UnLock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.3;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.2;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockpickVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lockpick";
					distance = 4;
					condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
					statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
					exceptions[] = {"isNotSwimming"};
					priority = 0.1;
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_SelfActions
		{
			class ACE_unlockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_UnLock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
				priority = 0.3;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
				priority = 0.2;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockpickVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lockpick";
				condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
				statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
				priority = 0.1;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_unlockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_UnLock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.3;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.2;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockpickVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lockpick";
					distance = 4;
					condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
					statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
					exceptions[] = {"isNotSwimming"};
					priority = 0.1;
				};
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_SelfActions
		{
			class ACE_unlockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_UnLock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
				priority = 0.3;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
				priority = 0.2;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockpickVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lockpick";
				condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
				statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
				priority = 0.1;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_unlockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_UnLock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.3;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.2;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockpickVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lockpick";
					distance = 4;
					condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
					statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
					exceptions[] = {"isNotSwimming"};
					priority = 0.1;
				};
			};
		};
	};
	class Motorcycle: LandVehicle
	{
		class ACE_SelfActions
		{
			class ACE_unlockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_UnLock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
				priority = 0.3;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
				priority = 0.2;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockpickVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lockpick";
				condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
				statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
				priority = 0.1;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_unlockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_UnLock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.3;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.2;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockpickVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lockpick";
					distance = 4;
					condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
					statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
					exceptions[] = {"isNotSwimming"};
					priority = 0.1;
				};
			};
		};
	};
	class Ship;
	class Ship_F: Ship
	{
		class ACE_SelfActions
		{
			class ACE_unlockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_UnLock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
				priority = 0.3;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lock";
				condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
				statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
				priority = 0.2;
				icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
			};
			class ACE_lockpickVehicle
			{
				displayName = "$STR_ace_vehiclelock_Action_Lockpick";
				condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
				statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
				priority = 0.1;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_unlockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_UnLock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,false],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.3;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lock";
					distance = 4;
					condition = "([_player,_target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
					statement = "[""ace_vehiclelock_setVehicleLock"",[_target,true],[_target]] call CBA_fnc_targetEvent";
					exceptions[] = {"isNotSwimming"};
					priority = 0.2;
					icon = "\z\ace\addons\vehiclelock\UI\key_menuIcon_ca.paa";
				};
				class ACE_lockpickVehicle
				{
					displayName = "$STR_ace_vehiclelock_Action_Lockpick";
					distance = 4;
					condition = "[_player,_target,'canLockpick'] call ace_vehiclelock_fnc_lockpick";
					statement = "[_player,_target,'startLockpick'] call ace_vehiclelock_fnc_lockpick";
					exceptions[] = {"isNotSwimming"};
					priority = 0.1;
				};
			};
		};
	};
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription;
	};
	class ACE_Module: Module_F{};
	class ACE_VehicleLock_ModuleSetup: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_vehiclelock_Module_DisplayName";
		function = "ace_vehiclelock_fnc_moduleInit";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\vehiclelock\UI\Icon_Module_VehicleLock_ca.paa";
		functionPriority = 0;
		class Arguments
		{
			class LockVehicleInventory
			{
				displayName = "$STR_ace_vehiclelock_LockVehicleInventory_DisplayName";
				description = "$STR_ace_vehiclelock_LockVehicleInventory_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class VehicleStartingLockState
			{
				displayName = "$STR_ace_vehiclelock_VehicleStartingLockState_DisplayName";
				description = "$STR_ace_vehiclelock_VehicleStartingLockState_Description";
				typeName = "NUMBER";
				class values
				{
					class None
					{
						name = "$STR_ace_vehiclelock_VehicleStartingLockState_AsIs";
						value = 0;
						default = 1;
					};
					class Side
					{
						name = "$STR_ace_vehiclelock_VehicleStartingLockState_Locked";
						value = 1;
					};
					class Unique
					{
						name = "$STR_ace_vehiclelock_VehicleStartingLockState_Unlocked";
						value = 2;
					};
				};
			};
			class DefaultLockpickStrength
			{
				displayName = "$STR_ace_vehiclelock_DefaultLockpickStrength_DisplayName";
				description = "$STR_ace_vehiclelock_DefaultLockpickStrength_Description";
				typeName = "NUMBER";
				defaultValue = "10";
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_vehiclelock_Module_Description";
		};
	};
	class ACE_VehicleLock_ModuleSyncedAssign: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_vehiclelock_VehicleKeyAssign_Module_DisplayName";
		function = "ace_vehiclelock_fnc_moduleSync";
		scope = 2;
		isGlobal = 0;
		icon = "\z\ace\addons\vehiclelock\UI\Icon_Module_VehicleKey_ca.paa";
		functionPriority = 0;
		class Arguments{};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_ace_vehiclelock_VehicleKeyAssign_Module_Description";
			sync[] = {"AnyPlayer","AnyVehicle"};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_key_master: ACE_ItemCore
	{
		scopeArsenal = 0;
		author = "$STR_ace_common_ACETeam";
		displayName = "Vehicle Key: Master";
		descriptionShort = "$STR_ace_vehiclelock_Item_Master_Description";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\z\ace\addons\vehiclelock\ui\keyBlack.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0;
		};
	};
	class ACE_key_lockpick: ACE_key_master
	{
		displayName = "Lockpick";
		descriptionShort = "$STR_ace_vehiclelock_Item_Lockpick_Description";
		picture = "\z\ace\addons\vehiclelock\ui\lockpick.paa";
	};
	class ACE_key_west: ACE_key_master
	{
		displayName = "Vehicle Key: West";
		descriptionShort = "$STR_ace_vehiclelock_Item_West_Description";
		picture = "\z\ace\addons\vehiclelock\ui\keyBlue.paa";
	};
	class ACE_key_east: ACE_key_master
	{
		displayName = "Vehicle Key: East";
		descriptionShort = "$STR_ace_vehiclelock_Item_East_Description";
		picture = "\z\ace\addons\vehiclelock\ui\keyRed.paa";
	};
	class ACE_key_indp: ACE_key_master
	{
		displayName = "Vehicle Key: Independent";
		descriptionShort = "$STR_ace_vehiclelock_Item_Indp_Description";
		picture = "\z\ace\addons\vehiclelock\ui\keyPurple.paa";
	};
	class ACE_key_civ: ACE_key_master
	{
		displayName = "Vehicle Key: Civilian";
		descriptionShort = "$STR_ace_vehiclelock_Item_Civ_Description";
		picture = "\z\ace\addons\vehiclelock\ui\keyGreen.paa";
	};
};
