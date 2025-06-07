#include <iostream>
#include <windows.h> // para Sleep

using namespace std;

int main() {
    string mensaje = "hola como estas? andamos bien por ahi?";
    string espacio = " ";
    string mensaje1 = "Queria preguntarte si me das la tarea";
    string mensaje2 = "O no la hiciste?";
    for (char c : mensaje) {
        cout << c;
        Sleep(50); // Espera 50 milisegundos por letra
    }
    for (char c : espacio) {
        cout << c;
        Sleep(1500);
    }
    cout << endl;
    for (char c : mensaje1) {
        cout << c;
        Sleep(50);
    }
    for (char c : espacio) {
        cout << c;
        Sleep(1500);
    }
    cout << endl;
    for (char c : mensaje2) {
        cout << c;
        Sleep(50);
    }
    for (char c : espacio) {
        cout << c;
        Sleep(500);
    }
    cout << endl;
    return 0;
}
/*


*/