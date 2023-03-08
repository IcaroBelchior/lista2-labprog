#include <stdio.h>
#include <stdio.h>

int main(){
    int valor, entrada, prestacao, diferenca;
  
    printf("Digite o valor da mercadoria: ");scanf("%d", &valor);
  
    diferenca = valor % 3;
    prestacao = valor / 3;
    entrada = prestacao + diferenca;
  
    printf("Entrada: %d\n", entrada);
    printf("Prestações: %d\n", prestacao);
  
    return 0;
}
