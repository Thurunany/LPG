#include <stdio.h> 
#include <stdlib.h>

int main(){

// 5) FUP que leia  5 numeors em um vetor e mostre o maior.
    int v[5], i, maior =0;
    printf("Digite 5 numeros: \n");
    for(i=0; i<5; i++){
        scanf("%d", &v[i]);
        if(v[i] > maior){
            maior = v[i];
        }
    }
    printf("O maior numero é: %d\n", maior);
  
return EXIT_SUCCESS;
}
