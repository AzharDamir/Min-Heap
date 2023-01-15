// Heap.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "HeapImp.h"

int main()
{
    HeapImp* h = new HeapImp();// Min Heap
    int elem = 1;
    //execution de 4s
    while (elem < 10000000) {
        h->insert(elem);
        elem++;
    }
    // h->display();
    return 0;
}
