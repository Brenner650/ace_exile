////////////////////////////////////////////////////////////////////
//DeRap: ace_attach\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:53 2018 : 'file' last modified on Mon Apr 16 21:41:50 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_attach
	{
		name = "ACE3 - Attach";
		units[] = {};
		weapons[] = {"ACE_IR_Strobe_Item"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","eRazeri","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_attach
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\attach\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_attach
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\attach\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_attach
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\attach\XEH_clientInit.sqf'";
	};
};
class Extended_GetIn_EventHandlers
{
	class All
	{
		class ace_attach
		{
			getIn = "_this call ace_attach_fnc_handleGetIn";
		};
	};
};
class Extended_GetOut_EventHandlers
{
	class All
	{
		class ace_attach
		{
			getOut = "_this call ace_attach_fnc_handleGetOut";
		};
	};
};
class Extended_Killed_EventHandlers
{
	class All
	{
		class ace_attach
		{
			killed = "_this call ace_attach_fnc_handleKilled";
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class B_IR_Grenade: CA_Magazine
	{
		ACE_Attachable = "B_IRStrobe";
		model = "\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class O_IR_Grenade: B_IR_Grenade
	{
		ACE_Attachable = "O_IRStrobe";
		model = "\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class I_IR_Grenade: B_IR_Grenade
	{
		ACE_Attachable = "I_IRStrobe";
		model = "\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class SmokeShell;
	class Chemlight_green: SmokeShell
	{
		ACE_Attachable = "Chemlight_green";
	};
	class Chemlight_blue: Chemlight_green
	{
		ACE_Attachable = "Chemlight_blue";
	};
	class Chemlight_red: Chemlight_green
	{
		ACE_Attachable = "Chemlight_red";
	};
	class Chemlight_yellow: Chemlight_green
	{
		ACE_Attachable = "Chemlight_yellow";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_attach_AttachVehicle
				{
					displayName = "$STR_ace_attach_AttachDetach";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_DetachVehicle
				{
					displayName = "$STR_ace_attach_Detach";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
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
				class ace_attach_AttachVehicle
				{
					displayName = "$STR_ace_attach_AttachDetach";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_DetachVehicle
				{
					displayName = "$STR_ace_attach_Detach";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
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
				class ace_attach_AttachVehicle
				{
					displayName = "$STR_ace_attach_AttachDetach";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_DetachVehicle
				{
					displayName = "$STR_ace_attach_Detach";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
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
				class ace_attach_AttachVehicle
				{
					displayName = "$STR_ace_attach_AttachDetach";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_DetachVehicle
				{
					displayName = "$STR_ace_attach_Detach";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
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
				class ace_attach_AttachVehicle
				{
					displayName = "$STR_ace_attach_AttachDetach";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_DetachVehicle
				{
					displayName = "$STR_ace_attach_Detach";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
				};
			};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_attach_Attach
				{
					displayName = "$STR_ace_attach_AttachDetach";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotDragging","isNotSwimming"};
					showDisabled = 0;
					priority = 5;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_Detach
				{
					displayName = "$STR_ace_attach_Detach";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotDragging","isNotSwimming"};
					showDisabled = 0;
					priority = 5;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
				};
			};
		};
	};
	class All;
	class ACE_IR_Strobe_Effect: All
	{
		scope = 1;
		displayName = "IR Strobe";
		model = "\A3\Weapons_F\empty.p3d";
		simulation = "nvmarker";
		class NVGMarker
		{
			diffuse[] = {0.006,0.006,0.006,1};
			ambient[] = {0.005,0.005,0.005,1};
			brightness = 0.1;
			name = "pozicni blik";
			drawLightSize = 0.1;
			drawLightCenterSize = 0.003;
			activeLight = 0;
			blinking = 1;
			blinkingStartsOn = 1;
			blinkingPattern[] = {2,2};
			blinkingPatternGuarantee = 0;
			dayLight = 0;
			onlyInNvg = 1;
			useFlare = 0;
		};
		side = 7;
		accuracy = 1000;
		cost = 0;
		armor = 500;
		threat[] = {0,0,0};
		nameSound = "";
		type = 0;
		weapons[] = {};
		magazines[] = {};
		nvTarget = 1;
		destrType = "DestructNo";
		brightness = 10;
	};
	class NATO_Box_Base;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_IR_Strobe_Item
			{
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};
		};
	};
	class EAST_Box_Base;
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_IR_Strobe_Item
			{
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};
		};
	};
	class IND_Box_Base;
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_IR_Strobe_Item
			{
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Support_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_IR_Strobe_Item
			{
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_IR_Strobe_Item
			{
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_IR_Strobe_Item: ACE_ItemCore
	{
		ACE_attachable = "ACE_IR_Strobe_Effect";
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayName = "$STR_ace_attach_IrStrobe_Name";
		descriptionShort = "$STR_ace_attach_IrStrobe_Description";
		model = "\z\ace\addons\attach\data\ace_IRStrobe.p3d";
		picture = "\z\ace\addons\attach\UI\irstrobe_item.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class RscTitles
{
	class ace_attach_virtualAmmo
	{
		idd = -1;
		movingEnable = 1;
		duration = 9999999;
		fadein = 0;
		fadeout = 0;
		onLoad = "uiNamespace setVariable [""ace_attach_virtualAmmoDisplay"",_this select 0]";
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
