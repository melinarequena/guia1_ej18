/*Diseñe una función que permita insertar un valor, de forma ordenada, dentro de una
lista de enteros.*/
//
// Created by Administrador on 5/6/2023.
//

#ifndef GUIA1_EJ18_NUMEROS_H
#define GUIA1_EJ18_NUMEROS_H

typedef struct numero{
    int num;
    struct numero * sig;
}Numero;

typedef struct lista{
    Numero * cabecera;
}Lista;

Numero * newNumero(int num);
Lista * newLista();
void enlistarOrdenado(Lista * lista, Numero * numAIngresar);
void printear(Lista * lista);


#endif //GUIA1_EJ18_NUMEROS_H
