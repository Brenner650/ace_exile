////////////////////////////////////////////////////////////////////
//DeRap: ace_cargo\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:42:34 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_cargo
	{
		name = "ACE3 - Cargo";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","Glowbal"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_cargo_enable
	{
		displayName = "$STR_ace_cargo_ModuleSettings_enable";
		description = "$STR_ace_cargo_ModuleSettings_enable_Description";
		typeName = "BOOL";
		value = 1;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
	};
	class ace_cargo_paradropTimeCoefficent
	{
		displayName = "$STR_ace_cargo_paradropTimeCoefficent";
		description = "$STR_ace_cargo_paradropTimeCoefficent_description";
		typeName = "SCALAR";
		value = 2.5;
		category = "$STR_ace_OptionsMenu_CategoryLogistics";
		sliderSettings[] = {0,10,2.5,1};
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
					class ace_cargo_space
					{
						displayName = "$STR_ace_cargo_space_edenName";
						tooltip = "$STR_ace_cargo_space_edenDesc";
						property = "ace_cargo_space";
						control = "Edit";
						expression = "[_this,_value] call ace_cargo_fnc_setSpace;";
						defaultValue = "(if (isNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_cargo_space"")) then {getNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_cargo_space"")} else {0})";
						validate = "number";
						condition = "objectHasInventoryCargo";
						typeName = "NUMBER";
					};
					class ace_cargo_size
					{
						displayName = "$STR_ace_cargo_size_edenName";
						tooltip = "$STR_ace_cargo_size_edenDesc";
						property = "ace_cargo_size";
						control = "Edit";
						expression = "[_this,_value] call ace_cargo_fnc_setSize;";
						defaultValue = "(if (isNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_cargo_size"")) then {getNumber (configFile >> 'CfgVehicles' >> typeOf _this >> ""ace_cargo_size"")} else {-1})";
						validate = "number";
						condition = "1-objectBrain";
						typeName = "NUMBER";
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_cargo
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\cargo\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_cargo
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\cargo\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_cargo
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\cargo\XEH_postInit.sqf'";
	};
};
class Extended_Killed_EventHandlers
{
	class All
	{
		class ace_cargo
		{
			serverKilled = "call ace_cargo_fnc_handleDestroyed";
		};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription;
	};
	class ACE_Module: Module_F{};
	class ACE_moduleCargoSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_cargo_SettingsModule_DisplayName";
		icon = "\z\ace\addons\cargo\UI\Icon_Module_Cargo_ca.paa";
		category = "ACE_Logistics";
		function = "ace_cargo_fnc_moduleSettings";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enable
			{
				displayName = "$STR_ace_cargo_ModuleSettings_enable";
				description = "$STR_ace_cargo_ModuleSettings_enable_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class paradropTimeCoefficent
			{
				displayName = "$STR_ace_cargo_paradropTimeCoefficent";
				description = "$STR_ace_cargo_paradropTimeCoefficent_description";
				typeName = "SCALAR";
				defaultValue = 2.5;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_cargo_SettingsModule_Description";
			sync[] = {};
		};
	};
	class ace_cargo_makeLoadable: Logic
	{
		scope = 1;
		displayName = "Delete (Deprecated in ACE3 3.12.0)";
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
		class ACE_Cargo{};
	};
	class Tank: LandVehicle
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class Car_F;
	class Truck_F: Car_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class Truck_01_base_F: Truck_F
	{
		ace_cargo_space = 8;
	};
	class B_Truck_01_transport_F: Truck_01_base_F
	{
		ace_cargo_space = 20;
	};
	class B_Truck_01_covered_F: B_Truck_01_transport_F
	{
		ace_cargo_space = 20;
	};
	class B_Truck_01_mover_F: B_Truck_01_transport_F
	{
		ace_cargo_space = 4;
	};
	class B_Truck_01_box_F: B_Truck_01_mover_F
	{
		ace_cargo_space = 40;
	};
	class B_Truck_01_Repair_F: B_Truck_01_mover_F
	{
		ace_cargo_space = 20;
	};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		ace_cargo_space = 8;
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		ace_cargo_space = 4;
	};
	class B_Truck_01_medical_F: B_Truck_01_transport_F
	{
		ace_cargo_space = 8;
	};
	class Truck_02_base_F: Truck_F
	{
		ace_cargo_space = 20;
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
		ace_cargo_space = 20;
	};
	class Truck_02_box_base_F: Truck_02_base_F
	{
		ace_cargo_space = 12;
	};
	class Truck_02_medical_base_F: Truck_02_box_base_F
	{
		ace_cargo_space = 8;
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		ace_cargo_space = 12;
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		ace_cargo_space = 4;
	};
	class Truck_03_base_F: Truck_F
	{
		ace_cargo_space = 8;
	};
	class O_Truck_03_transport_F: Truck_03_base_F
	{
		ace_cargo_space = 20;
	};
	class O_Truck_03_covered_F: Truck_03_base_F
	{
		ace_cargo_space = 20;
	};
	class O_Truck_03_repair_F: Truck_03_base_F
	{
		ace_cargo_space = 12;
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		ace_cargo_space = 8;
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		ace_cargo_space = 4;
	};
	class O_Truck_03_medical_F: Truck_03_base_F
	{
		ace_cargo_space = 8;
	};
	class O_Truck_03_device_F: Truck_03_base_F
	{
		ace_cargo_space = 4;
	};
	class Van_01_base_F: Truck_F
	{
		ace_cargo_space = 8;
	};
	class Van_01_transport_base_F: Van_01_base_F
	{
		ace_cargo_space = 8;
	};
	class Van_01_box_base_F: Van_01_base_F
	{
		ace_cargo_space = 12;
	};
	class Van_01_fuel_base_F: Van_01_base_F
	{
		ace_cargo_space = 4;
	};
	class Quadbike_01_base_F: Car_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Kart_01_Base_F: Car_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Air;
	class Helicopter: Air
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class ParachuteBase: Helicopter
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Helicopter_Base_H;
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		ace_cargo_space = 4;
	};
	class Helicopter_Base_F;
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		ace_cargo_space = 4;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		ace_cargo_space = 8;
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		ace_cargo_space = 20;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		ace_cargo_space = 40;
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		ace_cargo_loadmasterTurrets[] = {{1}};
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class O_Heli_Transport_04_box_F: Heli_Transport_04_base_F
	{
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
	};
	class O_Heli_Transport_04_repair_F: Heli_Transport_04_base_F
	{
		ace_cargo_space = 12;
		ace_cargo_hasCargo = 1;
	};
	class O_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class O_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F{};
	class O_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		ace_cargo_space = 4;
	};
	class Plane: Air
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Plane_Base_F: Plane{};
	class Plane_Civil_01_base_F: Plane_Base_F
	{
		ace_cargo_space = 2;
		ace_cargo_hasCargo = 1;
	};
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class VTOL_02_base_F: VTOL_Base_F
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class UAV_01_base_F: Helicopter_Base_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class UAV_03_base_F: Helicopter_Base_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class UAV_06_base_F: Helicopter_Base_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Ship;
	class Ship_F: Ship
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class Boat_Civil_01_base_F: Ship_F
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class Boat_F: Ship_F{};
	class Rubber_duck_base_F: Boat_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class SDV_01_base_F: Boat_F
	{
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
	};
	class StaticWeapon: LandVehicle
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class StaticMortar;
	class Mortar_01_base_F: StaticMortar
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class ThingX;
	class Items_base_F;
	class ReammoBox_F: ThingX
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class Land_RepairDepot_01_base_F: ReammoBox_F
	{
		ace_cargo_canLoad = 0;
	};
	class B_supplyCrate_F: ReammoBox_F
	{
		ace_cargo_size = 6;
	};
	class IG_supplyCrate_F: ReammoBox_F
	{
		ace_cargo_size = 6;
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		ace_cargo_size = 6;
	};
	class Slingload_base_F: ReammoBox_F{};
	class CargoNet_01_base_F: Slingload_base_F
	{
		ace_cargo_size = 6;
	};
	class Slingload_01_Base_F: Slingload_base_F
	{
		ace_cargo_canLoad = 0;
		ace_cargo_size = -1;
	};
	class B_Slingload_01_Cargo_F: Slingload_01_Base_F
	{
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
	};
	class B_Slingload_01_Ammo_F: Slingload_01_Base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class B_Slingload_01_Medevac_F: Slingload_01_Base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class B_Slingload_01_Repair_F: Slingload_01_Base_F
	{
		ace_cargo_space = 12;
		ace_cargo_hasCargo = 1;
	};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F
	{
		ace_cargo_canLoad = 0;
		ace_cargo_size = -1;
	};
	class Land_Pod_Heli_Transport_04_ammo_F: Pod_Heli_Transport_04_base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class Land_Pod_Heli_Transport_04_box_F: Pod_Heli_Transport_04_base_F
	{
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
	};
	class Land_Pod_Heli_Transport_04_repair_F: Pod_Heli_Transport_04_base_F
	{
		ace_cargo_space = 12;
		ace_cargo_hasCargo = 1;
	};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon
	{
		ace_cargo_canLoad = 0;
		ace_cargo_size = -1;
	};
	class Land_Pod_Heli_Transport_04_covered_F: Pod_Heli_Transport_04_crewed_base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class Land_Pod_Heli_Transport_04_medevac_F: Pod_Heli_Transport_04_crewed_base_F
	{
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
	};
	class PlasticCase_01_base_F: Items_base_F
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	class Land_PlasticCase_01_large_F: PlasticCase_01_base_F
	{
		ace_cargo_size = 2;
	};
	class MetalCase_01_base_F: Items_base_F
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	class Land_MetalCase_01_large_F: MetalCase_01_base_F
	{
		ace_cargo_size = 2;
	};
	class Land_CanisterFuel_F: Items_base_F
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	class RoadCone_F: ThingX
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	class RoadBarrier_F: RoadCone_F
	{
		ace_cargo_size = 2;
	};
	class Lamps_base_F;
	class Land_PortableLight_single_F: Lamps_base_F
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class FloatingStructure_F;
	class Land_Camping_Light_F: FloatingStructure_F
	{
		ace_cargo_size = 0.2;
		ace_cargo_canLoad = 1;
	};
	class Land_Camping_Light_off_F: ThingX
	{
		ace_cargo_size = 0.2;
		ace_cargo_canLoad = 1;
	};
	class Scrapyard_base_F;
	class Land_PaperBox_closed_F: Scrapyard_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 10;
		ace_cargo_hasCargo = 1;
		ace_cargo_size = 11;
		ace_cargo_canLoad = 1;
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
	class Constructions_base_F;
	class Land_WoodenBox_F: Constructions_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 2;
		ace_cargo_hasCargo = 2;
		ace_cargo_size = 3;
		ace_cargo_canLoad = 1;
		maximumLoad = 2000;
		transportMaxBackpacks = 12;
		transportMaxMagazines = 64;
		transportMaxWeapons = 12;
	};
	class Land_WoodenCrate_01_F: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 3;
		ace_cargo_hasCargo = 3;
		ace_cargo_size = 3;
		ace_cargo_canLoad = 1;
		maximumLoad = 2000;
		transportMaxBackpacks = 12;
		transportMaxMagazines = 64;
		transportMaxWeapons = 12;
	};
	class Cargo_base_F: ThingX
	{
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
		ace_cargo_size = 4;
		ace_cargo_canLoad = 1;
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
	class Cargo10_base_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 14;
		ace_cargo_size = 15;
	};
	class Land_Cargo20_blue_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_brick_red_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_cyan_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_grey_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_light_blue_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_light_green_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_military_green_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_orange_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_red_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_sand_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_vr_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_white_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo20_yellow_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 49;
		ace_cargo_size = 50;
	};
	class Land_Cargo40_blue_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_brick_red_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_cyan_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_grey_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_light_blue_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_light_green_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_military_green_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_orange_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_red_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_sand_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_vr_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_white_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_Cargo40_yellow_F: Cargo_base_F
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 99;
		ace_cargo_size = 100;
	};
	class Land_CargoBox_V1_F: ThingX
	{
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
		ace_cargo_space = 7;
		ace_cargo_hasCargo = 1;
		ace_cargo_size = 7;
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
	class Land_PaperBox_01_small_closed_base_F: Items_base_F
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		maximumLoad = 1000;
		transportMaxBackpacks = 12;
		transportMaxMagazines = 64;
		transportMaxWeapons = 12;
	};
	class Box_UAV_06_base_F: Items_base_F
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	class Land_FoodSack_01_full_base_F: Items_base_F
	{
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	class Land_FoodSack_01_cargo_base_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
	class Land_FoodSack_01_large_base_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
	class Land_FoodSack_01_small_base_F: Items_base_F
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class Land_PaperBox_01_open_boxes_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
	class Land_PaperBox_01_open_water_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
	class Land_PaperBox_01_open_empty_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
	class Land_PaperBox_01_small_stacked_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
	class Land_WaterBottle_01_stack_F: Items_base_F
	{
		ace_cargo_size = 7;
		ace_cargo_canLoad = 1;
	};
};
class ACE_gui_backgroundBase
{
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "RobotoCondensed";
	text = "";
	sizeEx = 0.032;
};
class ACE_gui_editBase
{
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.8862])",1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorDisabled[] = {1,1,1,0.25};
};
class ACE_gui_buttonBase
{
	idc = -1;
	type = 16;
	style = 0;
	text = "";
	action = "";
	x = 0.0;
	y = 0.0;
	w = 0.25;
	h = 0.04;
	size = 0.03921;
	sizeEx = 0.03921;
	color[] = {1.0,1.0,1.0,1};
	color2[] = {1.0,1.0,1.0,1};
	colorBackground[] = {1,1,1,0.95};
	colorbackground2[] = {1,1,1,0.95};
	colorDisabled[] = {1,1,1,0.6};
	colorFocused[] = {1,1,1,1};
	colorBackgroundFocused[] = {1,1,1,1};
	periodFocus = 1.2;
	periodOver = 0.8;
	default = 0;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0.0;
		top = 0.0;
		w = 0.0;
		h = 0.0;
	};
	class TextPos
	{
		left = 0.002;
		top = 0.0004;
		right = 0.0;
		bottom = 0.0;
	};
	textureNoShortcut = "";
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.8)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	period = 0.5;
	font = "RobotoCondensed";
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.07,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "center";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
};
class ACE_gui_RscProgress
{
	type = 8;
	style = 0;
	colorFrame[] = {1,1,1,0.7};
	colorBar[] = {1,1,1,0.7};
	texture = "#(argb,8,8,3)color(1,1,1,0.7)";
	x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w = "38 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class ACE_gui_staticBase
{
	idc = -1;
	type = 0;
	x = 0.0;
	y = 0.0;
	w = 0.183825;
	h = 0.104575;
	style = 0;
	font = "RobotoCondensed";
	sizeEx = 0.03921;
	colorText[] = {0.95,0.95,0.95,1.0};
	colorBackground[] = {0,0,0,0};
	text = "";
};
class RscListBox;
class ACE_gui_listBoxBase: RscListBox
{
	type = 5;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = 0.03921;
	color[] = {1,1,1,1};
	colorText[] = {0.543,0.5742,0.4102,1.0};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,1};
	colorSelectBackground2[] = {0.543,0.5742,0.4102,1.0};
	colorDisabled[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])",0.25};
	period = 1.2;
	rowHeight = 0.03;
	colorBackground[] = {0,0,0,1};
	maxHistoryDelay = 1.0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	class ListScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "";
		arrowFull = "";
		arrowEmpty = "";
		border = "";
	};
};
class ACE_gui_listNBox
{
	type = 102;
	style = 16;
	w = 0.4;
	h = 0.4;
	font = "RobotoCondensed";
	sizeEx = 0.031;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	columns[] = {0.0};
	color[] = {1,1,1,1};
	rowHeight = 0.03;
	colorBackground[] = {0,0,0,0.2};
	colorText[] = {1,1,1,1.0};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,0.0};
	colorSelectBackground2[] = {0.0,0.0,0.0,0.5};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	rows = 1;
	drawSideArrows = 0;
	idcLeft = -1;
	idcRight = -1;
	maxHistoryDelay = 1;
	soundSelect[] = {"",0.1,1};
	period = 1;
	shadow = 2;
	class ScrollBar
	{
		arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
		arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
		border = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ListScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};
class RscCombo;
class ACE_gui_comboBoxBase: RscCombo
{
	idc = -1;
	type = 4;
	style = "0x10 + 0x200";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.035;
	color[] = {0,0,0,0.6};
	colorActive[] = {1,0,0,1};
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.7};
	colorText[] = {1,1,1,1};
	arrowEmpty = "";
	arrowFull = "";
	wholeHeight = 0.45;
	font = "RobotoCondensed";
	sizeEx = 0.031;
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	maxHistoryDelay = 1.0;
	class ScrollBar
	{
		color[] = {0.3,0.3,0.3,0.6};
		colorActive[] = {0.3,0.3,0.3,1};
		colorDisabled[] = {0.3,0.3,0.3,0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "";
	};
	class ComboScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {0.3,0.3,0.3,0.6};
		colorActive[] = {0.3,0.3,0.3,1};
		colorDisabled[] = {0.3,0.3,0.3,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};
class ACE_gui_mapBase
{
	moveOnEdges = 1;
	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 *           (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "SafeZoneWAbs";
	h = "SafeZoneH - 1.5 *           (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	type = 100;
	style = 48;
	shadow = 0;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 3;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	showCountourInterval = 0;
	scaleMin = 0.001;
	scaleMax = 1.0;
	scaleDefault = 0.16;
	maxSatelliteAlpha = 0.85;
	alphaFadeStartScale = 0.35;
	alphaFadeEndScale = 0.4;
	colorBackground[] = {0.969,0.957,0.949,1.0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorForest[] = {0.624,0.78,0.388,0.5};
	colorForestBorder[] = {0.0,0.0,0.0,0.0};
	colorRocks[] = {0.0,0.0,0.0,0.3};
	colorRocksBorder[] = {0.0,0.0,0.0,0.0};
	colorLevels[] = {0.286,0.177,0.094,0.5};
	colorMainCountlines[] = {0.572,0.354,0.188,0.5};
	colorCountlines[] = {0.572,0.354,0.188,0.25};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
	colorPowerLines[] = {0.1,0.1,0.1,1.0};
	colorRailWay[] = {0.8,0.2,0.0,1.0};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorInactive[] = {1.0,1.0,1.0,0.5};
	colorOutside[] = {0.0,0.0,0.0,1.0};
	colorTracks[] = {0.84,0.76,0.65,0.15};
	colorTracksFill[] = {0.84,0.76,0.65,1.0};
	colorRoads[] = {0.7,0.7,0.7,1.0};
	colorRoadsFill[] = {1.0,1.0,1.0,1.0};
	colorMainRoads[] = {0.9,0.5,0.3,1.0};
	colorMainRoadsFill[] = {1.0,0.6,0.4,1.0};
	colorGrid[] = {0.1,0.1,0.1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	colorText[] = {1,1,1,0.85};
	font = "RobotoCondensed";
	sizeEx = 0.027;
	stickX[] = {0.2,{"Gamma",1.0,1.5}};
	stickY[] = {0.2,{"Gamma",1.0,1.5}};
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	fontLabel = "RobotoCondensed";
	sizeExLabel = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontGrid = "TahomaB";
	sizeExGrid = 0.02;
	fontUnits = "TahomaB";
	sizeExUnits = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontNames = "RobotoCondensed";
	sizeExNames = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	fontInfo = "RobotoCondensed";
	sizeExInfo = "(      (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontLevel = "TahomaB";
	sizeExLevel = 0.02;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	class ActiveMarker
	{
		color[] = {0.3,0.1,0.9,1.0};
		size = 50;
	};
	class Legend
	{
		x = "SafeZoneX +          (     ((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 *          (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = "10 *           (     ((safezoneW / safezoneH) min 1.2) / 40)";
		h = "3.5 *          (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font = "RobotoCondensed";
		sizeEx = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorBackground[] = {1,1,1,0.5};
		color[] = {0,0,0,1};
	};
	class Task
	{
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		color[] = {"(profilenamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCreated[] = {1,1,1,1};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		size = 27;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Waypoint
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class WaypointCompleted
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class CustomMark
	{
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		size = 24;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {0,0,0,1};
	};
	class Command
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {1,1,1,1};
	};
	class Bush
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = "14/2";
		importance = "0.2 * 14 * 0.05 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class busstop
	{
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class fuelstation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class hospital
	{
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class church
	{
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class lighthouse
	{
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class power
	{
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powersolar
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powerwave
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powerwind
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class quay
	{
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class shipwreck
	{
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class transmitter
	{
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class watertower
	{
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Chapel
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Fortress
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Fountain
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		size = 11;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Ruin
	{
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Stack
	{
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Tourism
	{
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class ViewTower
	{
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
};
class ace_cargo_menu
{
	idd = 314614;
	movingEnable = 1;
	onLoad = "[_this select 0] call ace_cargo_fnc_onMenuOpen";
	onUnload = "uiNamespace setVariable [""ace_cargo_menuDisplay"",nil];";
	class controlsBackground
	{
		class HeaderBackground: ACE_gui_backgroundBase
		{
			idc = -1;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "13 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "13 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class CenterBackground: HeaderBackground
		{
			y = "2.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			h = "13.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "#(argb,8,8,3)color(0,0,0,0.8)";
			colorText[] = {0,0,0,"(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
			colorBackground[] = {0,0,0,"(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
		};
	};
	class controls
	{
		class HeaderName
		{
			idc = 1;
			type = 0;
			x = "13 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "13 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = "0x00+ 0x100";
			font = "RobotoCondensed";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorText[] = {0.95,0.95,0.95,0.75};
			colorBackground[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
			text = "$STR_ace_cargo_cargoMenu";
		};
		class SubHeader: HeaderName
		{
			idc = 2;
			x = "13 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "13 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			colorText[] = {1,1,1.0,0.9};
			colorBackground[] = {0,0,0,0};
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			text = "";
		};
		class cargoList: ACE_gui_listBoxBase
		{
			idc = 100;
			x = "13.1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.8 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			rowHeight = 0.03;
			colorBackground[] = {0,0,0,0.2};
			colorText[] = {1,1,1,1.0};
			colorScrollbar[] = {0.95,0.95,0.95,1};
			colorSelect[] = {1,1,1,1.0};
			colorSelect2[] = {1,1,1,1.0};
			colorSelectBackground[] = {0.3,0.3,0.3,1.0};
			colorSelectBackground2[] = {0.3,0.3,0.3,1.0};
		};
		class btnCancel: ACE_gui_buttonBase
		{
			text = "$STR_DISP_CANCEL";
			idc = 11;
			x = "13.1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.8)";
			animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
			color[] = {1,1,1,1};
			color2[] = {0,0,0,1};
			colorBackgroundFocused[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorbackground2[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,1};
			colorFocused[] = {0,0,0,1};
			periodFocus = 1;
			periodOver = 1;
			action = "closeDialog 0";
		};
		class btnUnload: btnCancel
		{
			text = "$STR_ace_cargo_unloadObject";
			idc = 12;
			x = "20.9 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "[] call ace_cargo_fnc_startUnload;";
		};
	};
};
