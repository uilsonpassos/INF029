#include <stdio.h>
#include <stdlib.h>

int fat(int n){
  if(n == 0 || n == 1){
    return 1;
  }
  else
      return n * fat(n - 1);
  
}

int main(void) {
  int a, b;
  
  printf("Digite um numero para fatorial\n");
  scanf("%d", &a);

  b = fat(a);
  printf("Fatorial = %d", b);
  
  
}