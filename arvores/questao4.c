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
    Arv R = NULL;
    int valores1[] = {4,2,6,1,3,5,7};
    for(int i = 0; i < 7; i++) {
        ins(valores1[i],&R);
    }

    printf("Arvore R em ordem: ");
    emordem(R);
    printf("\n");
    if (eh_cheia(R)) {
        printf("A arvore R e cheia.");
    }
    else {
        printf("A arvore R nao e cheia.");
    }
    printf("\n");

    destroi(&R);

    Arv S = NULL;
    int valores2[] = {9,5,8};
    for(int i = 0; i < 3; i++) {
        ins(valores2[i],&S);
    }

    printf("Arvore S em ordem: ");
    emordem(S);
    printf("\n");
    if (eh_cheia(S)) {
        printf("A arvore S e cheia.");
    }
    else {
        printf("A arvore S nao e cheia.");
    }

    destroi(&S);

    return 0;

}