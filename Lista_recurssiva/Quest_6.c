#include <stdio.h>
#include <stdlib.h>

int expo(int k, int n){
  if(n == 0){
    return 1;
  }
  else
      return k * expo(k, n-1);

}

int main(void) {
    int n, k;

    printf("Digite um numero k, elevado a n: ");
    scanf("%d%d", &n, &k);

  printf("%d", expo(n,k));
  return 0;
}