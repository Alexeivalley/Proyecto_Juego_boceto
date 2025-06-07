#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){

    int opcion;
    char x;
    int mal = 0;
    bool nothing = false;
    bool BadRelation = false;
    string name;
    cout << "Inserta tu nombre\n";
    cin >> name;

    cout << "Presiona cualquie tecla y enter para pasar los dialogos\n";
    cin >> x;
    system("cls");
    cout << "Pablo: Hey.\n";
    cout << "Pablo: Hola soy Pablo.\n";
    cout << "1. Hola un gusto\n2. Hola soy Tyron\n3. (No decir nada)\n";
    cin >> opcion;

    system("cls");
    switch (opcion){
    case 1:
        cout << "Pablo: Es un gusto conocerte tambien.\n";
        break;
    case 2:
        cout << "Pablo: Hola Tyron, es un gusto.\n";
        name = "Tyron";
        if (name != "Tyron"){
            cout << "";
        } else {
            cout << "(Suplantaste tu identidad por algo de comedia??)\n";
        }
        break;
    case 3:
        cout << "Pablo: No eres alguien de muchas palabras veo, eh? y bien, cuentame.\n";
        mal += 1;
        nothing = true;
        break;
    default:
        cout << "Pablo: Eso... no responde mi pregunta, en fin\n";
        mal += 1;
        nothing = true;
        break;
    }
    cout << "Eres nuevo eh?\n";
    cout << "1. Si\n2. No.\n";
    if (nothing == false){
        cout << "3. (No decir nada)\n";
        cin >> opcion;
    } else {
        cout << "3. (No decir nada nuevamente)\n";
        cin >> opcion;
    }
    system("cls");
    switch (opcion){
    case 1:
        cout << "Pablo: No te preocupes, a todos nos toco un puesto asi de aburrido.\n";
        cin >> x;
        system("cls");
        cout << "Pablo: Recuerdo los primeros dias que me toco hacer guardia\n";
        cin >> x;
        system("cls");
        cout << "Pablo: Justo esa misma noche tuvimos que pelear con lobos\n";
        cin >> x;
        system("cls");
        cout << "Pablo: Surrealista o raro? en fin, apenas es una fraccion de lo que he llegado a vivir\n";
        cin >> x;
        system("cls");
        cout << "Pablo: Ser guardia no es aburrido... a veces... bueno si lo es.\n";
        cin >> x;
        system("cls");
        cout << "Pablo: Pero te diviertes con lo mas minimo vale? en fin.\n";
        cin >> x;
        system("cls");
        break;
    case 2:
        cout << "Pablo: Ya veo, te degradaron o algo sí amigo? lastima.\n";
        cin >> x;
        system("cls");
        cout << "Pablo: No te preocupes, yo llevo años aquí y nunca me ascendieron.\n";
        cin >> x;
        system("cls");
        cout << "Pablo: Bueno relativamente hablando no es mucho, en fin.\n";
        cin >> x;
        system("cls");
        break;
    case 3:
        cout << "De acuerdo no tienes porque decirme, hiciste algo? te haces el misterioso eh?\n";
        cin >> x;
        mal += 1;
        system("cls");
        break;
    default:
        break;
    }
    if (name == "Tyron"){
        cout << "";
    } else {
        cout << "Pablo: Y... como te llamas?\n1. Decir tu nombre\n2. (No decir nada)\n";
        cin >> opcion;

        system("cls");
        switch (opcion){
        case 1:
        if (mal >= 1){
            cout << "Pablo: es un gusto " << name << ", veo que vas a ser un buen compañero\n";
            cin >> x;
            system("cls");
            cout << "Pese a que eres algo callado...\n";
            cin >> x;
            system("cls");
            } else {
            cout << "Pablo: es un gusto " << name << ", veo que vas a ser un buen compañero\n";
            cin >> x;
            system("cls");
            }
            break;
        case 2:
        if ( mal == 2){
            cout << "Pablo: esta bien! no me quieres hablar? ok, esperaba caerte bien...\n";
            cin >> x;
            system("cls");
        } else {
            cout << "Pablo: Está bien, no me digas tu nombre sr. misterioso\n";
            cin >> x;
            system("cls");
        }
        default:
        if ( mal == 2){
            cout << "Pablo: esta bien! no me quieres hablar? ok, esperaba caerte bien...\n";
            BadRelation = true;
            cin >> x;
            system("cls");
        } else {
            cout << "Pablo: Está bien, no me digas tu nombre sr. misterioso\n";
            cin >> x;
            system("cls");
        }
            break;
        }
    }
    if (BadRelation == false){
        cout << "Pablo: Me caes bien, te sabes la historia de nuestra nacion de casualidad?\n";
    } else {
        cout << "Pablo: ...\n";
    }
    return 0;
}