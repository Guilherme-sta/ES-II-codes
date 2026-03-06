#ifndef FILAS_H
#define FILAS_H
#include <stdio.h>
#include <stdlib.h>

struct arv; 
typedef struct arv *Itemf; 

typedef struct fila {
    int max;    
    int total;  
    int inicio; 
    int final;  
    Itemf *item; 
} *Fila;

Fila fila(int m);
int vaziaf(Fila F);
int cheiaf(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);

#endif