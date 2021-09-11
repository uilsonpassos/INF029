#include <stdio.h>

typedef struct pessoa{
   
    char nome[100];
    char sexo;
    int cpf;
    int dia, mes, ano;

}dados_pessoa;

void digite_data(dados_pessoa * dma){
    printf("Digite o dia: \n");
    scanf("%d", &(*dma).dia);
   
    printf("Digite o mes: \n");
    scanf("%d", &(*dma).mes);

    printf("Digite o ano: \n");
    scanf("%d", &(*dma).ano);

}

void digite_nome(dados_pessoa * no){
    printf("Nome: \n");
    scanf("%s", &(*no).nome[0]);
}

void digite_sexo(char * sexo){
    printf("Sexo: \n");
    scanf(" %c", (& sexo));
	}

void digite_cpf(dados_pessoa * cp){
    printf("CPF: \n");
    scanf("%d", &(*cp).cpf);
}


int main()
{
    dados_pessoa ler_data;
    digite_data(&ler_data);
    digite_sexo(&ler_data);


    return 0;
}