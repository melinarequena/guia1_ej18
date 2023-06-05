/*Diseñe una función que permita insertar un valor, de forma ordenada, dentro de una
lista de enteros.*/
//
// Created by Administrador on 5/6/2023.
//

#include "Numeros.h"
#include <stdio.h>
#include <malloc.h>

Numero * newNumero(int num){
    Numero * auxNumero = NULL;
    auxNumero = malloc(sizeof(Numero));
    if(auxNumero==NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }else{
        auxNumero->num = num;
        auxNumero->sig = NULL;
    return auxNumero;
    }
}

Lista * newLista(){
    Lista * auxLista= NULL;
    auxLista = malloc(sizeof(Lista));
    if(auxLista == NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }else{
        auxLista->cabecera = NULL;
        return auxLista;
    }
}

void enlistarOrdenado(Lista * lista, Numero * numAIngresar){
    if(lista->cabecera == NULL){
        //Lista vacia
        lista->cabecera = numAIngresar;
    }else{
        Numero * ant = lista->cabecera;
        Numero * act = ant;
        while(act != NULL && numAIngresar->num > act->num){
            ant = act;
            act = act->sig;
        }
        if(act == NULL){
            ant->sig = numAIngresar;
        }else{
            if(lista->cabecera == act){
                numAIngresar->sig = lista->cabecera;
                lista->cabecera = numAIngresar;
            }else{
                numAIngresar->sig = act;
                ant->sig = numAIngresar;
            }
        }
    }
}

void printear(Lista * lista){
    while(lista->cabecera != NULL){
        printf("%d\n", lista->cabecera->num);
        lista->cabecera = lista->cabecera->sig;
    }
}