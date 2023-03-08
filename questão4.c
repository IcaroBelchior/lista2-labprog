#include <stdio.h>

int main(){
    int pedro = 110, jose = 150, anos = 0;

    while (pedro < jose){
        pedro += 3;
        jose += 2;
        anos++;
    }

    printf("%d anos\n", anos);
  
    return 0;
}
