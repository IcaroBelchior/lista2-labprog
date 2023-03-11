#include <stdio.h>

int main(){
    int numero, i, j, soma = 0;
  
    printf("Digite um número: ");scanf("%d", &numero);
  
    for(i = 0; i <= 4; i++){
        j = numero % 10;
        numero /= 10;
        soma += j;
    }
    if(soma == numero){
        printf("O numero %d é um palindromo\n", numero);
    }
    else{
        printf("O numero %d não é um palindromo\n", numero);
    }
  
    return 0;
}
