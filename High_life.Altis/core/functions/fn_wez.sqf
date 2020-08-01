#include "..\..\script_macros.hpp"
private["_item"];
_item = _this select 2;
_log = format ["%1 wzial %2", name player, _item];
[_log, "ibagaznik"] remoteExecCall ["A3Log", 2];
