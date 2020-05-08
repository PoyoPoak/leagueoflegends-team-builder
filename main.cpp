#include <iostream>
#include "champion.h"
#include "functions.h"
#include "team.h"

using namespace std;

int main() {
    // Read in champions' data
    Champion championsList[CHAMP_COUNT];
    readChampionsFile(championsList);

    // Creates teams.
    Team myTeam;
    Team enemyTeam;

    // Enter player names to grab info.
    Player players[5];
    readPlayerProfs(players);

    // Enter bans.
    Champion bans[10];
    setBans(bans);


}
