#include <iostream>
#include <string>

#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

char Referee::refGame(Human player1, Computer player2) {

    char playerchoice = player1.MakeMove();
    char compchoice = player2.MakeMove();

    if (playerchoice == compchoice) {
        return 'T';
    }

    else if (playerchoice == 'R' && compchoice == 'S') {
        return 'W';
    }

    else if (playerchoice == 'P' && compchoice == 'R') {
        return 'W';
    }

    else if (playerchoice == 'S' && compchoice == 'P') {
        return 'W';
    }

    else {
        return 'L';
    }
}