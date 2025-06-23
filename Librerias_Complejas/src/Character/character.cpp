#include <iostream>
#include "character.h"
using namespace std;

struct character Char_Data(){
    struct character ch;
    ch.name = "Olaf";
    ch.level = 5;
    ch.HP = 100;
    ch.attack = 20;
    return ch;
}

void ShowStats(character ch){
    cout << "\033[3;4m-- OLAF STATS --\033[0m" << endl << endl;
    cout << "\033[33m" << ch.name << "\033[0m" << endl;
    cout << "Nivel:  " << ch.level << endl;
    cout << "HP:     " << ch.HP << endl;
    cout << "Ataque: " << ch.attack << endl;
}