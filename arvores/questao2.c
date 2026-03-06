#include "arvore.h"

int altura(Arv A) {
    if (A == NULL) {
        return -1;
    }

    int h_esq = altura(A->esq);
    int h_dir = altura(A->dir);
    return 1 + (h_esq > h_dir ? h_esq : h_dir);
}

int main() {
        Arv R = arv(arv(arv(NULL,
                        4,
                        NULL),
                    2,
                    arv(NULL,
                        5,
                        NULL)),
                1,
                arv(NULL,
                    3,
                    arv(NULL,
                        6,
                        NULL)));

    printf("Arvore R em ordem: ");
    emordem(R);
    printf("\n");
    printf("Altura de R: %d", altura(R));
    printf("\n");

    destroi(&R);

    Arv S = NULL;
    int valores[] = {5,7,3,9,1,6,4,8,0,2};
    for(int i = 0; i < 10; i++) {
        ins(valores[i],&S);
    }

    printf("Arvore S em ordem: ");
    emordem(S);
    printf("\n");
    printf("Altura de S: %d", altura(S));

    destroi(&S);
    
    return 0;
    
}