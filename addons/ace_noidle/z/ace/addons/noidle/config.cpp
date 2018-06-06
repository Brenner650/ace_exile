////////////////////////////////////////////////////////////////////
//DeRap: ace_noidle\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:22 2018 : 'file' last modified on Mon Apr 16 21:47:12 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_noidle
	{
		name = "ACE3 - No Idle";
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
class CfgMovesBasic
{
	class StandBase;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSlowWrflDnon: StandBase
		{
			variantsPlayer[] = {};
		};
		class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon
		{
			variantsPlayer[] = {};
		};
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSlowWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
		};
		class AmovPknlMstpSrasWpstDnon;
		class AmovPknlMstpSlowWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
		};
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			variantsPlayer[] = {};
		};
		class AmovPknlMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[] = {};
		};
	};
};
