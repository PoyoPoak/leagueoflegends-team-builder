#include "team.h"

void TeamComp::printTeam() const{
    cout << "Top: " << team.at(top).name << endl
         << "Jung: " << team.at(jun).name << endl
         << "Mid: :" << team.at(mid).name << endl
         << "ADC: :" << team.at(bot).name << endl
         << "Support: " << team.at(sup).name << endl;
}

bool TeamComp::roleCheck() const{
    Role total; // Holds total amt. of role pts.

    // Add up team totals
    for(int i = 0; i < 5; i++){
        total.HardCC += team.at(i).roles.HardCC;
        total.HardEngage += team.at(i).roles.HardEngage;
        total.Disengage += team.at(i).roles.Disengage;
        total.Poke += team.at(i).roles.Poke;
        total.WaveClear += team.at(i).roles.WaveClear;
        total.Tank += team.at(i).roles.Tank;
        total.EarlyGame += team.at(i).roles.EarlyGame;
        total.MidGame += team.at(i).roles.MidGame;
        total.LateGame += team.at(i).roles.LateGame;
    }

    // If all roles filled
    if(total.HardCC > 0
        && total.HardEngage > 0
        && total.Disengage > 0
        && total.Poke > 0
        && total.WaveClear > 0
        && total.Tank > 0
        && total.EarlyGame > 0
        && total.MidGame > 0
        && total.LateGame > 0){
        return true;
    }

    return false;
}
