#include <stdio.h>
int main(void)
{
	
    float preparamento_fisico;
    float sequencia_jogos;
    
    printf("Qual eh a sequencia de jogos: \n");
    scanf("%f", &sequencia_jogos);
    printf("Qual eh a nota de preparamento fisico: \n");
    scanf("%f", &preparamento_fisico);
    float stamina = fisico_atual( preparamento_fisico, sequencia_jogos);
    printf("O fisico atual eh: %f", stamina);

	return 0;
}
