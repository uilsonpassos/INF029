int fatorial(int fat){
	int resposta = 1;
	
	if(fat > 0){

		for (; fat>=1; --fat){
			resposta *= fat;
		}
	}
	
	return resposta;
}