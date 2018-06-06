////////////////////////////////////////////////////////////////////
//DeRap: ace_map\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:45:42 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_map
	{
		name = "ACE3 - Map";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","Rocko","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"ACE_FlashlightProxy_White","ACE_FlashlightProxy_Red","ACE_FlashlightProxy_Blue","ACE_FlashlightProxy_Green","ACE_FlashlightProxy_Yellow","ACE_FlashlightProxy_Orange"};
	};
};
class RscControlsGroup;
class RscActiveText;
class RscPicture;
class RscText;
class RscObject;
class RscButton;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenu;
class RscEdit;
class ACE_Settings
{
	class ace_map_BFT_Interval
	{
		movedToSQF = 1;
	};
	class ace_map_BFT_Enabled
	{
		movedToSQF = 1;
	};
	class ace_map_BFT_HideAiGroups
	{
		movedToSQF = 1;
	};
	class ace_map_BFT_ShowPlayerNames
	{
		movedToSQF = 1;
	};
	class ace_map_mapIllumination
	{
		movedToSQF = 1;
	};
	class ace_map_mapGlow
	{
		movedToSQF = 1;
	};
	class ace_map_mapShake
	{
		movedToSQF = 1;
	};
	class ace_map_mapLimitZoom
	{
		movedToSQF = 1;
	};
	class ace_map_mapShowCursorCoordinates
	{
		movedToSQF = 1;
	};
	class ace_map_defaultChannel
	{
		movedToSQF = 1;
	};
};
class Cfg3DEN
{
	class Group
	{
		class AttributeCategories
		{
			class ace_attributes
			{
				class Attributes
				{
					class ace_map_hideBlueForceMarker
					{
						property = "ace_map_hideBlueForceMarker";
						control = "Checkbox";
						displayName = "$STR_ace_map_disableBFT";
						tooltip = "$STR_ace_map_disableBFT_description";
						expression = "if (_value) then {[{(_this select 0) setVariable ['%s', _this select 1, true];},[_this,_value]] call CBA_fnc_execNextFrame};";
						typeName = "BOOL";
						defaultValue = "(false)";
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_map
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\map\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_map
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\map\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_map
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\map\XEH_postInitClient.sqf'";
		serverInit = "call compile preProcessFileLineNumbers '\z\ace\addons\map\XEH_postInitServer.sqf'";
	};
};
class CfgMarkers
{
	class Flag;
	class b_unknown: Flag
	{
		scope = 2;
	};
	class c_unknown: b_unknown
	{
		scope = 1;
	};
	class group_0: b_unknown
	{
		scope = 1;
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_MapFlashlight
			{
				displayName = "$STR_ace_map_Action_Flashlights";
				icon = "\a3\ui_f\data\IGUI\Cfg\VehicleToggles\lightsiconon_ca.paa";
				condition = "ace_map_mapIllumination&& visibleMap && {count ([ACE_player] call ace_map_fnc_getUnitFlashlights) > 0}";
				statement = "true";
				exceptions[] = {"isNotDragging","notOnMap","isNotInside","isNotSitting"};
				insertChildren = "_this call ace_map_fnc_compileFlashlightMenu";
				showDisabled = 0;
				priority = 99;
			};
		};
	};
	class ACE_Module;
	class ACE_ModuleMap: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_map_Module_DisplayName";
		function = "ace_map_fnc_moduleMap";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\map\UI\Icon_Module_Map_ca.paa";
		class Arguments
		{
			class MapIllumination
			{
				displayName = "$STR_ace_map_MapIllumination_DisplayName";
				description = "$STR_ace_map_MapIllumination_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class MapGlow
			{
				displayName = "$STR_ace_map_MapGlow_DisplayName";
				description = "$STR_ace_map_MapGlow_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class MapShake
			{
				displayName = "$STR_ace_map_MapShake_DisplayName";
				description = "$STR_ace_map_MapShake_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class MapLimitZoom
			{
				displayName = "$STR_ace_map_MapLimitZoom_DisplayName";
				description = "$STR_ace_map_MapLimitZoom_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class MapShowCursorCoordinates
			{
				displayName = "$STR_ace_map_MapShowCursorCoordinates_DisplayName";
				description = "$STR_ace_map_MapShowCursorCoordinates_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class DefaultChannel
			{
				displayName = "$STR_ace_map_DefaultChannel_DisplayName";
				description = "$STR_ace_map_DefaultChannel_Description";
				typeName = "NUMBER";
				class values
				{
					class disable
					{
						name = "$STR_ace_common_Disabled";
						value = -1;
						default = 1;
					};
					class global
					{
						name = "$STR_channel_global";
						value = 0;
					};
					class side
					{
						name = "$STR_channel_side";
						value = 1;
					};
					class command
					{
						name = "$STR_channel_command";
						value = 2;
					};
					class group
					{
						name = "$STR_channel_group";
						value = 3;
					};
					class vehicle
					{
						name = "$STR_channel_vehicle";
						value = 4;
					};
					class direct
					{
						name = "$STR_channel_direct";
						value = 5;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_map_Module_Description";
		};
	};
	class ACE_ModuleBlueForceTracking: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_map_BFT_Module_DisplayName";
		function = "ace_map_fnc_blueForceTrackingModule";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\map\UI\Icon_Module_BFTracking_ca.paa";
		class Arguments
		{
			class Enabled
			{
				displayName = "$STR_ace_map_BFT_Enabled_DisplayName";
				description = "$STR_ace_map_BFT_Enabled_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class Interval
			{
				displayName = "$STR_ace_map_BFT_Interval_DisplayName";
				description = "$STR_ace_map_BFT_Interval_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class HideAiGroups
			{
				displayName = "$STR_ace_map_BFT_HideAiGroups_DisplayName";
				description = "$STR_ace_map_BFT_HideAiGroups_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class ShowPlayerNames
			{
				displayName = "$STR_ace_map_BFT_ShowPlayerNames_DisplayName";
				description = "$STR_ace_map_BFT_ShowPlayerNames_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_map_BFT_Module_Description";
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashlightItem_Base_F;
	class acc_flashlight: ItemCore
	{
		class ItemInfo: InventoryFlashlightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class acc_flashlight_pistol: ItemCore
	{
		class ItemInfo: InventoryFlashlightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
};
class CfgAmmo
{
	class Grenade;
	class ACE_FlashlightProxy_White: Grenade
	{
		effectsSmoke = "ACE_FlashlightEffect_White";
		explosionTime = 0.01;
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		hit = 0;
		model = "\A3\Weapons_f\empty.p3d";
		simulation = "shotSmokeX";
		smokeColor[] = {1,1,1,1};
		timeToLive = "1e10";
		impactArmor[] = {};
		impactConcrete[] = {};
		impactDefault[] = {};
		impactGlass[] = {};
		impactGlassArmored[] = {};
		impactGroundHard[] = {};
		impactGroundSoft[] = {};
		impactIron[] = {};
		impactMan[] = {};
		impactMetal[] = {};
		impactMetalPlate[] = {};
		impactMetalPlastic[] = {};
		impactRubber[] = {};
		impactTyre[] = {};
		impactWater[] = {};
		impactWood[] = {};
	};
	class ACE_FlashlightProxy_Red: ACE_FlashlightProxy_White
	{
		effectsSmoke = "ACE_FlashlightEffect_Red";
	};
	class ACE_FlashlightProxy_Blue: ACE_FlashlightProxy_White
	{
		effectsSmoke = "ACE_FlashlightEffect_Blue";
	};
	class ACE_FlashlightProxy_Green: ACE_FlashlightProxy_White
	{
		effectsSmoke = "ACE_FlashlightEffect_Green";
	};
	class ACE_FlashlightProxy_Yellow: ACE_FlashlightProxy_White
	{
		effectsSmoke = "ACE_FlashlightEffect_Yellow";
	};
	class ACE_FlashlightProxy_Orange: ACE_FlashlightProxy_White
	{
		effectsSmoke = "ACE_FlashlightEffect_Orange";
	};
};
class CfgSounds
{
	class ace_map_flashlightClick
	{
		name = "ace_map_flashlightClick";
		sound[] = {"\a3\sounds_f\weapons\Other\dry4.wss",0.2,2};
		titles[] = {};
	};
};
class CfgLights
{
	class Chemlight_Blue;
	class ACE_FlashlightLight_White: Chemlight_Blue
	{
		brightness = 100;
		color[] = {1,1,1,1};
		diffuse[] = {1,1,1};
		intensity = 100;
		position[] = {0,0,0};
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 10000;
			start = 0.075;
		};
	};
	class ACE_FlashlightLight_Red: ACE_FlashlightLight_White
	{
		diffuse[] = {1,0,0};
	};
	class ACE_FlashlightLight_Blue: ACE_FlashlightLight_White
	{
		diffuse[] = {0.25,0.25,1};
	};
	class ACE_FlashlightLight_Green: ACE_FlashlightLight_White
	{
		diffuse[] = {0,1,0};
	};
	class ACE_FlashlightLight_Yellow: ACE_FlashlightLight_White
	{
		diffuse[] = {1,1,0.4};
	};
	class ACE_FlashlightLight_Orange: ACE_FlashlightLight_White
	{
		diffuse[] = {1,0.65,0};
	};
};
class ACE_FlashlightEffect_White
{
	class Light1
	{
		simulation = "light";
		type = "ACE_FlashlightLight_White";
	};
};
class ACE_FlashlightEffect_Red
{
	class Light1
	{
		simulation = "light";
		type = "ACE_FlashlightLight_Red";
	};
};
class ACE_FlashlightEffect_Blue
{
	class Light1
	{
		simulation = "light";
		type = "ACE_FlashlightLight_Blue";
	};
};
class ACE_FlashlightEffect_Green
{
	class Light1
	{
		simulation = "light";
		type = "ACE_FlashlightLight_Green";
	};
};
class ACE_FlashlightEffect_Yellow
{
	class Light1
	{
		simulation = "light";
		type = "ACE_FlashlightLight_Yellow";
	};
};
class ACE_FlashlightEffect_Orange
{
	class Light1
	{
		simulation = "light";
		type = "ACE_FlashlightLight_Orange";
	};
};
class RscMapControl
{
	maxSatelliteAlpha = 0.5;
	colorTracks[] = {0.2,0.13,0,1};
	colorTracksFill[] = {1,0.88,0.65,0.3};
	colorRoads[] = {0.2,0.13,0,1};
	colorRoadsFill[] = {1,0.88,0.65,1};
	colorMainRoads[] = {0.0,0.0,0.0,1};
	colorMainRoadsFill[] = {0.94,0.69,0.2,1};
	colorRailWay[] = {0.8,0.2,0,1};
	colorGrid[] = {0.05,0.1,0,0.6};
	colorGridMap[] = {0.05,0.1,0,0.4};
	colorBackground[] = {0.929412,0.929412,0.929412,1.0};
	colorOutside[] = {0.929412,0.929412,0.929412,1.0};
	colorCountlines[] = {0.647059,0.533333,0.286275,1};
	colorMainCountlines[] = {0.858824,0,0,1};
	colorForest[] = {0.6,0.8,0.2,0.25};
	colorLevels[] = {0.0,0.0,0.0,1.0};
	colorRocks[] = {0.5,0.5,0.5,0.5};
	sizeExLevel = 0.03;
	showCountourInterval = 1;
	sizeExGrid = 0.032;
};
class RscMap;
class RscDisplayArcadeMap_Layout_2: RscMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			class Bush
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 14;
				importance = "0.2 * 14 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class SmallTree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.6 * 12 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Tree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.9 * 16 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Legend
			{
				x = "SafeZoneX+SafeZoneW-.340";
				y = "SafeZoneY+SafeZoneH-.152";
				font = "RobotoCondensed";
				w = 0.34;
				h = 0.152;
				sizeEx = 0.03921;
				colorBackground[] = {0.906,0.901,0.88,0.5};
				color[] = {0,0,0,0.75};
			};
		};
	};
};
class RscDisplayArcadeMap_Layout_6: RscMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			class Bush
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 14;
				importance = "0.2 * 14 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class SmallTree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.6 * 12 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Tree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.9 * 16 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Legend
			{
				x = "SafeZoneX+SafeZoneW-.340";
				y = "SafeZoneY+SafeZoneH-.152";
				font = "RobotoCondensed";
				w = 0.34;
				h = 0.152;
				sizeEx = 0.03921;
				colorBackground[] = {0.906,0.901,0.88,0.5};
				color[] = {0,0,0,0.75};
			};
		};
	};
};
class RscDisplayMainMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			onDraw = "[ctrlParent (_this select 0)] call ace_map_fnc_onDrawMap";
			class Bush
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 14;
				importance = "0.2 * 14 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class SmallTree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.6 * 12 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Tree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.9 * 16 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Legend
			{
				x = "SafeZoneX+SafeZoneW-.340";
				y = "SafeZoneY+SafeZoneH-.152";
				font = "RobotoCondensed";
				w = 0.34;
				h = 0.152;
				sizeEx = 0.03921;
				colorBackground[] = {0.906,0.901,0.88,0.5};
				color[] = {0,0,0,0.75};
			};
		};
	};
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					text = "";
					w = 0;
					h = 0;
					sizeEx = 0;
					onButtonClick = "";
				};
			};
		};
	};
	class objects
	{
		class Compass: RscObject
		{
			scale = 0.7;
			zoomDuration = 0;
		};
	};
};
class RscDisplayDiary
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					text = "";
					w = 0;
					h = 0;
					sizeEx = 0;
					onButtonClick = "";
				};
				class CA_PlayerName: RscText
				{
					x = "2 *    ( ((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class ProfilePicture: RscPicture
				{
					x = "13.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class ProfileBackground: RscText
				{
					x = "13.3 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Separator1: RscPicture
				{
					x = "14.5 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
				};
			};
		};
	};
};
class RscDisplayGetReady: RscDisplayMainMap
{
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			onDraw = "[ctrlParent (_this select 0)] call ace_map_fnc_onDrawMap";
			class Bush
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 14;
				importance = "0.2 * 14 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class SmallTree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.6 * 12 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Tree
			{
				icon = "";
				color[] = {0.45,0.64,0.33,0.0};
				size = 12;
				importance = "0.9 * 16 * 0.05";
				coefMin = 0.25;
				coefMax = 4;
			};
			class Legend
			{
				x = "SafeZoneX+SafeZoneW-.340";
				y = "SafeZoneY+SafeZoneH-.152";
				font = "RobotoCondensed";
				w = 0.34;
				h = 0.152;
				sizeEx = 0.03921;
				colorBackground[] = {0.906,0.901,0.88,0.5};
				color[] = {0,0,0,0.75};
			};
		};
	};
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					text = "";
					w = 0;
					h = 0;
					sizeEx = 0;
					onButtonClick = "";
				};
			};
		};
	};
};
class RscDisplayClientGetReady: RscDisplayGetReady
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					text = "";
					w = 0;
					h = 0;
					sizeEx = 0;
					onButtonClick = "";
				};
			};
		};
	};
};
class RscDisplayServerGetReady: RscDisplayGetReady
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					text = "";
					w = 0;
					h = 0;
					sizeEx = 0;
					onButtonClick = "";
				};
			};
		};
	};
};
