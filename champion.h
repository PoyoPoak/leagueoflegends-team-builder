#ifndef champion_H
#define champion_H

#include <iostream>

using namespace std;

enum lane{ TOP, JUN, MID, BOT, SUP };
enum damage{ AD, AP, UTL };

struct Role{
    int HardCC = 0;
    int HardEngage = 0;
    int Disengage = 0;
    int Poke = 0;
    int WaveClear = 0;
    int Tank = 0;
    int EarlyGame = 0;
    int MidGame = 0;
    int LateGame = 0;
};

struct Champion{
    string name;
    lane lane;
    Role roles;
    damage damageType;

    Champion modifyTraits(const Champion& defaultChampion) const;
};

#endif // champion_H
