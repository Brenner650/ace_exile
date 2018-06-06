////////////////////////////////////////////////////////////////////
//DeRap: ace_refuel\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:05 2018 : 'file' last modified on Mon Apr 16 21:47:20 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_refuel
	{
		name = "ACE3 - Refuel";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"GitHawk"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_refuel_rate
	{
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
		displayName = "$STR_ace_refuel_RefuelSettings_speed_DisplayName";
		description = "$STR_ace_refuel_RefuelSettings_speed_Description";
		value = 1;
		typeName = "SCALAR";
		sliderSettings[] = {0,25,1,1};
	};
	class ace_refuel_hoseLength
	{
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
		displayName = "$STR_ace_refuel_RefuelSettings_hoseLength_DisplayName";
		value = 12;
		typeName = "SCALAR";
		sliderSettings[] = {0,50,12,1};
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
					class ace_refuel_fuelCargo
					{
						displayName = "$STR_ace_refuel_fuelCargo_edenName";
						tooltip = "$STR_ace_refuel_fuelCargo_edenDesc";
						property = "ace_refuel_fuelCargo";
						control = "EditShort";
						expression = "if (_value != (if (isNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_fuelCargo"")) then {getNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_fuelCargo"")} else {-1})) then {[_this, _value] call ace_refuel_fnc_makeSource}";
						defaultValue = "(if (isNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_fuelCargo"")) then {getNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_fuelCargo"")} else {-1})";
						validate = "number";
						condition = "(1-objectBrain)*(1-objectAgent)";
						typeName = "NUMBER";
					};
					class ace_refuel_hooks
					{
						displayName = "$STR_ace_refuel_hooks_edenName";
						tooltip = "$STR_ace_refuel_hooks_edenDesc";
						property = "ace_refuel_hooks";
						control = "EditXYZ";
						expression = "if !(_value isEqualTo (if (isArray (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_hooks"")) then {getArray (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_hooks"") select 0} else {[0, 0, 0]})) then {_this setVariable ['%s', [_value], true]}";
						defaultValue = "(if (isArray (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_hooks"")) then {getArray (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_refuel_hooks"") select 0} else {[0, 0, 0]})";
						condition = "(1-objectBrain)*(1-objectAgent)";
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_refuel
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\refuel\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_refuel
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\refuel\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_refuel
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\refuel\XEH_postInit.sqf'";
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_refuel
		{
			respawn = "call ace_refuel_fnc_handleRespawn";
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class Land_CanisterFuel_F
	{
		class ace_refuel
		{
			init = "call ace_refuel_fnc_makeJerryCan";
		};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class ACE_Module;
	class ACE_moduleRefuelSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_refuel_RefuelSettings_Module_DisplayName";
		icon = "\z\ace\addons\refuel\ui\icon_module_refuel.paa";
		category = "ACE_Logistics";
		function = "ace_refuel_fnc_moduleRefuelSettings";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class rate
			{
				displayName = "$STR_ace_refuel_RefuelSettings_speed_DisplayName";
				description = "$STR_ace_refuel_RefuelSettings_speed_Description";
				typeName = "NUMBER";
				defaultValue = 10;
			};
			class hoseLength
			{
				displayName = "$STR_ace_refuel_RefuelSettings_hoseLength_DisplayName";
				typeName = "NUMBER";
				defaultValue = 12;
			};
		};
	};
	class ThingX;
	class ace_refuel_fuelNozzle: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_refuel_Refuel";
				distance = 7;
				position = "[0,-0.025,0.125]";
				condition = "true";
				statement = "";
				exceptions[] = {"isNotInside","isNotOnLadder","isNotSwimming","isNotRefueling"};
				showDisabled = 0;
				priority = 2;
				icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";
				class ace_refuel_PickUpNozzle
				{
					displayName = "$STR_ace_refuel_TakeNozzle";
					condition = "[_player,_target] call ace_refuel_fnc_canTakeNozzle";
					statement = "[_player,_target] call ace_refuel_fnc_takeNozzle";
					exceptions[] = {"isNotInside","isNotOnLadder","isNotSwimming"};
					icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";
				};
				class ace_refuel_TurnOn
				{
					displayName = "$STR_ace_refuel_TurnOn";
					condition = "[_player,_target] call ace_refuel_fnc_canTurnOn";
					statement = "[_player,_target] call ace_refuel_fnc_turnOn";
					exceptions[] = {"isNotInside","isNotOnLadder","isNotSwimming","isNotRefueling"};
					icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";
				};
				class ace_refuel_TurnOff
				{
					displayName = "$STR_ace_refuel_TurnOff";
					condition = "[_player,_target] call ace_refuel_fnc_canTurnOff";
					statement = "[_player,_target] call ace_refuel_fnc_turnOff";
					exceptions[] = {"isNotInside","isNotOnLadder","isNotSwimming","isNotRefueling"};
					icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";
				};
				class ace_refuel_Disconnect
				{
					displayName = "$STR_ace_refuel_Disconnect";
					condition = "[_player,_target] call ace_refuel_fnc_canDisconnect";
					statement = "[_player,_target] call ace_refuel_fnc_disconnect";
					exceptions[] = {"isNotInside","isNotOnLadder","isNotSwimming"};
					icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";
				};
			};
		};
		displayName = "ace_refuel_fuelNozzle";
		scope = 1;
		scopeCurator = 1;
		model = "\z\ace\addons\refuel\data\nozzle.p3d";
	};
	class All;
	class Static: All{};
	class Building: Static{};
	class NonStrategic: Building{};
	class HouseBase: NonStrategic{};
	class House: HouseBase{};
	class House_F: House
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				selection = "";
				distance = 5;
				condition = "true";
			};
		};
	};
	class House_Small_F: House_F{};
	class AllVehicles: All
	{
		ace_refuel_flowRate = 1;
	};
	class Land: AllVehicles{};
	class LandVehicle: Land{};
	class Car: LandVehicle
	{
		ace_refuel_canReceive = 1;
	};
	class Tank: LandVehicle
	{
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
	};
	class Air: AllVehicles
	{
		ace_refuel_flowRate = 8;
	};
	class Helicopter: Air
	{
		ace_refuel_canReceive = 1;
	};
	class Helicopter_Base_F: Helicopter{};
	class Helicopter_Base_H: Helicopter_Base_F{};
	class Plane: Air
	{
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 16;
	};
	class Plane_Base_F: Plane{};
	class Ship: AllVehicles{};
	class Ship_F: Ship
	{
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
	};
	class Boat_Civil_01_base_F: Ship_F
	{
		ace_refuel_fuelCapacity = 200;
	};
	class Boat_F: Ship_F
	{
		ace_refuel_flowRate = 1;
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		ace_refuel_fuelCapacity = 300;
	};
	class Rubber_duck_base_F: Boat_F
	{
		ace_refuel_fuelCapacity = 30;
	};
	class Car_F: Car
	{
		ace_refuel_fuelCapacity = 60;
	};
	class Kart_01_Base_F: Car_F
	{
		ace_refuel_fuelCapacity = 8;
	};
	class Offroad_01_base_F: Car_F{};
	class Wheeled_APC_F: Car_F
	{
		ace_refuel_fuelCapacity = 300;
	};
	class Hatchback_01_base_F: Car_F
	{
		ace_refuel_fuelCapacity = 50;
	};
	class Quadbike_01_base_F: Car_F
	{
		ace_refuel_fuelCapacity = 10;
	};
	class MRAP_01_base_F: Car_F
	{
		ace_refuel_fuelCapacity = 230;
	};
	class MRAP_02_base_F: Car_F
	{
		ace_refuel_fuelCapacity = 230;
	};
	class MRAP_03_base_F: Car_F
	{
		ace_refuel_fuelCapacity = 230;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		ace_refuel_fuelCapacity = 269;
	};
	class Truck_F: Car_F
	{
		ace_refuel_fuelCapacity = 400;
		ace_refuel_flowRate = 2;
	};
	class Truck_01_base_F: Truck_F
	{
		ace_refuel_fuelCapacity = 583;
	};
	class B_Truck_01_transport_F: Truck_01_base_F{};
	class B_Truck_01_mover_F: B_Truck_01_transport_F{};
	class Truck_02_base_F: Truck_F
	{
		ace_refuel_fuelCapacity = 400;
	};
	class Truck_03_base_F: Truck_F
	{
		ace_refuel_fuelCapacity = 600;
	};
	class Van_01_base_F: Truck_F
	{
		ace_refuel_fuelCapacity = 80;
	};
	class Van_01_fuel_base_F: Van_01_base_F
	{
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		ace_refuel_fuelCargo = 2000;
	};
	class C_Van_01_fuel_F: Van_01_fuel_base_F
	{
		transportFuel = 0;
	};
	class I_G_Van_01_fuel_F: Van_01_fuel_base_F
	{
		transportFuel = 0;
	};
	class Tank_F: Tank
	{
		ace_refuel_fuelCapacity = 1200;
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		ace_refuel_fuelCapacity = 1400;
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F{};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{-1.08,-4.81,-0.8}};
		ace_refuel_fuelCargo = 1000;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		ace_refuel_fuelCapacity = 1000;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		ace_refuel_fuelCapacity = 660;
	};
	class MBT_01_base_F: Tank_F
	{
		ace_refuel_fuelCapacity = 1400;
	};
	class MBT_02_base_F: Tank_F
	{
		ace_refuel_fuelCapacity = 1100;
	};
	class MBT_03_base_F: Tank_F
	{
		ace_refuel_fuelCapacity = 1160;
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		ace_refuel_fuelCapacity = 830;
	};
	class MBT_02_arty_base_F: MBT_02_base_F
	{
		ace_refuel_fuelCapacity = 830;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		ace_refuel_fuelCapacity = 1450;
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		ace_refuel_fuelCapacity = 1004;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		ace_refuel_fuelCapacity = 1360;
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		ace_refuel_fuelCapacity = 3222;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		ace_refuel_fuelCapacity = 3914;
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		ace_refuel_fuelCapacity = 3914;
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		ace_refuel_fuelCapacity = 6223;
	};
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		ace_refuel_fuelCapacity = 2099;
	};
	class UAV_01_base_F: Helicopter_Base_F
	{
		ace_refuel_canReceive = 0;
	};
	class UAV_06_base_F: Helicopter_Base_F
	{
		ace_refuel_canReceive = 0;
	};
	class UAV: Plane{};
	class UAV_02_base_F: UAV
	{
		ace_refuel_fuelCapacity = 270;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		ace_refuel_fuelCapacity = 1914;
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0.99,-3.47,-0.67},{-1.04,-3.47,-0.67}};
		ace_refuel_fuelCargo = 10000;
	};
	class Truck_02_water_base_F: Truck_02_fuel_base_F
	{
		ace_refuel_fuelCargo = -1;
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0.28,-4.99,-0.3},{-0.25,-4.99,-0.3}};
		ace_refuel_fuelCargo = 10000;
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{1.3,-1.59,-0.62},{-1.16,-1.59,-0.62}};
		ace_refuel_fuelCargo = 10000;
	};
	class ReammoBox_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions{};
		};
	};
	class Slingload_base_F: ReammoBox_F{};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F{};
	class Land_Pod_Heli_Transport_04_fuel_F: Pod_Heli_Transport_04_base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{-1.49,1.41,-0.3}};
		ace_refuel_fuelCargo = 10000;
	};
	class Slingload_01_Base_F: Slingload_base_F{};
	class B_Slingload_01_Fuel_F: Slingload_01_Base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0.55,3.02,-0.5},{-0.52,3.02,-0.5}};
		ace_refuel_fuelCargo = 10000;
	};
	class O_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{-1.52,1.14,-1.18}};
		ace_refuel_fuelCargo = 10000;
	};
	class StorageBladder_base_F: NonStrategic
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "[-3.35,2.45,0.17]";
				distance = 4;
				condition = "true";
			};
		};
	};
	class Land_StorageBladder_01_F: StorageBladder_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		transportFuel = 0;
		ace_refuel_hooks[] = {{-3.35,2.45,0.17}};
		ace_refuel_fuelCargo = 60000;
	};
	class FlexibleTank_base_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "$STR_ace_interaction_MainAction";
				position = "[0, 0, 0.5]";
				distance = 4;
				condition = "true";
			};
		};
	};
	class Land_FlexibleTank_01_F: FlexibleTank_base_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0,0,0.5}};
		ace_refuel_fuelCargo = 300;
	};
	class Land_Fuelstation_Feed_F: House_Small_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0,0,-0.5}};
		ace_refuel_fuelCargo = -10;
	};
	class Land_fs_feed_F: House_Small_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{-0.4,0.022,-0.23}};
		ace_refuel_fuelCargo = -10;
	};
	class Land_FuelStation_01_pump_F: House_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0,0.4,-0.5},{0,-0.4,-0.5}};
		ace_refuel_fuelCargo = -10;
	};
	class Land_FuelStation_01_pump_malevil_F: House_F
	{
		transportFuel = 0;
		ace_refuel_hooks[] = {{0,0.4,-0.5},{0,-0.4,-0.5}};
		ace_refuel_fuelCargo = -10;
	};
	class ace_refuel_helper: Helicopter_Base_F
	{
		scope = 1;
		displayName = "Refuel Helper";
		model = "\A3\Weapons_f\empty";
		class ACE_Actions{};
		class ACE_SelfActions{};
		ace_cargo_hasCargo = 0;
		ace_cargo_space = 0;
		damageEffect = "";
		destrType = "";
		class HitPoints{};
		class Turrets{};
		class TransportItems{};
	};
};
class ACE_Tests
{
	vehicleTransportFuel = "\z\ace\addons\refuel\dev\test_debugConfigs.sqf";
};
