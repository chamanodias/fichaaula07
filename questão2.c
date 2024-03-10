#include <stdio.h>

int main() {
    int *ptrint;
    char *ptrchar;
    float *ptrfloat;
    int num = 10;
    char palavra[] = "Mágica";
    float peso = 100.10;
    
    printf("Valor de Num antes da troca: %d\n", num);
    ptrint = &num;
    *ptrint = 20;
    printf("Valor de Num depois da troca: %d\n", num);
    
    printf("Valor de palavra antes da troca: %s\n", palavra);
    ptrchar = palavra;
    *ptrchar = 'b';
    printf("Valor de palavra depois da troca: %s\n", palavra);
    
    ptrchar = palavra;
    *(ptrchar + 1) = 'b';
    printf("Valor de palavra depois da troca: %s\n", palavra);
    
    printf("Valor de Peso antes da troca: %f\n", peso);
    ptrfloat = &peso;
    *ptrfloat = 70.0;
    printf("Valor de peso depois da troca: %f\n", peso);

    return 0;
}
