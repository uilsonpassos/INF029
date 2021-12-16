#include <stdio.h>
#include <stdlib.h>

void seq(int n){
   
    if(n == 0){
      printf("0");
    }
    else {
        printf("%i\n", n);
        seq(n - 1);
       }       
   }

int main (){
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

   seq(n);
   return 0;
}