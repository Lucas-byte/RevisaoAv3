/*2. Fa�a um programa que receba n�meros inteiro e imprima o seu caractere ASCII
correspondente. O programa somente dever� aceitar valores inteiros entre os intervalos v�lidos
das letras mai�sculas (entre 65 e 90) e min�sculas (entre 97 e 122). O programa dever� se
repetir at� que o usu�rio digite um valor negativo, quando isso ocorrer o programa dever�
imprimir a quantidade n�meros digitados, a quantidade de n�meros digitados dentro do
intervalo de letras mai�sculas, a quantidade de n�meros digitados dentro do intervalo de letras
min�sculas e quantidade de n�meros digitados que n�o s�o letras. Todas as quantidades devem
ser armazenadas numa �nica estrutura. Al�m disso, o programa deve ter uma fun��o para
identificar se um n�mero est� dentro de um intervalo.*/

#include<stdio.h>
struct TESTE{
	int qD;//Armazenar� qtd de n�meros digitados
	int qDIM;//|| qtd de n�meros letras mai�sculas
	int qDIN;// qtd de n�meros letras minusculas
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
		printf("\nInforme um n�mero: ");
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
	printf("\nQuantidade n�meros digitados: %d",t1.qD);
	printf("\nQuantidade de n�meros digitados dentro do intervalo de letras mai�sculas: %d",t1.qDIM);
	printf("\nQuantidade de n�meros digitados dentro do intervalo de letras minusculas: %d",t1.qDIN);
	printf("\nQuantidade de n�meros digitados que n�o s�o letras: %d",t1.qNL);
	return 0;
}
