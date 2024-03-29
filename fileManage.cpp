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
        getline(ChampionsFile, tempStr); // early game
        currentChamp.roles.EarlyGame = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // mid game
        currentChamp.roles.MidGame = tempStr.back() - 48;
        getline(ChampionsFile, tempStr); // late game
        currentChamp.roles.LateGame = tempStr.back() - 48;

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

        // Store champ into array
        champList[whileCounter] = currentChamp;
        whileCounter++;
    }
}

void readPlayerProfs(fstream& PlayersFile, Player (&playersList)[TEAM_SIZE], Champion (&champList)[CHAMP_COUNT]){
    // Would have been used to search for specific teamates in the array rather than loading th whole file, for now file will be kept to 5 people
//    string playerNames[TEAM_SIZE];
//    cout << "Enter player names: " << endl;
//    for(int i = 0; i < TEAM_SIZE; i++){
//        cout << i+1 << ") ";
//        cin >> playerNames[i];
//    }

    int whileCounter = 0;
    while(!PlayersFile.eof()){
        Player currentPlayer;
        string tempStr;

        // Name
        getline(PlayersFile, tempStr);
        if(tempStr == ""){
            continue; // If seperation gap in file just skip this line
        }
        currentPlayer.name = tempStr;

        // Champs
        for(int i = 0; i < TEAM_SIZE; i++){
            for(int j = 0; j < 2; j++){
                getline(PlayersFile, tempStr);
                currentPlayer.bestChamps[i][j] = getChamp(tempStr, champList);
            }
        }

        //Store player into array
        playersList[whileCounter] = currentPlayer;
        whileCounter++;
    }


}

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


Champion getChamp(const string& name, Champion (&champList)[CHAMP_COUNT]){
    int index = getChampIndex(name, champList, 0, CHAMP_COUNT - 1);
    if(index == -1){
        // give error
    }

    return champList[index];
}

int getChampIndex(const string& name, Champion (&champList)[CHAMP_COUNT], int low, int high){
    if(high >= low){
        int mid = (low + high) / 2;

        if(champList[mid].name == name){
            return mid;
        }else if(champList[mid].name > name){
            return getChampIndex(name, champList, low, mid - 1);
        }else if(champList[mid].name < name){
            return getChampIndex(name, champList, mid + 1, high);
        }
    }

    return -1;
}

Player getPlayer(const string& name, Player (&playersList)[TEAM_SIZE]){
    for(int i = 0; i <  TEAM_SIZE; i++){
        if(playersList[i].name == name){
            return playersList[i];
        }
    }
    // throw no player found
    Player temp;
    return temp; // temp to get rid of error
}

//int getPlayerIndex(const string& name, Player (&playerList)[TEAM_SIZE], int low, int high){

//}

void PrintChampion(const Champion& champ){
    cout << "Name: " << champ.name << endl
         << "Lane: " << champ.lane << endl
         << "Role: WIP" << endl
         << "Dmg: " << champ.damageType << endl;
}

void PrintPlayer(const Player& player){
    cout << "Name: " << player.name << endl
         << "Champions: ";

    for(int i = 0; i < TEAM_SIZE; i++){
        for(int j = 0; j < 2; j++){
            cout << player.bestChamps[i][j].name << endl;
        }
    }
}
