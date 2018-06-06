////////////////////////////////////////////////////////////////////
//DeRap: hlc_ace3_compat_SIGAMT\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:42:10 2018 : 'file' last modified on Tue Jul 25 19:43:37 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class HLC_COMPAT_ACE3_SIGAMT
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_stgw57","ace_common"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class optic_Arco;
	class hlc_optic_Kern: optic_arco
	{
		ACE_ScopeAdjust_Vertical[] = {-5,13};
		ACE_ScopeAdjust_Horizontal[] = {-7,7};
		ACE_ScopeAdjust_VerticalIncrement = 0.25;
		ACE_ScopeAdjust_HorizontalIncrement = 0.25;
		author = "Toadie, Kaukaussus";
		descriptionshort = "Kern 4x24 Zielfernrohr <br />Magnification: 4x";
		displayname = "Kern AARAU 4x24";
		picture = "\hlc_wp_sigamt\tex\ui\gear_aarau_x_ca";
		model = "hlc_wp_sigamt\mesh\aarau\AARAU.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			opticType = 1;
			optics = 1;
			modelOptics = "\hlc_wp_sigamt\mesh\aarau\aarau_optics";
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					usemodeloptics = 0;
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.06225;
					opticsZoomInit = 0.06225;
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					distanceZoomMin = 200;
					distanceZoomMax = 800;
					memoryPointCamera = "ADS_eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
				};
			};
		};
	};
	class hlc_optic_Kern2d: hlc_optic_Kern
	{
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.06225;
					opticsZoomInit = 0.06225;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
};
