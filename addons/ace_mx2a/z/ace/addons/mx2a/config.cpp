////////////////////////////////////////////////////////////////////
//DeRap: ace_mx2a\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:06 2018 : 'file' last modified on Mon Apr 16 21:46:49 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_mx2a
	{
		name = "ACE3 - MX-2A";
		units[] = {"ACE_Item_MX2A"};
		weapons[] = {"ACE_MX2A"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_apl"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Spooner","tcp"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class ACE_Item_MX2A: Item_Base_F
	{
		author[] = {"Spooner","tcp"};
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_mx2a_DisplayName";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_MX2A
			{
				name = "ACE_MX2A";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_MX2A
			{
				name = "ACE_MX2A";
				count = 6;
			};
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class ACE_MX2A: Binocular
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_mx2a_DisplayName";
		descriptionShort = "$STR_ace_mx2a_Description";
		model = "\z\ace\addons\mx2a\data\ace_mx2a.p3d";
		modelOptics = "\z\ace\addons\apl\LWTS_optic.p3d";
		picture = "\z\ace\addons\mx2a\UI\w_mx2a_ca.paa";
		opticsZoomMax = 0.1;
		distanceZoomMax = 120;
		opticsZoomMin = 0.05;
		distanceZoomMin = 400;
		opticsZoomInit = 0.1;
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		discretefov[] = {"0.33333/1","0.33333/2"};
		discreteInitIndex = 0;
		discreteDistance[] = {120,400};
		discreteDistanceInitIndex = 1;
		class WeaponSlotsInfo
		{
			mass = 20;
		};
	};
};
