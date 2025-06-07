#include <iostream>
#include <windows.h>

using namespace std;

void imprimirConPausa(const string& texto, int pausaMsPorLetra) {
    for (char c : texto) {
        cout << c;
        Sleep(pausaMsPorLetra);
    }
}

void pausa(int ms) {
    Sleep(ms);
}

int main() {
    imprimirConPausa("hola como estas? andamos bien por ahi?", 50);
    pausa(1500);
    cout << endl;

    imprimirConPausa("Queria preguntarte si me das la tarea", 50);
    pausa(1500);
    cout << endl;

    imprimirConPausa("O no la hiciste?", 50);
    pausa(500);
    cout << endl;

    return 0;
}