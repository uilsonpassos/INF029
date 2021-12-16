#include <stdio.h>
#include <stdlib.h>

void seq(int n){      
    if(n == 0){
      printf("");
    }
    else {
        seq(n - 1);
        if(n % 2 == 0){
            printf("%i\n", n); 
        }
       }       
   }

int main (){
    int i;

   printf("Digite um numero para sequencia de pares crescente: ");
   scanf("%d", &i);
   seq(i);
   return 0;
}