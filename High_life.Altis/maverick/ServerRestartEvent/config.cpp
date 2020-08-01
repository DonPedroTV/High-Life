/*
	Author: Maverick Applications
	Desc: Altis Life ServerRestartEvent
*/

//Customize your settings, to fit your server setup!
class Maverick_ServerRestartEvent {

    //Should the automatic activation be enabled?
    AutoRestart            = 1;   // 0 = No | 1 = yes

    //How many seconds does it take until the server restarts
    ServerRestartTime      = 21600;// 14400 = 4 hour restarts

    //If you want to play a music enter the name you defined in the description.ext here (playSound is used!)
    //The restart/event is around 85 seconds, so maybe make the sound the same length
    RestartSound           = "restart";

    //Messages shown as hint in-game to inform the players [Can be formatted]
	MessageRestartAnnounce = "<t size='1.4'>Restart serwera</t><br/><br/><t size='1.25'>Serwer zostanie zrestartowany za 5 min!</t>";
	MessageRestartInit     = "<t size='1.4'>Restart serwera</t><br/><br/><t size='1.25'>Za chwile wrocimy!</t>";
	MessageEventInit       = "<t size='1.4'>Event</t><br/><br/><t size='1.25'>Znajdz jakas kryjowke, w innym przypadku mozesz zginac!</t>";
};