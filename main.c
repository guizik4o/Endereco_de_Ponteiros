#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int var1, var2;

    int *p_var1 = &var1;
    int *p_var2 = &var2;

    printf("Endereco da variavel 1: %p\n", p_var1);
    printf("Endereco da variavel 2: %p\n", p_var2);

    if (p_var1 > p_var2) {
        printf("O endereco da variavel 1 e maior.\n");      
    } else {
       printf("O endereco da variavel 2 e maior.\n");
	}
	return 0;
} 
