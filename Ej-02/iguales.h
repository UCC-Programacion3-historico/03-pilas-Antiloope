#ifndef IGUALES_H
#define IGUALES_H

template <class T>
bool iguales(Pila<T> *pila1,Pila<T> *pila2);

template <class T>
bool iguales(Pila<T> *pila1,Pila<T> *pila2) {

    if (pila1->esVacia() && pila2->esVacia()) {
        return 1;
    }

    if (pila1->esVacia() != pila2->esVacia()) {
        return 0;
    }

    if (pila1->pop() == pila2->pop()) {
        return iguales(pila1,pila2);
    }
    return 0;
}

#endif
