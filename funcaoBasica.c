#include <stdio.h> 
#include <stdlib.h>

// 6) Crie a função soma que recebe dois argumentos e devolve a multiplicação dos dois FUP que utilize esta função. 
int main(){
    int a, b;
    printf("Resultado: %d\n", multiplicar(a,b));
    
return EXIT_SUCCESS;
}

int multiplicar(a, b){
    int resultado;
    scanf("%d", &a);
    scanf("%d", &b);
    resultado = a*b;

    return resultado;
}
