/*2. Faça um programa que receba números inteiro e imprima o seu caractere ASCII
correspondente. O programa somente deverá aceitar valores inteiros entre os intervalos válidos
das letras maiúsculas (entre 65 e 90) e minúsculas (entre 97 e 122). O programa deverá se
repetir até que o usuário digite um valor negativo, quando isso ocorrer o programa deverá
imprimir a quantidade números digitados, a quantidade de números digitados dentro do
intervalo de letras maiúsculas, a quantidade de números digitados dentro do intervalo de letras
minúsculas e quantidade de números digitados que não são letras. Todas as quantidades devem
ser armazenadas numa única estrutura. Além disso, o programa deve ter uma função para
identificar se um número está dentro de um intervalo.*/

#include<stdio.h>
struct TESTE{
	int qD;//Armazenará qtd de números digitados
	int qDIM;//|| qtd de números letras maiúsculas
	int qDIN;// qtd de números letras minusculas
	int qNL;//qndt de numeros nao letras
	
};
int verifica(int x){
	if(x >= 65 && x <= 90){
		return 1;
	}
	else if(x >= 97 && x <= 122){
		return 2;
	}
	else{
		return 0;
	}
}
int main(){
	int number;
	struct TESTE t1;
	t1.qD = t1.qDIM = t1.qDIN = t1.qNL = 0;
	do{
		printf("\nInforme um número: ");
		scanf("%d",&number);
		t1.qD++;
		if(number > -1){
			switch(verifica(number)){
					case 0:	t1.qNL++;
							break;
					case 1:	t1.qDIM++;
							break;
					case 2: t1.qDIN++;
							break;
			}
			printf("\n\nCaractere ASCII ao %d: %c",number,number);
		}
	}while(number > -1);
	printf("\nQuantidade números digitados: %d",t1.qD);
	printf("\nQuantidade de números digitados dentro do intervalo de letras maiúsculas: %d",t1.qDIM);
	printf("\nQuantidade de números digitados dentro do intervalo de letras minusculas: %d",t1.qDIN);
	printf("\nQuantidade de números digitados que não são letras: %d",t1.qNL);
	return 0;
}
