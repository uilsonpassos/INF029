#include <stdio.h>
#include <string.h>

#define true 1; 
#define false 0;



typedef int boolean;
boolean ehBissexto(int ano);
int converterSTR(char sData[]);
int quebraData(char *data);
int validardata(int iDia, int iMes, int iAno);
int convertMES (int mes);




int main(){
	char dataNascimento[11];
  char dataAtual[11];
  int retorno;
    //teste 1
    printf("Digite a data de aniversário com duas barras");
    scanf("%[^\n]", dataNascimento);
      getchar();
    retorno = quebraData(dataNascimento);
    if(retorno == 0){
      printf("A data %s está correta\n", dataNascimento);
    }
    else
    printf("A data é inválida\n");

    printf("Digite a data atual");
    scanf("%[^\n]", dataAtual);
      getchar();
    retorno = quebraData(dataAtual);
    if(retorno == 0){
      printf("A data %s está correta\n", dataAtual);
    }
    else
    printf("A data é inválida\n");
    

	return 0;
}



// Função que verifica se um número é ou não bissexto.
boolean ehBissexto(int ano) {
    boolean bis;

    if (ano % 4 == 0 && !(ano % 100 == 0)){ bis = true;}
    else if (ano % 4 == 0 && (ano % 100 == 0 && ano % 400 == 0)){ bis = true;}
    else bis = false;

    return bis;
}



int converterSTR(char sData[]){

  int dig, i, j = 1, digFull = 0;

  for(int i = strlen(sData) - 1; i>=0; i--){

    dig = sData[i];
    dig = dig - 48;
    digFull = digFull + (dig * j);
    j = j * 10;
  }
  return digFull;
}

int convertMES (int iMes){
  int iMdia;

  if (iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes ==8 || iMes == 10 || iMes == 12){
      iMdia = 31;
  }

  if (iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11){
      iMdia = 30;
  }

  return iMdia;
}

int convertANO (int iAno){
  int iAdia;

    if (iAno % 4 == 0 && !(iAno % 100 == 0)){ iAdia = 366;}
    else if (iAno % 4 == 0 && (iAno % 100 == 0 && iAno % 400 == 0)){ iAdia = 366;}
    else iAdia = 365;

  return iAdia;
}


//quebrar a string data em strings sDia, sMes, sAno
//retorna 1 se tiver tudo certo
//retorna 0 se deu algum erro
int quebraData(char data[]){

	int erro = false;
  char sDia[3];
	char sMes[3];
	char sAno[5];
	int i, iDia, iMes, iAno, totalDias;
  int convert, validar;

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}
  convert = converterSTR(sDia);
  iDia = convert;
  printf("%d\n", iDia);
  
	
	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}
  convert = converterSTR(sMes);
  iMes = convert;
  iMes = convertMES(iMes);
  printf("%d\n", iMes);

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}


	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}
  convert = converterSTR(sAno);
  iAno = convert;
  iAno = convertANO(iAno);
  printf("%d\n", iAno);

  
  

    if ((iDia >= 1 && iDia <= 31) && (iMes >= 1 && iMes <= 12) && (iAno >= 1900 && iAno <= 2100)) //verifica se os numeros sao validos
        {
            if ((iDia == 29 && iMes == 2) && ((iAno % 4) == 0)) //verifica se o ano e bissexto
            {
                return false;
            }
            if (iDia <= 28 && iMes == 2) //verifica o mes de feveireiro
            {
                return false;
            }
            if ((iDia <= 30) && (iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11)) //verifica os meses de 30 dias
            {
                return false;
            }
            if ((iDia <=31) && (iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes ==8 || iMes == 10 || iMes == 12)) //verifica os meses de 31 dias
            {
                return false;
            }
            else
            {
                return true;
            }
      }
       else
           {
                return true;
           }

  return erro;
}

int calculaDiferenca(char dataNas[], char dataAtu[]){
    int diferenca;
    int diasAtual, diasNasc;


  return diferenca;
}
