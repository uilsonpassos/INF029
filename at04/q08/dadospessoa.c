#include <stdio.h>
#include <stdlib.h>

    typedef struct pessoa{
        
        char nome[100];
        char sexo[2];
        char data_nascimento[20];        
        char cpf[14];
    }dados_pessoa;
    
    dados_pessoa inserirnome(){
        dados_pessoa nombre;
        
        printf("NOME: \n");
        fgets(nombre.nome, 100, stdin);
        
        return nombre;
    }
    
    dados_pessoa inserirsexo(){
        dados_pessoa sex;
        
        printf("SEXO: \n");
        fgets(sex.sexo, 2, stdin);
        
        return sex;
    }
    
    dados_pessoa inserircpf(){
        dados_pessoa CP;
        
        printf("CPF: \n");
        fgets(CP.cpf, 14, stdin);
        
        return CP;
    }
    
    dados_pessoa inserirdata(){
        dados_pessoa DATA;
        
        printf("DATA DE NASCIMENTO: \n");
        fgets(DATA.data_nascimento, 20, stdin);
        
        return DATA;
    }
    
    

int main()
{   
    dados_pessoa imprimir_nome;
    dados_pessoa imprimir_sexo; 
    dados_pessoa imprimir_dtnas; 
    dados_pessoa imprimir_cpf;
    
    imprimir_nome = inserirnome();
    imprimir_sexo = inserirsexo();
    imprimir_dtnas = inserirdata();
    imprimir_cpf = inserircpf();
    
    printf("O nome eh: %s\n", imprimir_nome.nome);
    printf("O sexo eh: %s\n", imprimir_sexo.sexo);
    printf("O data de nascimento eh: %s \n", imprimir_dtnas.data_nascimento);    
    printf("O cpf eh: %s\n", imprimir_cpf.cpf);
    return 0;
}