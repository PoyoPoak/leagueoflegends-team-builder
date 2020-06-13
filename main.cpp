#include "functions.h"

using namespace std;

int main() {
    fstream ChampionsFile("ChampionsShort.txt"); // Currently on test file
    if(!ChampionsFile.is_open()) {
       cout << "Error opening Champions.txt" << endl;
    }

//    fstream PlayersFile("Players.txt");
//    if(!PlayersFile.is_open()){
//        cout << "Error opening Players.txt" << endl;
//    }

    Champion champions[CHAMP_COUNT];
    Champion bans[TEAM_SIZE * 2];
    Player players[TEAM_SIZE];
    Player enemyTeam[TEAM_SIZE];

    readChampionsFile(ChampionsFile, champions);
    //readPlayerProfs(PlayersFile, players);



    ChampionsFile.close();
//    PlayersFile.close();

    // Creates test champion.
//    Champion testChamp;
//    testChamp.name = "Test_Champion";
//    testChamp.lane = TOP;
//    testChamp.roles.HardCC = 1;
//    testChamp.roles.Poke = 1;
//    testChamp.damageType = AD;
//    testChamp.game = LATE;



    /*Order of operations
     * Read champion data into data structure
     * Creates team entities
     * Ask for input of players that are playing
     * Grab players' info and champions
     * Enter champion bans
     * If first pick then enter first pick else...
     *      Enter enemy first pick
     * Generate first/next pick
     * Finish
     */
}
