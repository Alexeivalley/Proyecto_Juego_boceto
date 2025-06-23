#include <iostream>
#include "src/Code/Code.h"    // Incluye la lógica del ejemplo
#include "src/Character/character.h"

using namespace std;

int main(){
    cout << "-- INICIO --" << endl;
    character ch = Char_Data();  // Crea un personaje
    Example(ch);                 // Muestra sus stats
    return 0;
}

// copilar con g++ main.cpp src/Character/character.cpp src/Code/Code.cpp -o RunExample
// y  .\'RunExample.exe'