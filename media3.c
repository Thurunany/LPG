#include <stdio.h>

int main(void)
{
    float n[3], media, soma;
    int i;
    for(i=0; i<3; i++){
        printf("Diga a nota %i: ", i+1);
        scanf("%f", &n[i]);
        soma += n[i];    
    }
    media = soma/i;
    printf("Media = %f \n", media);
    
    return 0;
}
