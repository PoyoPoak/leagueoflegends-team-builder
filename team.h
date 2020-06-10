#ifndef TEAM_H
#define TEAM_H
#include <vector>

#include "champion.h"

using namespace std;

enum roleEnum{top = 0, jun = 1, mid = 2, bot = 3, sup = 4};

struct TeamComp{
    vector<Champion> team;

    void printTeam() const;
    bool roleCheck() const;
};

#endif // TEAM_H
