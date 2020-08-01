/*
	Author: Maverick Applications
	Desc: Altis Life Shipwreck
*/

//Customize your settings to fit your server setup!
class Maverick_Shipwrecks {

    //How often (in seconds) should a shipwreck spawn, if no wreck is on the map?
    ShipwreckInterval = 9000; //1800 = 30min

    //Define the possible locations for your shipwrecks.
    //getPosATL format -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
	Positions[] = {
        {13954,10104.6,0},
		{18437.9,20825.2,0},
		{24223.1,14289.2,0},
		{6498.06,8901.39,0},
		{2931.32,16917.9,0}
	};

    //Define the radius, in which the wreck randomly spawns around the given center position
    Radius = 200;

    //Define the possible sets of virtual items the user can loot from the wreck.
	ShipLoot[] = {
        //{"tbacon","tbacon","tbacon","apple","apple"},
        //{"tbacon","tbacon","tbacon","tbacon","tbacon","tbacon","tbacon","tbacon","tbacon"},
        {"goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","marijuana"}
	};

	//What shall be displayed as text to gather the items from the ship? (The text of the addAction ingame)
	ShipLootText = "Wydobadz zloto!";

    //The message when the user has got all the loot successfully.
    ShipLootSuccess = "Przejales statek, teraz skarby sa twoje!";

    //The message in case something fails, or the user can not carry all the items.
    ShipLootFail = "Nie udzwigniesz wiecej, schowaj do bagaznika i wracaj po skarby!";

	//Define the message, that should appear when a shipwreck spawns (broadcasted to all clients).
	SpawnMSG = "Pojawiły się pogłoski że na naszej wyspie zatonal Titanic, byc moze sa w nim ukryte jakies skarby!";

    //Define the message, that should appear when a shipwreck disappears after a user looted it (broadcasted to all clients).
	DeleteMSG = "Titanic wlasnie został odnaleziony, w srodku znajdowalo sie wiele kosztownosci!";
};