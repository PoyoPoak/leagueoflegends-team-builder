#ifndef TEAM_H
#define TEAM_H
#include "champion.h"

class team{
public:
    team();

private:
    Champion top;
    Champion jungle;
    Champion middle;
    Champion adCarry;
    Champion support;


};

#endif // TEAM_H
