#include <stdio.h>
#include <stdlib.h>

void seq(int n){      
    if(n == 0){
      printf("");
    }
    else {
        if(n % 2 == 0){
            printf("%i\n", n); 
        }
        seq(n - 1);
       }       
   }

int main (){
    int i;

   printf("Digite um numero para sequencia de pares decrescente: ");
   scanf("%d", &i);
   seq(i);
   return 0;
}