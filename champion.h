#ifndef CHAMPION_H
#define CHAMPION_H
#include <iostream>

using namespace std;

enum lane{ TOP, JUN, MID, BOT, SUP };
enum damage{ AD, AP, UTL };
enum game{ EARLY, MIDDLE, LATE };

struct role{
    bool HardCC;
    bool HardEngage;
    bool Disengage;
    bool Poke;
    bool WaveClear;
    bool Tank;
};

struct Champion{
    string name;
    lane lane;
    role roles;
    damage damageType;
    game game;
};

#endif // CHAMPION_H
