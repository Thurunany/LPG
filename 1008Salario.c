#include <stdio.h>
 
int main() {
 
    int num, horas;
    float recebe;
    scanf("%d%d%f", &num, &horas, &recebe);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, horas * recebe);
 
    return 0;
}
