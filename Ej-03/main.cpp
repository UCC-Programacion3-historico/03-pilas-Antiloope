#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    Pila<int> a;
    a.push(4);
    cout << a.peek() << '\n';

    return 0;
}
