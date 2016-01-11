#include <macro.h>
/*
	File: fn_processAction.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master handling for processing an item.
*/
private["_vendor","_type","_itemInfo","_oldItem","_newItem","_cost","_upp","_hasLicense","_itemName","_oldVal","_ui","_progress","_pgText","_cP"];
_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = [_this,3,"",[""]] call BIS_fnc_param;
//Error check
if(isNull _vendor OR EQUAL(_type,"") OR (player distance _vendor > 10)) exitWith {};

//unprocessed item,processed item, cost if no license,Text to display (I.e Processing  (percent) ..."
_itemInfo = switch (_type) do
{
  case "oil": {["oil_unprocessed","oil_processed",100,(localize "STR_Process_Oil"),false];}; //added param (true or false) true if processing with 2 Items.
  case "heroin": {["heroin_unprocessed","heroin_processed",200,(localize "STR_Process_Heroin"),false]};
  case "heroinr": {["heroin_processed","heroin_refined",200,(localize "STR_Process_HeroinR"),false]}; //
  case "cannabis": {["cannabis","marijuana",150,(localize "STR_Process_Marijuana"),false]}; //
  case "marijuana": {["marijuana","marijuana_refined",200,(localize "STR_Process_MarijuanaR"),false]}; //
  case "sulfur": {["sulfuru","sulfurp",250,(localize "STR_Process_Sulfur"),false]};
  case "nitre": {["nitre","potassiumnitrate",250,(localize "STR_Process_Nitre"),false]};
  case "getreide": {["getreide","mehl",250,(localize "STR_Process_Getreide"),false]};
  case "fladen": {["mehl","fladen",250,(localize "STR_Process_Fladen"),true,"wasser"]};
  case "gold": {["goldore","goldbar",200,(localize "STR_Process_Gold"),true,"coalp"];};
};

//Error checking
if(EQUAL(count _itemInfo,0)) exitWith {};

//Setup vars.
_oldItem = SEL(_itemInfo,0);
_newItem = SEL(_itemInfo,1);
_cost = SEL(_itemInfo,2);
_upp = SEL(_itemInfo,3);

_itemName = M_CONFIG(getText,"VirtualItems",_newItem,"displayName");
_oldVal = ITEM_VALUE(_oldItem);

_cost = _cost * _oldVal;
//Some more checks
if(EQUAL(_oldVal,0)) exitWith {};

// Inform army if gold
if(_type == "gold") then {
  [[5,format["<t size='1.2'><t color='#FFFF00'>Goldschmelze %1</t></t><br/><br/><t size='1'> Jemand schmilzt Gold! <br/> Stoppe ihn! </t>"]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
};

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

life_is_processing = true;

	while{true} do {
		sleep  0.3;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(player distance _vendor > 10) exitWith {};
	};

	if(player distance _vendor > 10) exitWith {hint localize "STR_Process_Stay"; 5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
	5 cutText ["","PLAIN"];
	titleText[format[localize "STR_Process_Processed",_oldVal,localize _itemName],"PLAIN"];
	life_is_processing = false;
