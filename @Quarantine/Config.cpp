//---------------DAA V.1 --- penneyfour --- 06/26/2016---------------


class CfgPatches {
	class DAA_Logic {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


class CfgVehicles {
	class Logic;
	class DAA_Logic : Logic {
		displayName = "DAA";
//		icon = "\ca\ui\data\icon_functions_ca.paa";
//		picture = "\ca\ui\data\icon_functions_ca.paa";
		vehicleClass = "Modules";

		class EventHandlers {
			init = "nul = _this execVM 'DAA\Module.sqf' ";
		};
	};
};


//--- sounds -----------

class CfgSounds {
	sounds[] = {light_start,medium_start,heavy_start,turbo_start,prop_start,light_taxi,medium_taxi,heavy_taxi,turbo_taxi,prop_taxi,light_departure,medium_departure,heavy_departure,turbo_departure,prop_departure};

	class light_start
	{
		name="light_start";
		sound[] = {"DAA\DAA\sounds\start\light_start.ogg", 1, 1.0};
		titles[]={};
	};
	class medium_start
	{
		name="medium_start";
		sound[] = {"DAA\DAA\sounds\start\medium_start.ogg", 1, 1.0};
		titles[]={};
	};
	class heavy_start
	{
		name="heavy_start";
		sound[] = {"DAA\DAA\sounds\start\heavy_start.ogg", 1, 1.0};
		titles[]={};
	};
	class turbo_start
	{
		name="turbo_start";
		sound[] = {"DAA\DAA\sounds\start\turbo_start.ogg", 1, 1.0};
		titles[]={};
	};
	class prop_start
	{
		name="prop_start";
		sound[] = {"DAA\DAA\sounds\start\prop_start.ogg", 1, 1.0};
		titles[]={};
	};
	class light_taxi
	{
		name="light_taxi";
		sound[] = {"DAA\DAA\sounds\taxi\light_taxi.ogg", 1, 1.0};
		titles[]={};
	};
	class medium_taxi
	{
		name="medium_taxi";
		sound[] = {"DAA\DAA\sounds\taxi\medium_taxi.ogg", 1, 1.0};
		titles[]={};
	};
	class heavy_taxi 
	{
		name="heavy_taxi";
		sound[] = {"DAA\DAA\sounds\taxi\heavy_taxi.ogg", 1, 1.0};
		titles[]={};
	};
	class turbo_taxi 
	{
		name="turbo_taxi";
		sound[] = {"DAA\DAA\sounds\taxi\turbo_taxi.ogg", 1, 1.0};
		titles[]={};
	};
	class prop_taxi 
	{
		name="prop_taxi";
		sound[] = {"DAA\DAA\sounds\taxi\prop_taxi.ogg", 1, 1.0};
		titles[]={};
	};
	class light_departure
	{
		name="light_departure";
		sound[] = {"DAA\DAA\sounds\departure\light_departure.ogg", 3, 1.0};
		titles[]={};
	};
	class medium_departure
	{
		name="medium_departure";
		sound[] = {"DAA\DAA\sounds\departure\medium_departure.ogg", 3, 1.0};
		titles[]={};
	};
	class heavy_departure 
	{
		name="heavy_departure";
		sound[] = {"DAA\DAA\sounds\departure\heavy_departure.ogg", 3, 1.0};
		titles[]={};
	};
	class turbo_departure 
	{
		name="turbo_departure";
		sound[] = {"DAA\DAA\sounds\departure\turbo_departure.ogg", 3, 1.0};
		titles[]={};
	};
	class prop_departure 
	{
		name="prop_departure";
		sound[] = {"DAA\DAA\sounds\departure\prop_departure.ogg", 3, 1.0};
		titles[]={};
	};
};



