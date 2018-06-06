////////////////////////////////////////////////////////////////////
//DeRap: ace_ui\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:49:00 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_ui
	{
		name = "ACE3 - UI";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"VKing","Jonpas"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_ui
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ui\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_ui
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\ui\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_ui
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\ui\XEH_clientInit.sqf'";
	};
};
class Extended_DisplayUnload_EventHandlers
{
	class RscDiary
	{
		ace_ui = "[{[false] call ace_ui_fnc_setElements}] call CBA_fnc_execNextFrame";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_ui_Module: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_ui_ModuleName";
		function = "ace_ui_fnc_moduleInit";
		scope = 1;
		isGlobal = 1;
		icon = "\z\ace\addons\ui\UI\Icon_Module_UI_ca.paa";
		class Arguments
		{
			class allowSelectiveUI
			{
				displayName = "$STR_ace_ui_AllowSelectiveUI";
				description = "$STR_ace_ui_AllowSelectiveUI_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class soldierVehicleWeaponInfo
			{
				displayName = "$STR_ace_ui_SoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleRadar
			{
				displayName = "$STR_ace_ui_VehicleRadar";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleCompass
			{
				displayName = "$STR_ace_ui_VehicleCompass";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class commandMenu
			{
				displayName = "$STR_ace_ui_CommandMenu";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class groupBar
			{
				displayName = "$STR_ace_ui_GroupBar";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class weaponName
			{
				displayName = "$STR_ace_ui_WeaponName";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class weaponNameBackground
			{
				displayName = "$STR_ace_ui_WeaponNameBackground";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class firingMode
			{
				displayName = "$STR_ace_ui_FiringMode";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class ammoType
			{
				displayName = "$STR_ace_ui_AmmoType";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class ammoCount
			{
				displayName = "$STR_ace_ui_AmmoCount";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class magCount
			{
				displayName = "$STR_ace_ui_MagCount";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class throwableName
			{
				displayName = "$STR_ace_ui_throwableName";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class throwableCount
			{
				displayName = "$STR_ace_ui_throwableCount";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class zeroing
			{
				displayName = "$STR_ace_ui_Zeroing";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class weaponLowerInfoBackground
			{
				displayName = "$STR_ace_ui_WeaponLowerInfoBackground";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class stance
			{
				displayName = "$STR_ace_ui_Stance";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class staminaBar
			{
				displayName = "$STR_ace_ui_StaminaBar";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerWeaponName
			{
				displayName = "$STR_ace_ui_GunnerWeaponName";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerWeaponNameBackground
			{
				displayName = "$STR_ace_ui_GunnerWeaponNameBackground";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerFiringMode
			{
				displayName = "$STR_ace_ui_GunnerFiringMode";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerAmmoType
			{
				displayName = "$STR_ace_ui_GunnerAmmoType";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerAmmoCount
			{
				displayName = "$STR_ace_ui_GunnerAmmoCount";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerMagCount
			{
				displayName = "$STR_ace_ui_GunnerMagCount";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerLaunchableName
			{
				displayName = "$STR_ace_ui_gunnerLaunchableName";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerLaunchableCount
			{
				displayName = "$STR_ace_ui_gunnerLaunchableCount";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerZeroing
			{
				displayName = "$STR_ace_ui_GunnerZeroing";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class gunnerWeaponLowerInfoBackground
			{
				displayName = "$STR_ace_ui_GunnerWeaponLowerInfoBackground";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleName
			{
				displayName = "$STR_ace_ui_VehicleName";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleNameBackground
			{
				displayName = "$STR_ace_ui_VehicleNameBackground";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleFuelBar
			{
				displayName = "$STR_ace_ui_VehicleFuelBar";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleSpeed
			{
				displayName = "$STR_ace_ui_VehicleSpeed";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleAltitude
			{
				displayName = "$STR_ace_ui_VehicleAltitude";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleDamage
			{
				displayName = "$STR_ace_ui_VehicleDamage";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class vehicleInfoBackground
			{
				displayName = "$STR_ace_ui_VehicleInfoBackground";
				description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_ui_ModuleDescription";
		};
	};
};
class ACE_Settings
{
	class ace_ui_allowSelectiveUI
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_AllowSelectiveUI";
		description = "$STR_ace_ui_AllowSelectiveUI_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_ui_soldierVehicleWeaponInfo
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_SoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleRadar
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleRadar";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleCompass
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleCompass";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_commandMenu
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_CommandMenu";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_groupBar
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GroupBar";
		typeName = "BOOL";
		value = 0;
		isClientSettable = 1;
	};
	class ace_ui_weaponName
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_WeaponName";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_weaponNameBackground
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_WeaponNameBackground";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_firingMode
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_FiringMode";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_ammoType
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_AmmoType";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_ammoCount
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_AmmoCount";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 0;
		isClientSettable = 1;
	};
	class ace_ui_magCount
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_MagCount";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_throwableName
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_throwableName";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_throwableCount
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_throwableCount";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_zeroing
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_Zeroing";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_weaponLowerInfoBackground
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_WeaponLowerInfoBackground";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_stance
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_Stance";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_staminaBar
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_StaminaBar";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerWeaponName
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerWeaponName";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerWeaponNameBackground
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerWeaponNameBackground";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerFiringMode
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerFiringMode";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerAmmoType
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerAmmoType";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerAmmoCount
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerAmmoCount";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerMagCount
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerMagCount";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerLaunchableName
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_gunnerLaunchableName";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerLaunchableCount
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_gunnerLaunchableCount";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerZeroing
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerZeroing";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_gunnerWeaponLowerInfoBackground
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_GunnerWeaponLowerInfoBackground";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleName
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleName";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleNameBackground
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleNameBackground";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleFuelBar
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleFuelBar";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleSpeed
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleSpeed";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleAltitude
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleAltitude";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleDamage
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleDamage";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_ui_vehicleInfoBackground
	{
		category = "$STR_ace_ui_Category";
		displayName = "$STR_ace_ui_VehicleInfoBackground";
		description = "$STR_ace_ui_RequiresSoldierVehicleWeaponInfo";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
};
class ACE_UI
{
	class weaponName
	{
		idd = 300;
		elements[] = {118};
		location = 1;
		class conditions{};
	};
	class weaponNameBackground
	{
		idd = 300;
		elements[] = {1001,1008};
		location = 1;
		class conditions{};
	};
	class firingMode
	{
		idd = 300;
		elements[] = {187,1203};
		location = 1;
		class conditions{};
	};
	class ammoType
	{
		idd = 300;
		elements[] = {155};
		location = 1;
		class conditions{};
	};
	class ammoCount
	{
		idd = 300;
		elements[] = {184};
		location = 1;
		class conditions{};
	};
	class magCount
	{
		idd = 300;
		elements[] = {185};
		location = 1;
		class conditions{};
	};
	class throwableName
	{
		idd = 300;
		elements[] = {152};
		location = 1;
		class conditions{};
	};
	class throwableCount
	{
		idd = 300;
		elements[] = {151};
		location = 1;
		class conditions{};
	};
	class zeroing
	{
		idd = 300;
		elements[] = {168};
		location = 1;
		class conditions{};
	};
	class weaponLowerInfoBackground
	{
		idd = 300;
		elements[] = {1202};
		location = 1;
		class conditions{};
	};
	class staminaBar
	{
		idd = 305;
		elements[] = {193};
		location = 1;
		class conditions{};
	};
	class stance
	{
		idd = 303;
		elements[] = {188,1201};
		location = 1;
		class conditions{};
	};
	class gunnerWeaponName
	{
		idd = 300;
		elements[] = {118};
		location = 2;
		class conditions{};
	};
	class gunnerWeaponNameBackground
	{
		idd = 300;
		elements[] = {1001,1008};
		location = 2;
		class conditions{};
	};
	class gunnerFiringMode
	{
		idd = 300;
		elements[] = {187,1203};
		location = 2;
		class conditions{};
	};
	class gunnerAmmoType
	{
		idd = 300;
		elements[] = {155};
		location = 2;
		class conditions{};
	};
	class gunnerAmmoCount
	{
		idd = 300;
		elements[] = {184};
		location = 2;
		class conditions{};
	};
	class gunnerMagCount
	{
		idd = 300;
		elements[] = {185};
		location = 2;
		class conditions{};
	};
	class gunnerLaunchableName
	{
		idd = 300;
		elements[] = {152};
		location = 2;
		class conditions{};
	};
	class gunnerLaunchableCount
	{
		idd = 300;
		elements[] = {151};
		location = 2;
		class conditions{};
	};
	class gunnerZeroing
	{
		idd = 300;
		elements[] = {168};
		location = 2;
		class conditions{};
	};
	class gunnerWeaponLowerInfoBackground
	{
		idd = 300;
		elements[] = {1202};
		location = 2;
		class conditions{};
	};
	class vehicleName
	{
		idd = 300;
		elements[] = {120};
		location = 2;
		class conditions{};
	};
	class vehicleNameBackground
	{
		idd = 300;
		elements[] = {1000,1013};
		location = 2;
		class conditions{};
	};
	class vehicleFuelBar
	{
		idd = 300;
		elements[] = {113,1202};
		location = 2;
		class conditions{};
	};
	class vehicleSpeed
	{
		idd = 300;
		elements[] = {121,1004,1006};
		location = 2;
		class conditions{};
	};
	class vehicleAltitude
	{
		idd = 300;
		elements[] = {122,1005,1014};
		location = 2;
		class conditions{};
	};
	class vehicleDamage
	{
		idd = 300;
		elements[] = {111};
		location = 2;
		class conditions{};
	};
	class vehicleInfoBackground
	{
		idd = 300;
		elements[] = {1200};
		location = 2;
		class conditions{};
	};
};
class RscText;
class RscDisplayChat
{
	class controls
	{
		delete Line;
		delete Background;
		class CA_Background: RscText
		{
			colorBackground[] = {0.5,0.5,0.5,0.33};
		};
	};
};
class RscChatListDefault
{
	colorBackground[] = {0,0,0,0.5};
	colorMessageProtocol[] = {0.85,0.85,0.85,1};
};
class RscPicture;
class RscVignette: RscPicture
{
	text = "";
};
