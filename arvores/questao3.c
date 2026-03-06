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
    Arv R = NULL;
    int valores1[] = {4,2,6,1,3,5,7};
    for(int i = 0; i < 7; i++) {
        ins(valores1[i],&R);
    }

    printf("Arvore R em ordem: ");
    emordem(R);
    printf("\n");
    if (eh_completa(R)) {
        printf("A arvore R e completa.");
    }
    else {
        printf("A arvore R e incompleta.");
    }
    printf("\n");

    destroi(&R);

    Arv S = NULL;
    int valores2[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++) {
        ins(valores2[i],&S);
    }

    printf("Arvore S em ordem: ");
    emordem(S);
    printf("\n");
    if (eh_completa(S)) {
        printf("A arvore S e completa.");
    }
    else {
        printf("A arvore S e incompleta.");
    }
    printf("\n");
    
    destroi(&S);

    return 0;
    
}