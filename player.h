#ifndef PLAYER_H
#define PLAYER_H

#include "champion.h"

struct Player{
    string name;
    Champion bestChamps[5][2];
};

#endif // PLAYER_H
