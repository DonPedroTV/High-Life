#define ST_RIGHT 0x01

class statusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['statusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['statusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['statusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 1000;
			x = safezoneX;
			y = safezoneY + safezoneH - 0.053;
			w = safezoneW;
			h = 0.09;
			shadow = 1;
			colorBackground[] = { 1, 0.3, 0, 0.0 };  // uncomment and increase 4th number to have a background
			font = "PuristaSemibold";
			size = 0.032;
			type = 13;
			style = 1;
			text="Loading server info...";
			class Attributes {
				align="center";
				color = "#FFFFF";
			};
		};
	};
};