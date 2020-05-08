#include "functions.h"

using namespace std;

void readChampionsFile(Champion (&list)[CHAMP_COUNT]){
    ifstream inFile("Champions.txt");
    if( !inFile.is_open() ) {
       cout << "Error opening file" << endl;
    }

    // Read into array;
}

void readPlayerProfs(Player (&players)[5]){
    string playerNames[5];
    cout << "Enter player names: " << endl;
    for(int i = 0; i < TEAM_SIZE/2; i++){
        cout << i+1 << ") ";
        cin >> playerNames[i];
    }

    // Read player file and set bestChamps;
}

Champion championSearch(const string &name){

}

void setBans(Champion (&bans)[10]){
    string banNames[10];
    cout << "Enter bans: " << endl;
    for(int i = 0; i < TEAM_SIZE/2; i++){
        cout << i+1 << ") ";
        cin >> banNames[i];
    }

    // Convert banNames to bans
}
