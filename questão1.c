#include <stdio.h>
int main(){
    char c = 'a';
    char *pc = &c;
    printf("O endereço de c é %p\n", &c);
    printf("O valor dque pc armazena é %p e o valor guardado no endereço apontado por ele é %c\n", pc, *pc);
    printf("O endereço de pc é %p\n", &pc);
}