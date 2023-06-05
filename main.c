/*Diseñe una función que permita insertar un valor, de forma ordenada, dentro de una
lista de enteros.*/

#include "Numeros.h"

int main() {

    Lista * lista = newLista();

    enlistarOrdenado(lista, newNumero(3));
    enlistarOrdenado(lista, newNumero(9));
    enlistarOrdenado(lista, newNumero(5));
    enlistarOrdenado(lista, newNumero(6));
    enlistarOrdenado(lista, newNumero(18));
    enlistarOrdenado(lista, newNumero(11));
    enlistarOrdenado(lista, newNumero(1));
    enlistarOrdenado(lista, newNumero(4));
    enlistarOrdenado(lista, newNumero(20));
    enlistarOrdenado(lista, newNumero(19));
    enlistarOrdenado(lista, newNumero(15));
    enlistarOrdenado(lista, newNumero(14));
    enlistarOrdenado(lista, newNumero(2));

    printear(lista);


    return 0;
}
