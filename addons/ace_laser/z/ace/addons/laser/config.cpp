////////////////////////////////////////////////////////////////////
//DeRap: ace_laser\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:45:38 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_laser
	{
		name = "ACE3 - Laser";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_laser_dispersionCount
	{
		value = 2;
		typeName = "SCALAR";
		displayName = "$STR_ace_laser_dispersionCount_displayName";
		sliderSettings[] = {0,5,2,-1};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_laser
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\laser\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_laser
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\laser\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_laser
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\laser\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class All;
	class LaserTarget: All
	{
		class EventHandlers
		{
			class ace_laser
			{
				init = "_this call ace_laser_fnc_handleLaserTargetCreation";
			};
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class Laserdesignator: Binocular
	{
		visionMode[] = {"Normal","NVG"};
	};
};
class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class RscText;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscPictureKeepAspect;
class RscInGameUI
{
	class RscOptics_LaserDesignator
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group"};
		onLoad = "uiNameSpace setVariable ['ACE_RscOptics_LaserDesignator',(_this select 0)];";
		onUnload = "uiNameSpace setVariable ['ACE_RscOptics_LaserDesignator',nil];";
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			x = "0 *         (0.01875 * SafezoneH) +         (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 *         (0.025 * SafezoneH) +         (SafezoneY)";
			w = "53.5 *         (0.01875 * SafezoneH)";
			h = "40 *         (0.025 * SafezoneH)";
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class controls
			{
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "43.85 *         (0.01875 * SafezoneH)";
					y = "19.6 *         (0.025 * SafezoneH)";
					w = "4.5 *         (0.01875 * SafezoneH)";
					h = "1.1 *         (0.025 * SafezoneH)";
				};
				class ACE_Distance: RscText
				{
					idc = 123002;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.6 *         (0.01875 * SafezoneH)";
					y = "3 *         (0.025 * SafezoneH)";
					w = "4 *         (0.01875 * SafezoneH)";
					h = "1.5 *         (0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 151;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = 0;
					y = 0;
					w = 0;
					h = 0;
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "80.5";
					x = "32.7 *         (0.01875 * SafezoneH)";
					y = "3 *         (0.025 * SafezoneH)";
					w = "5 *         (0.01875 * SafezoneH)";
					h = "1.5 *         (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "6.5 *         (0.01875 * SafezoneH)";
					y = "19.6 *         (0.025 * SafezoneH)";
					w = "4 *         (0.01875 * SafezoneH)";
					h = "1.1 *         (0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "29.2 *         (0.01875 * SafezoneH)";
					y = "3 *         (0.025 * SafezoneH)";
					w = "3.5 *         (0.01875 * SafezoneH)";
					h = "1.5 *         (0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "16.1 *         (0.01875 * SafezoneH)";
					y = "3 *         (0.025 * SafezoneH)";
					w = "3.5 *         (0.01875 * SafezoneH)";
					h = "1.6 *         (0.025 * SafezoneH)";
				};
				class ACE_LaserCode_Helper: RscMapControl
				{
					idc = -1;
					onDraw = "_this call ace_laser_fnc_onLaserDesignatorDraw";
					w = 0;
					h = 0;
				};
				class ACE_LaserCode: RscText
				{
					idc = 123001;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "Code: 1001";
					x = "32.7 *         (0.01875 * SafezoneH)";
					y = "35.5 *         (0.025 * SafezoneH)";
					w = "12 *         (0.01875 * SafezoneH)";
					h = "1.6 *         (0.025 * SafezoneH)";
				};
			};
		};
	};
};
class RscTitles
{
	class ace_laser_modeDisplay
	{
		idd = -1;
		onLoad = "with uiNameSpace do { ace_laser_display= _this select 0 };";
		movingEnable = 0;
		duration = 60;
		fadeIn = "false";
		fadeOut = "false";
		class controls
		{
			class ModeControlGroup: RscControlsGroupNoScrollbars
			{
				idc = 1000;
				x = "3.8 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable ['IGUI_GRID_WEAPON_X',((safezoneX + safezoneW) - (10 * (((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * (((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getVariable ['IGUI_GRID_WEAPON_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class AttackMode: RscText
					{
						idc = 1001;
						colorText[] = {1,1,1,1};
						colorBackground[] = {0,0,0,0};
						x = "0";
						y = "0";
						w = "(2.6) * (((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class LaserCode: RscText
					{
						idc = 1002;
						colorText[] = {1,1,1,1};
						colorBackground[] = {0,0,0,0};
						x = "(3.6) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						y = "0";
						w = "(2.5) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						h = "(1) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class LaserIcon: RscPictureKeepAspect
					{
						idc = 1003;
						colorText[] = {1,0,0,1};
						colorBackground[] = {0,0,0,0};
						text = "\a3\Ui_F_Curator\Data\CfgCurator\laser_ca.paa";
						x = "(6.1) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						y = "0";
						w = "(1) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						h = "(1) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
};
