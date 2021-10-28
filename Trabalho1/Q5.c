#include <stdio.h>

int main(void) {
  int num, aux, invert = 0;
  
  printf("Digite um numero:\n");
  scanf("%d", &num);


  for(;num > 0;){
  aux = num % 10;
  invert = invert * 10 + aux;
  num /= 10;
  }

  printf("%d", invert);



  return 0;
}