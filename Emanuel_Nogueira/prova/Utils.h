#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

/* ---------------------------------------- */
/* tipo de dado INT */
/* ---------------------------------------- */
int comparaInt(void *info1, void *info2){
    int *p1 = (int *) info1;
    int *p2 = (int *) info2;
    return *p2 - *p1;
}
/* ---------------------------------------- */
void imprimeInt(void *info){
   int *pi = (int *) info;
   printf("%d - ", *pi);
}
/* ---------------------------------------- */
void* alocaInfoInt(void *info){
   int * pi = (int *) malloc(sizeof(int));
   *pi = *((int*)info);
   return pi;
}
/* ---------------------------------------- */
int* alocaInt(int n){
   int *pi = (int *) malloc(sizeof(int));
   *pi = n;
   return pi;
}
/***/
int* benditoPredicado (void *info){
   int *valor = (int*) info;
   return *valor % 3;
}
/* ---------------------------------------- */
void imprimeArrayDe3Int(void *info){
   int *array = (int*) info;
   for(int i=0;i<3;i++)
   printf(".%d",array[i]);
   printf(" - ");
}
#endif /* UTILS_H */
