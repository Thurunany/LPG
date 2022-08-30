#include <stdio.h> 
#include <stdlib.h>

int main(){

// 4) FUP que leia um numero e mostre a tabuada. 
    int numero, i;
    printf("Escolha um número.\n");
    scanf("%d", &numero);
    for(i = 1; i < 11; i++){
        printf("%d: %d \n", i, numero*i);
    };
  
  return EXIT_SUCCESS;
}
