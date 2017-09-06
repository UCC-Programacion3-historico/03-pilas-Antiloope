#include <iostream>
#include "../Pila/Pila.h"
#include "parentesis.h"
#include <windows.h>

using namespace std;

int main() {
    char f[50];
    cout << "Ingrese una funcion matematica: " << '\n';
    cin >> f;
    Pila<char> A;
    cout << verificarParentesis(f,strlen(f),&A) << '\n';
    return 0;
}
