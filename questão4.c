#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp;

    printf("Antes da troca: \n");
    printf("Valor de A: %d\n", *ptr1);
    printf("Valor de B: %d\n", *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Depois da troca: \n");
    printf("Valor de A: %d\n", *ptr1);
    printf("Valor de B: %d\n", *ptr2);

    return 0;
}