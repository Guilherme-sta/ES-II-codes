#include "arvore.h"
#include <math.h>

int conta_nos(Arv A) {
    if (A == NULL) {
        return 0;
    }

    return 1 + conta_nos(A->esq) + conta_nos(A->dir);
}

int altura(Arv A) {
    if (A == NULL) {
        return -1;
    }
    
    int h_esq = altura(A->esq);
    int h_dir = altura(A->dir);
    return 1 + (h_esq > h_dir ? h_esq : h_dir);
}

int eh_completa(Arv A) {
    if (A == NULL) {
        return 1;
    }

    int n = conta_nos(A);
    int h = altura(A);
    return (h == (int)log2(n));
}

int main() {
    Arv T = NULL;
    int valores1[] = {4,2,6,1,3,5,7};
    for(int i = 0; i < 7; i++) {
        ins(valores1[i],&T);
    }

    printf("Arvore T em ordem: ");
    emordem(T);
    printf("\n");
    if (eh_completa(T)) {
        printf("A arvore T e completa.");
    }
    else {
        printf("A arvore T e incompleta.");
    }
    printf("\n");

    destroi(&T);

    Arv U = NULL;
    int valores2[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++) {
        ins(valores2[i],&U);
    }

    printf("Arvore U em ordem: ");
    emordem(U);
    printf("\n");
    if (eh_completa(U)) {
        printf("A arvore U e completa.");
    }
    else {
        printf("A arvore U e incompleta.");
    }
    printf("\n");
    
    destroi(&U);

    return 0;
}