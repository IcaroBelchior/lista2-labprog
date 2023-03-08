#include <stdio.h>

int main (){
    int n1, n2, divisao;
    
    printf("Digite o numerador: ");scanf("%d", &n1);
    
    do{
        printf("Digite um denominador nao nulo: ");scanf("%d", &n2);
        
    }while (n2 == 0);
    
    divisao = (float)n1 / n2;
    printf("%d / %d = %d\n", n1, n2, divisao);
    
    return 0;
}
