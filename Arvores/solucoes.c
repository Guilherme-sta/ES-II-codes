#include "arvore.h"

int main() {
    // testes:
    Arv R = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(NULL,3,arv(NULL,6,NULL)));
    printf("R em ordem: ");
    emordem(R);
    printf("\n");
    printf("R em pre-ordem: ");
    preordem(R);
    printf("\n");
    printf("R em pos-ordem: ");
    posordem(R);
    printf("\n");

    Arv S = NULL;
    ins(5,&S); 
    ins(7,&S); 
    ins(3,&S), 
    ins(9,&S); 
    ins(1,&S);
    ins(6,&S);
    ins(4,&S);
    ins(8,&S);
    ins(0,&S);
    ins(2,&S);
    printf("S em ordem: ");
    emordem(S);
    printf("\n");

    return 0;

    // questões:
}