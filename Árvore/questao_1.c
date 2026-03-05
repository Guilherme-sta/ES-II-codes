#include "arvore.h"

int nos(Arv A) {
    if (A == NULL) {
        return 0;
    }

    return 1 + nos(A->esq) + nos(A->dir);
}

int main() {
    Arv R = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(NULL,3,arv(NULL,6,NULL)));

    printf("Arvore R em ordem: ");
    emordem(R);
    printf("\n");
    printf("Total de nos em R: %d", nos(R));
    printf("\n");

    destroi(&R);

    Arv S = NULL;
    int valores[] = {5,7,3,9,1,6,4,8,0,2};
    for(int i = 0; i < 10; i++) ins(valores[i],&S);

    printf("Arvore S em ordem: ");
    emordem(S);
    printf("\n");
    printf("Total de nos em S: %d", nos(S));

    destroi(&S);
    
    return 0;
}