#include "arvore.h"

int eh_cheia(Arv A) {
    if (A == NULL) {
        return 1;
    }
    if (A->esq == NULL && A->dir == NULL){
        return 1;
    }
    if (A->esq != NULL && A->dir != NULL){
        return eh_cheia(A->esq) && eh_cheia(A->dir);
    }

    return 0;
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
    if (eh_cheia(T)) {
        printf("A arvore T e cheia.");
    }
    else {
        printf("A arvore T nao e cheia.");
    }
    printf("\n");

    destroi(&T);

    Arv U = NULL;
    int valores2[] = {9,5,8};
    for(int i = 0; i < 3; i++) {
        ins(valores2[i],&U);
    }

    printf("Arvore U em ordem: ");
    emordem(U);
    printf("\n");
    if (eh_cheia(U)) {
        printf("A arvore U e cheia.");
    }
    else {
        printf("A arvore U nao e cheia.");
    }

    destroi(&U);

    return 0;

}