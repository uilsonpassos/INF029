#include <stdio.h>
#include <stdlib.h>


typedef struct{
        
    int geral;
    char nome[20];
    char genero;
    char data_nascimento[10];        
    char cpf[14];
}dados_pessoais; 

    
int cadastro(){
    dados_pessoais dados;
    dados.geral = -1;

        printf("NOME: ");
        fgets(dados.nome, 20, stdin);
        printf("SEXO: ");
        scanf("%c", &dados.genero);
        printf("DATA DE NASCIMENTO: ");
        scanf("%s", dados.data_nascimento);
            getchar();
        printf("CPF: ");
        fgets(dados.cpf, 14, stdin);
            
        
    }
    

    dados_pessoais validanome(){
        dados_pessoais dados;
        int inome;
        int dadonome = 0;
        
        while(dados.nome[inome] != '\0'){
            inome++;
        }
        if (inome > 20){
            printf("Erro ---- Nome invalido");
        }
    }
    
    dados_pessoais validagenero(){
        dados_pessoais dados;
        int dadogenero = 0;
        
        if(dados.genero != 'M' && dados.genero != 'm' && dados.genero != 'F' && dados.genero != 'f'  && dados.genero != 'O' && dados.genero != 'o'){
            printf("Erro ---- Genero incorreto ");;
        }
    }
    
    dados_pessoais validadata(){
        dados_pessoais dados;
        int idata;
        int dadodata = 0;
        
        while(dados.data_nascimento[idata] != '\0'){
            idata++;
        }
        
        if (idata > 10){
            printf("Erro ---- Data incorreta");
        }
    }
    
    dados_pessoais validacpf(){
        dados_pessoais dados;
        int icpf;

        while(dados.cpf[icpf] != '\0'){
            icpf++;
        }
        
        if (icpf > 11){
            printf("Erro ---- CPF incorreto");
        }
    }
        


int main()
{   
    cadastro();
    
    validanome();
    validagenero();
    validadata();
    validacpf();

}