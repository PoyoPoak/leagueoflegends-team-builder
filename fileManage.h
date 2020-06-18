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
void readPlayerProfs(fstream& PlayersFile, Player (&playersList)[TEAM_SIZE], Champion (&champList)[CHAMP_COUNT]);

//void addPlayer(fstream& PlayersFile, const Champion (&champList)[CHAMP_COUNT]);
//void removePlayer(string &playerName, fstream& PlayersFile);

//void addChampion(fstream& ChampionsFile);
//void removeChampion(fstream& ChampionsFile, const string &championName);

Champion getChamp(const string& name, Champion (&champList)[CHAMP_COUNT]);
int getChampIndex(const string& name, Champion (&champList)[CHAMP_COUNT], int low, int high);
Player getPlayer(const string& name, Player (&playersList)[TEAM_SIZE]);
//int getPlayerIndex(const string& name, Player (&playerList)[TEAM_SIZE], int low, int high);

void PrintChampion(const Champion& champ);
void PrintPlayer(const Player& player);

#endif // FILEMANAGE_H
