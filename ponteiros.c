#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a; // p é um ponteiro para um inteiro, e armazena o endereço de a

    printf("Valor de a: %d\n", a); // Imprime o valor de a
    printf("Endereço de a: %p\n", &a); // Imprime o endereço de a
    printf("Valor de p (endereço de a): %p\n", p); // Imprime o valor de p, que é o endereço de a
    printf("Valor apontado por p (*p): %d\n", *p); // Imprime o valor apontado por p, que é o valor de a

    return 0;
}