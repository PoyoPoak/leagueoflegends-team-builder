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
    }

    // If all roles filled
    if(total.HardCC > 0
        && total.HardEngage > 0
        && total.Disengage > 0
        && total.Poke > 0
        && total.WaveClear > 0
        && total.Tank > 0){
        return true;
    }

    return false;
}
