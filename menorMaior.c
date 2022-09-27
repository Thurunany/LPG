#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, i = 0, menor = 0, maior = 0;

    while(i < 5) {
        printf("Valor %i: ", i+1);
        scanf("%d", &n);
        if(i == 0 || n > maior) {
            maior = n;
        }
        if(i == 0 || n < menor) {
            menor = n;
        }
        i = i + 1;
    }

    printf("O maior é %d, o menor é %d \n", maior, menor);

    return EXIT_SUCCESS;
}