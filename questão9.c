#include <stdio.h>

int main(){
    int ant = 1, ult = 1, prox, i;
  
    printf("1, 1, ");
  
    for(i = 1; i <= 20; i++){
        prox = ant + ult;
        ant = ult;
        ult = prox;
        printf("%d,", ult);
    }

    printf("O 20° termo da série de Fibonacci: %d\n", ult);
  
    return 0;
}
