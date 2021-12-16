#include <stdio.h>
#include <stdlib.h>

int j = 0;

void inverter(int n){
  

  if(n){
        
        j = j + (n % 10);
        j = j * 10;
        
        
        inverter(n/10);
  }
    if(n == 0){
      j = j/10;
    printf("%d", j);
  }
  
}

int main(void) {
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);


  inverter(n);
  return 0;
}