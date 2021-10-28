include <stdio.h>

int main(void) {
  int num[100], procurado, i, n = 0, aux = 0;
  
  printf("Digite um numero:\n");
  scanf("%d", num);

  printf("Digite o numero a ser procurado:\n");
  scanf("%d", &procurado);



  for(i = 0;i <= sizeof(num); i++){

    if(num[i] == procurado){
      aux++;
    }
  
  }

  printf("O numero %d foi achado %d", procurado, aux);



  return 0;
}