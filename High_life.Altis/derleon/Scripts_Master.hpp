#define true 1
#define false 0

/*HERE SOME STUFF YOU CAN CHANGE ON YOUR OWN*/

class Leonbeeser_Settings {
	
	/*Set true to false and any kind of number to 0 to deaktivate the function*/
	/*In this brackets [] you can find the default settings e.g. [false] or [4]*/
	
/*autosave*/
	autosaveInterval = 1; // Automatic saving intervall in minutes default [15]
	lockManuelSync = false; // locks manuel sync [true]
	lockSyncTime = 1; // Time in minutes [1] for locking manuel sync after automatic saving; ONLY ACTIVE IF lockManuelSync is set to true!
	chatInfo = false; // Turn to false if you don´t like to see a saving message, [true] to got a message in system chat
	advancedChatInfo = false; // Turn to false, if you don´t like to see extra informations, eg. Manual Saving is now blocked for 1 Minute; ONLY ACTIVE IF chatInfo is set to true!
	waitforManSave = false; // [True] for waiting until manuel saves has been copleted; (recommended, saves server traffic)
};