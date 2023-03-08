#include <stdio.h>

int main (){
    int n, maior, menor, i;
  
    printf("Digite um número: ");scanf("%d", &n);
    maior = menor = n;
    i = 1;
  
    while (n != 0){
        printf("Digite um numero: ");scanf("%d", &n);
      
        if (n > maior) maior = n;
        if (n < menor) menor = n;
        i++;
    }
  
    printf("Maior número: %d \n", maior);
  
    printf("Menor número: %d \n", menor);
  
    printf("Números inseridos: %d \n", i);
  
    return 0;
}
