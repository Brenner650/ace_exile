////////////////////////////////////////////////////////////////////
//DeRap: hlc_ace3_compat_G3\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:42:10 2018 : 'file' last modified on Mon Jul 24 20:35:38 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class HLC_COMPAT_ACE3_G3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","ace_common","hlcweapons_g3"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class optic_dms;
	class HLC_Optic_ZFSG1: optic_dms
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class hlc_optic_accupoint_g3: HLC_Optic_ZFSG1
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
};
