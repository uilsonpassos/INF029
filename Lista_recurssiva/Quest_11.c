#include <stdio.h>
#include <stdlib.h>

int Multip_Rec(int k, int n){
  if(n == 0){
    return 0;
  }
  else
      return k + Multip_Rec(k, n-1);

}

int main(void) {
    int n, k;

    printf("Digite 2 números para multiplicacao: ");
    scanf("%d%d", &n, &k);

  printf("%d", Multip_Rec(n,k));
  return 0;
}