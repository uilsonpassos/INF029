#include <stdio.h>
#include <stdlib.h>

void seq(int n){

            
    if(n == 0){
      printf("0");
    }
    else {
        seq(n - 1);
        printf("%i\n", n);
        
       }       
   }

int main (){
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

   seq(n);
   return 0;
}