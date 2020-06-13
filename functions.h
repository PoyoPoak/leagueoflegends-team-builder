#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>

#include "champion.h"
#include "fileManage.h"
#include "player.h"
#include "team.h"

using namespace std;

const int BAN_COUNT = 10;

void setBans(Champion (&bans)[BAN_COUNT]);

#endif // FUNCTIONS_H
