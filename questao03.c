/*3. Faça um programa que gere aleatoriamente duas cadeias de letras minúsculas. A quantidade de
caracteres em cada uma das cadeias deve variar aleatoriamente entre 10 e 20 caracteres. Após
isso o programa deve calcular e imprimir a quantidade de vogais em cada uma das cadeias e a
quantidade de caracteres coincidentes (mesmo caractere na mesma posição) entre as duas
cadeias. As duas cadeias, as quantidades de caracteres, as quantidades de vogais e a
quantidade de caracteres coincidentes devem ser armazenadas numa única estrutura. Além
disso, o programa deve ter uma função para informar a quantidade de vogais dentro de uma
cadeia de caracteres recebida.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct TESTE{
	int qV1;
	int qV2;
	int qCo;
	int qCa1;
	int qCa2;
	char frase1[21];
	char frase2[21];
};
int vogais(char *f){
  int i,qntd = 0;
  for(i = 0; *(f + i) != '\0';i++){
    if((*(f + i) == 'a') || (*(f + i) == 'e') ||(*(f + i) == 'i') || (*(f + i) == 'o') || (*(f + i) == 'u')){
      qntd++;
    }
  }
  return qntd;
}
int tamanho(){
	int number;
  	do{
    	number = (rand() % (20 - 1 + 1)) + 1;
  	}while((number != 20) && (number != 10));
  	return number;
}

int main(){
	srand(time(0));
	int tam,i;
	struct TESTE t1;
	t1.qCo = 0;
	tam = tamanho();
	t1.qCa1 = tam;
	for(i = 0;i <= tam;i++){
		*(t1.frase1 + i)= ((rand() % (122 - 97 + 1)) + 97);
		if(i == tam){
      		*(t1.frase1 + i) = '\0';
    	}
	}
	tam = tamanho();
	t1.qCa2 = tam;
	for(i = 0;i <= tam;i++){
		*(t1.frase2 + i) = ((rand() % (122 - 97 + 1)) + 97);
		if(i == tam){
      		*(t1.frase2 + i) = '\0';
    	}
		
	}
	t1.qV1 = vogais(t1.frase1);
	t1.qV2 = vogais(t1.frase2);
	if(t1.qCa1 > t1.qCa2){
		for(i = 0;*(t1.frase2 + i) != '\0';i++){
			if(*(t1.frase1 + i) == *(t1.frase2 + i)){
				t1.qCo++;
			}
		}
	}
	else{
		for(i = 0;*(t1.frase1 + i) != '\0';i++){
			if(*(t1.frase1 + i) == *(t1.frase2 + i)){
				t1.qCo++;
			}
		}
	}
	printf("\nCadeia 1: %s",t1.frase1);
	printf("\nQuantidade de vogais: %d",t1.qV1);
	printf("\nCadeia 2: %s",t1.frase2);
	printf("\nQuantidade de vogais: %d",t1.qV2);
	printf("\n\nQuantidade de caracteres coincidentes: %d",t1.qCo);
	return 0;
}
