#include <iostream>
using namespace std;

int main() {
    int salud = 100; // cambiar a 10 para que el jugador muera
    int mana = 50;
    int ataque = 20;
    int defensa = 10;

    // Punto de guardado
    int salud_guardada, mana_guardada, ataque_guardado, defensa_guardada;

    char continuar;

    do {
        // Guardar el estado antes de la batalla
        salud_guardada = salud;
        mana_guardada = mana;
        ataque_guardado = ataque;
        defensa_guardada = defensa;

        cout << "\n--- Batalla contra el enemigo ---\n";
        int enemigo_vida = 50;

        while (enemigo_vida > 0 && salud > 0) {
            enemigo_vida -= ataque;
            cout << "Atacas. Vida del enemigo: " << enemigo_vida << "\n";

            if (enemigo_vida > 0) {
                salud -= 25;
                cout << "El enemigo te ataca. Tu salud: " << salud << "\n";
            }
        }

        if (salud > 0) {
            cout << "\n¡Has ganado!\n";
            continuar = 'n';
        } else {
            cout << "\nHas muerto. Reiniciando batalla...\n";
            salud = salud_guardada;
            mana = mana_guardada;
            ataque = ataque_guardado;
            defensa = defensa_guardada;

            cout << "¿Intentar de nuevo? (s/n): ";
            cin >> continuar;
        }

    } while (continuar == 's');

    cout << "\nFin del juego.\n";
    return 0;
}
