#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include "champion.h"
#include "team.h"

const int TEAM_SIZE = 10;
const int CHAMP_COUNT = 148;

struct Player{
    string name;
    Champion bestChamps[5];
};

void readChampionsFile(Champion (&list)[CHAMP_COUNT]);
void readPlayerProfs(Player (&players)[5]);
Champion championSearch(const string &name);
void setBans(Champion (&bans)[10]);

#endif // FUNCTIONS_H
