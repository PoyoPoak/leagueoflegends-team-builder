#ifndef TEAM_H
#define TEAM_H
#include "champion.h"

struct TeamComp{
    Champion top;
    Champion jungle;
    Champion middle;
    Champion adCarry;
    Champion support;
};

class Team{
public:
    Team();
    void addChampion(const Champion &newChamp);
    void printTeam();
    bool roleCheck(const TeamComp &team);

private:
    Role rolePower;
    TeamComp team;
    int champCount;
};

#endif // TEAM_H
