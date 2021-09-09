#include <stdio.h>

int main()
{
	int start;
	int A, B;
	int soma = 1, divisao = 4, subtracao = 2, multiplicacao = 3;	

	do{
		printf("MENU DE INTERACAO Sair - 0, Somar - 1,  Subtrair - 2, Multiplicar - 3, Dividir - 4 \n");
		printf("Digite uma das opcoes\n");
		scanf("%i", &start);


		if(start == 0)
		{	
			printf("FIM DO PROGRAMA");
		}

		if(start == 1)
		{	
			printf("Digite dois numeros para somar\n");
			scanf("%i %i", &A, &B);
			soma = A + B;

			printf("Soma = %i\n", soma);
		}

		if(start == 2)
		{	
			printf("Digite dois numeros para subtracao\n");
			scanf("%i %i", &A, &B);
			subtracao = A - B;

			printf("Subtracao = %i\n", subtracao);
		}		
	
		if(start == 3)
		{	
			printf("Digite dois numeros para multiplicacao\n");
			scanf("%i %i", &A, &B);
			multiplicacao = A * B;

			printf("multiplicacao = %i\n", multiplicacao);
		}
	
		if(start == 4)
		{	
			printf("Digite dois numeros para divisao\n");
			scanf("%i %i", &A, &B);
			divisao = A / B;

			printf("divisao = %i\n", divisao);
		}		

	}while(start != 0);	
	
return 0;}
