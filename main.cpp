#include "functions.h"

using namespace std;

int main() {
    fstream ChampionsFile("Champions.txt");
    if(!ChampionsFile.is_open()) {
       cout << "Error opening Champions.txt" << endl;
    }

    fstream PlayersFile("Players.txt");
    if(!PlayersFile.is_open()){
        cout << "Error opening Players.txt" << endl;
    }

    Champion champions[CHAMP_COUNT];
    Champion bans[TEAM_SIZE * 2];
    Player players[TEAM_SIZE];
    Player enemyTeam[TEAM_SIZE];

    readChampionsFile(ChampionsFile, champions);
    readPlayerProfs(PlayersFile, players, champions);

//    PrintChampion(getChamp("Olaf", champions));
//    PrintPlayer(getPlayer("Peter", players));

    ChampionsFile.close();
    PlayersFile.close();

    /*Order of operations
     * Read champion data into data structure
     * Creates team entities
     * Ask for input of players that are playing
     * Grab players' info and champions
     * Enter champion bans
     * If first pick then enter first pick else...
     * Enter enemy first pick
     * Generate first/next- pick
     * Finish
     */
}
