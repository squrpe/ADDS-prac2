#include <iostream>
#include <string>

#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main() {

    int num = 1; //Num of plays

    Human HumanPlayer;
    Computer CompPlayer;
    Referee Ref;

    while (num !=0 ){
        cout << Ref.refGame(HumanPlayer, CompPlayer) << endl;
        num--;
    }

    return 0;

}