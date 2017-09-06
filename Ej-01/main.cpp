#include <iostream>
#include "../Pila/Pila.h"
#include <windows.h>
#include <stdio.h>

using namespace std;

int main() {
    char a[50];
    cout << "Ingrese una palabra: " << '\n';
    cin >> a;
    Pila<char> inversa;
    for (int i = 0; i < strlen(a); i++) {
        inversa.push(a[i]);
    }
    while (!inversa.esVacia()) {
        cout << inversa.pop() ;
    }
    return 0;
}
