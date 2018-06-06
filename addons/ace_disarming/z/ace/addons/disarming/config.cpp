////////////////////////////////////////////////////////////////////
//DeRap: ace_disarming\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:42:49 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_disarming
	{
		name = "ACE3 - Disarming";
		units[] = {};
		weapons[] = {"ACE_DebugPotato"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ACE_Interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"PabstMirror"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_disarming
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\disarming\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_disarming
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\disarming\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_disarming
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\disarming\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_DisarmInventory
				{
					displayName = "$STR_ace_disarming_OpenInventory";
					distance = 3.5;
					condition = "[_player,_target] call ace_disarming_fnc_canPlayerDisarmUnit";
					statement = "[_player,_target] call ace_disarming_fnc_openDisarmDialog";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\disarming\UI\disarm.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_DebugPotato: ACE_ItemCore
	{
		displayName = "ACE Potato (debug)";
		descriptionShort = "Glorious Potato<br/>If you see this in game it means someone fucked up";
		picture = "\z\ace\addons\disarming\UI\potato_ca.paa";
		scope = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class RscText;
class RscPicture;
class RscActiveText;
class RscListBox;
class ace_disarming_remoteInventory
{
	idd = -1;
	movingEnable = 0;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "uiNamespace setVariable ['ACE_remoteInventory', _this select 0];";
	duration = 2147483647;
	fadein = 0;
	fadeout = 0;
	class Colors
	{
		dragValidBgr[] = {"(profilenamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_B',1])",0.5};
		dragInvalidBgr[] = {"(profilenamespace getVariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getVariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getVariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		dragValidBar[] = {"(profilenamespace getVariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getVariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getVariable ['IGUI_WARNING_RGB_B',0.0])",0.5};
		dragInvalidBar[] = {"(profilenamespace getVariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getVariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getVariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		progressBar[] = {"(profilenamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_B',1])",1};
		progressBarBgr[] = {"(profilenamespace getVariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getVariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getVariable ['IGUI_BCG_RGB_B',1])",0.75};
		highlight[] = {"(profilenamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_B',1])",0.5};
	};
	class controlsBackground{};
	class controls
	{
		class CA_ContainerBackground: RscText
		{
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(12 * (((safezoneW / safezoneH) min 1.2) / 40)),(12 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(22.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(22.5 * (safeZoneH / 30))]";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class CA_PlayerBackground: RscText
		{
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(14.6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(14.6 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(2 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(24.4 * (((safezoneW / safezoneH) min 1.2) / 40)),(24.4 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(21.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(21.5 * (safeZoneH / 30))]";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TitleBackground: RscText
		{
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(14.6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(14.6 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(24.4 * (((safezoneW / safezoneH) min 1.2) / 40)),(24.4 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(1 * (safeZoneH / 30))]";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PlayersName: RscText
		{
			idc = 111;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(15.6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(15.6 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(19.8 * (((safezoneW / safezoneH) min 1.2) / 40)),(19.8 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(1 * (safeZoneH / 30))]";
		};
		class RankBackground: RscText
		{
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(15.1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(15.1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1.25 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1.25 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(0.6 * (((safezoneW / safezoneH) min 1.2) / 40)),(0.6 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(0.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(0.6 * (safeZoneH / 30))]";
			colorBackground[] = {1,1,1,0.2};
		};
		class RankPicture: RscPicture
		{
			idc = 1203;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(15.1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(15.1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1.25 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1.25 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(0.6 * (((safezoneW / safezoneH) min 1.2) / 40)),(0.6 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(0.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(0.6 * (safeZoneH / 30))]";
		};
		class ButtonBack: RscActiveText
		{
			idc = -1;
			style = 48;
			color[] = {1,1,1,0.7};
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(38 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(38 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * (((safezoneW / safezoneH) min 1.2) / 40)),(1 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(1 * (safeZoneH / 30))]";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "$STR_DISP_OPT_CLOSE";
			onButtonClick = "closeDialog 0";
		};
		class ExternalContainerBackground: RscPicture
		{
			colorText[] = {1,1,1,0.1};
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(1.5 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(3.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(3.7 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(11 * (((safezoneW / safezoneH) min 1.2) / 40)),(11 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(18.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(18.4 * (safeZoneH / 30))]";
		};
		class PlayerContainerBackground: ExternalContainerBackground
		{
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(15.1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(15.1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(6 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(11 * (((safezoneW / safezoneH) min 1.2) / 40)),(11 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(14 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(14 * (safeZoneH / 30))]";
		};
		class GroundTitleBackground: RscText
		{
			idc = -1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(12 * (((safezoneW / safezoneH) min 1.2) / 40)),(12 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(1 * (safeZoneH / 30))]";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class GroundName: RscText
		{
			idc = -1;
			text = "$STR_cfgVehicles_WeaponHolder0";
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(1 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(12 * (((safezoneW / safezoneH) min 1.2) / 40)),(12 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(1 * (safeZoneH / 30))]";
		};
		class GroundContainer: RscListBox
		{
			idc = 632;
			sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx2 = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "1.75 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 0;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			itemBackground[] = {1,1,1,0.2};
			itemSpacing = 0.001;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(1.5 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
			y = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)),(2.5 * (safeZoneH / 30) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2))]";
			w = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(11 * (((safezoneW / safezoneH) min 1.2) / 40)),(11 * (safeZoneH / 40))]";
			h = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)),(21 * (safeZoneH / 30))]";
		};
		class UniformContainer: GroundContainer
		{
			idc = 633;
			canDrag = 1;
			x = "linearConversion [0,2,(missionNamespace getVariable [""ace_inventory_inventoryDisplaySize"",0]),(15.1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)),(15.1 * (safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2))]";
		};
	};
};
