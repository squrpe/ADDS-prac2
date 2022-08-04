#include <iostream>
#include <string>

#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

char Human::MakeMove() {

    cout << "Enter move: ";
    cin >> choice;

    return choice;

}