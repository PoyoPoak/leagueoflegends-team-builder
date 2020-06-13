#include "fileManage.h"

void readChampionsFile(fstream& ChampionsFile, Champion (&champList)[CHAMP_COUNT]){
    int whileCounter = 0;
    while(!ChampionsFile.eof()){
        Champion currentChamp;
        string tempStr;


        // Name
        getline(ChampionsFile, tempStr);
        if(tempStr == ""){
            continue; // If seperation gap in file just skip this line
        }
        currentChamp.name = tempStr;

        // Lane
        getline(ChampionsFile, tempStr);
        switch (tempStr.back() - 48) {
            case 0 : currentChamp.lane = TOP;
            break;
            case 1 : currentChamp.lane = JUN;
            break;
            case 2 : currentChamp.lane = MID;
            break;
            case 3 : currentChamp.lane = BOT;
            break;
            case 4 : currentChamp.lane = SUP;
            break;
        }

        // Roles
        getline(ChampionsFile, tempStr); // hard cc
        currentChamp.roles.HardCC = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // hard engage
        currentChamp.roles.HardEngage = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // disengage
        currentChamp.roles.Disengage = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // poke
        currentChamp.roles.Poke = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // waveclear
        currentChamp.roles.WaveClear = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // tank
        currentChamp.roles.Tank = tempStr.back() - 48;

        // Damage
        getline(ChampionsFile, tempStr);
        switch (tempStr.back() - 48) {
            case 0 : currentChamp.damageType = AD;
            break;
            case 1 : currentChamp.damageType = AP;
            break;
            case 2 : currentChamp.damageType = UTL;
            break;
        }

        // Phase
        getline(ChampionsFile, tempStr);
        switch (tempStr.back() - 48) {
            case 0 : currentChamp.game = EARLY;
            break;
            case 1 : currentChamp.game = MIDDLE;
            break;
            case 2 : currentChamp.game = LATE;
            break;
        }

        // Store champ into array
        champList[whileCounter] = currentChamp;
        whileCounter++;
    }
}

//void readPlayerProfs(Player (&playersList)[TEAM_SIZE], fstream& PlayersFile){
//    string playerNames[5];
//    cout << "Enter player names: " << endl;
//    for(int i = 0; i < TEAM_SIZE/2; i++){
//        cout << i+1 << ") ";
//        cin >> playerNames[i];
//    }

//    for(int i = 0; i < TEAM_SIZE; i++){
//        Player temp;
//    }
//}

//void addPlayer(fstream& PlayersFile, Champion (&champList)[CHAMP_COUNT]){
//    Player temp;
//    string champTemp;
//    cout << endl << "New Player Addition" << endl << "-----------------------------" << endl
//         << "Player's name: ";
//    cin >> temp.name;

//    for(int i = 0; i < TEAM_SIZE; i++){
//        for(int j = 0; j < 2; j++){
//            string laneToInt[] = {"Top", "Jung" , "Mid", "ADC", "Support"};

//            cout << laneToInt[i] << " champion #" << j+1 << ": ";
//            cin >> champTemp;

//            temp.bestChamps[i][j] = championSearch(champTemp, champList);
//        }
//    }
//    cout << "-----------------------------" << endl << endl;

//    PlayersFile << temp.name << "\n" << "{\n";

//    for(int i = 0; i < TEAM_SIZE; i++){
//        for(int j = 0; j < 2; j++){
//            string laneToInt[] = {"Top", "Jung" , "Mid", "ADC", "Support"};
//            PlayersFile << temp.bestChamps[i][j].name << "\n";
//        }
//    }

//    PlayersFile << "\n";
//}

//void removePlayer(const string &playerName, fstream& PlayersFile){

//}

//void addChampion(fstream& ChampionsFile){

//}

//void removeChampion(const string &championName, fstream& ChampionsFile){

//}


//Champion championSearch(const string& name, Champion (&champList)[CHAMP_COUNT]){

//}

//Player playerSearch(const string& name, Player (&playersList)[TEAM_SIZE]){
//    for(int i = 0; i <  CHAMP_COUNT; i++){

//    }

//    // replace with binary search
//}
