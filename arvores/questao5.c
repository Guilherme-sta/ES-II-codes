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
    Arv R = arv(
                arv(
                    arv(arv(NULL,0,NULL),1,arv(NULL,2,NULL)),
                    3,
                    arv(NULL,4,arv(arv(NULL,5,NULL),6,arv(NULL,7,NULL)))
                ),
                8,
                arv(
                    arv(NULL,10,NULL),
                    11,
                    arv(arv(NULL,12,NULL),13,arv(NULL,14,NULL))
                )
            );
    
    printf("Arvore R em ordem: ");
    emordem(R);
    printf("\n");
    printf("Altura de R: %d", altura(R));
    printf("\n");
    rem_fusao(8,&R);
    printf("Arvore R em ordem apos remocao por fusao do 8: ");
    emordem(R);
    printf("\n");
    printf("Altura de R apos remocao por fusao do 8: %d", altura(R));

    destroi(&R);

    return 0;
    
}