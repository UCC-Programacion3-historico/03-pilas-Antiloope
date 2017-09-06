#ifndef PARENTESIS_H
#define PARENTESIS_H
#include <windows.h>
#include <iostream>

bool verificarParentesis(char* f,int pos, Pila<char> *A);
int companiera(char a);

bool verificarParentesis(char* f,int pos, Pila<char> *A) {
    if (pos < 0) {
        if (A->esVacia()) {
            return 1;
        }
        return 0;
    }
    if (f[pos] == '(' || f[pos] == '{' || f[pos] == '[') {
        if (A->esVacia()) {
            return 0;
        }
        if (companiera(A->peek()) == f[pos]) {
            A->pop();
        }
        else {
            return 0;
        }
    }
    if (f[pos] == ')' || f[pos] == '}' || f[pos] == ']') {
        A->push(f[pos]);
    }

    return verificarParentesis(f,pos-1,A);
}
int companiera(char a) {
    switch (a) {
      case ')':
        return '(';
      case ']':
        return '[';
      case '}':
        return '{';
    }
}

#endif
