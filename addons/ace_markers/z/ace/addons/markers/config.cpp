////////////////////////////////////////////////////////////////////
//DeRap: ace_markers\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:17 2018 : 'file' last modified on Mon Apr 16 21:45:46 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_markers
	{
		name = "ACE3 - Markers";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_markers
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\markers\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_markers
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\markers\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_markers
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\markers\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDiary
	{
		ace_markers = "_this call ace_markers_fnc_mapDisplayInitEH";
	};
};
class ACE_Settings
{
	class ace_markers_movableMarkersEnabled
	{
		movedToSQF = 1;
	};
	class ace_markers_moveRestriction
	{
		movedToSQF = 1;
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ACE_ModuleMarkers: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_markers_Module_DisplayName";
		scope = 1;
		icon = "\z\ace\addons\markers\UI\Icon_Module_Markers_ca.paa";
	};
};
class RscPicture;
class RscText;
class RscStructuredText;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenu;
class RscEdit;
class RscCombo;
class RscSlider;
class RscXSliderH;
class RscDisplayInsertMarker
{
	onLoad = "_this call ace_markers_fnc_initInsertMarker;";
	onUnload = "_this call ace_markers_fnc_placeMarker;";
	movingEnable = 1;
	class controls
	{
		class MarkerShape: RscCombo
		{
			idc = 1210;
		};
		class MarkerColor: RscCombo
		{
			idc = 1211;
		};
		class MarkerAngle: RscXSliderH
		{
			idc = 1220;
		};
		class MarkerAngleText: RscText
		{
			idc = 1221;
		};
	};
};
