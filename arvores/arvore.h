#ifndef ARVORE_H
#define ARVORE_H
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct arv {
    struct arv *esq;
    Item item;
    struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d);
void emnivel(Arv A);
void emordem(Arv A);
void preordem(Arv A);
void posordem(Arv A);
void destroi(Arv *A);
void ins(Item x, Arv *A);
int busca(Item x, Arv A);
Item remmax(Arv *A);
void rem(Item x, Arv *A);
void rem_fusao(Item x, Arv *A);

#endif