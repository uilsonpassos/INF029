#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
  
  if(n == 1){
    return 0;
  }

  if(n == 2){
    return 1;
  }

  return fibo(n - 1) + fibo(n - 2);

}

int main(void) {
  int num;
  printf("Digite um valor n para sequencia de Fibonacci: ");
  scanf("%d", &num);
  for(int i = 0; i < num; i++){
      printf("%d\n", fibo(i + 1));
      }

  
  return 0;
}