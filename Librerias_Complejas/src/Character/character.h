#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;

struct character {
    string name;
    int level;
    int attack;
    int HP;
};

// Declaraciones
struct character Char_Data();             // No uses "struct" aquí
void ShowStats(character ch);

#endif