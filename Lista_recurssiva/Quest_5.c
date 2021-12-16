#include <stdio.h>
#include <stdlib.h>

int somaseq(int n){
  
  if(n == 0){
    return 0;
  }
  else{
      return n + somaseq(n - 1);
  }

}

int main(void) {
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("%d", somaseq(n));
  return 0;
}