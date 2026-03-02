#include "fila.h" 
#include <stdio.h> 
#include <stdlib.h> 

static void avanca(int *i, Fila F) {
    *i = (*i + 1) % F->max;
}

Fila fila(int m) {
    Fila F = (Fila)malloc(sizeof(struct fila));
    if (F == NULL) {
        puts("Erro: Memória insuficiente para criar a Fila.");
        abort(); 
    }
    F->max = m;
    F->total = 0;
    F->inicio = 0;
    F->final = 0;
    F->item = (Itemf*)malloc(m * sizeof(Itemf));
    if (F->item == NULL) {
        free(F); 
        puts("Erro: Memória insuficiente para os itens da Fila.");
        abort();
    }
    
    return F;
}

int vaziaf(Fila F) {
    return F->total == 0;
}

int cheiaf(Fila F) {
    return F->total == F->max;
}

void enfileira(Itemf x, Fila F) {
    if (cheiaf(F)) {
        puts("Erro: Fila cheia. Não é possível enfileirar.");
        abort();
    }
    F->item[F->final] = x;
    avanca(&(F->final), F);
    F->total++;
}

Itemf desenfileira(Fila F) {
    if (vaziaf(F)) {
        puts("Erro: Fila vazia. Não é possível desenfileirar.");
        abort();
    }
    Itemf x = F->item[F->inicio]; 
    avanca(&(F->inicio), F);
    F->total--;

    return x;
}

void destroif(Fila *G) {
    if (*G != NULL) {
        free((*G)->item);
        free(*G);
        *G = NULL;
    }
}