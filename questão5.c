#include <stdio.h>
int soma(int *ptrA, int *ptrB){
    *ptrA = *ptrA * 2;
    *ptrB = *ptrB * 2;
    return *ptrA + *ptrB;
}
int main(){
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int resultado = soma(&A, &B);

    printf("A soma do dobro de A e B é: %d\n", resultado);
    return 0;
}