#ifndef FILEMANAGE_H
#define FILEMANAGE_H

#include <iostream>
#include <fstream>

#include "champion.h"
#include "team.h"
#include "player.h"

using namespace std;

const int CHAMP_COUNT = 148;

void readChampionsFile(fstream& ChampionsFile, Champion (&champList)[CHAMP_COUNT]);
//void readPlayerProfs(const fstream& PlayersFile, Player (&playersList)[TEAM_SIZE]);

//void addPlayer(fstream& PlayersFile, const Champion (&champList)[CHAMP_COUNT]);
//void removePlayer(string &playerName, fstream& PlayersFile);

//void addChampion(fstream& ChampionsFile);
//void removeChampion(fstream& ChampionsFile, const string &championName);

//Champion championSearch(const string& name, Champion (&champList)[CHAMP_COUNT]);
//Player playerSearch(const string& name, Player (&playersList)[TEAM_SIZE]);

#endif // FILEMANAGE_H
