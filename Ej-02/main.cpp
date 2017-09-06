#include <iostream>
#include "../Pila/Pila.h"
#include "iguales.h"

using namespace std;

int main() {
    Pila<int> pila1;
    Pila<int> pila2;



    cout << iguales(&pila1,&pila2) << '\n';
    return 0;
}
