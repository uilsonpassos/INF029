#include <stdio.h>
int main(void)
{
	
    int numero_a;
    int numero_b;
    int numero_c;
    
    printf("Digite o numero A: \n");
    scanf("%d", &numero_a);
    printf("Digite o numero B: \n");
    scanf("%d", &numero_b);
    printf("Digite o numero B: \n");
    scanf("%d", &numero_c);
    int Operacao = subtrai( numero_a, numero_b, numero_c);
    printf("O resultado da subtracao eh: %d", Operacao);

	return 0;
}
