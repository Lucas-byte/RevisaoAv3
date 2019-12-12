/*1. Fa�a um programa que crie um vetor din�mico de inteiros a partir de uma quantidade de
posi��es fornecida pelo usu�rio. Receba do usu�rio o valor de cada posi��o do vetor de acordo
com as seguintes regras: os elementos do vetor com �ndice par s� dever� aceitar valores
m�ltiplos de tr�s e os elementos com �ndice �mpar s� dever� aceitar n�meros primos. O
programa s� dever� armazenar o valor lido caso ele atenda as regras, caso contr�rio, o
programa dever� informar que o valor n�o atende aos requisitos de preenchimento e solicitar
um novo n�mero para a mesma posi��o. O programa dever� ter uma fun��o para informar se
um n�mero � m�ltiplo de tr�s e outra para informar se um n�mero � primo.*/
#include<stdio.h>
#include<stdlib.h>
int primo(int n1){
	int qD = 0,i;
	for(i = 2;i <= n1;i++){
		if(n1 % i == 0)
			qD++;
	}
	if(qD == 1)
		return 1;
	else
		return 0;
}
int multi3(int n1){
	if(n1 % 3 == 0)
		return 1;
	else
		return 0;
}
int main(){
	int tam,i,num;
	int *vet;
	printf("\nInforme o tamanho do vetor: ");
	scanf("%d",&tam);
	vet = (int *) malloc(tam * sizeof(int));
	if(vet != NULL){
		for(i = 0;i < tam;i++){
			if(i % 2 == 0){
				printf("\n");
				printf("\nInforme um n�mero para a posi��o %d: ",i);
				scanf("%d",&num);
				if(multi3(num)){
					*(vet + i) = num;
				}
				else{
					printf("\nValor Inv�lido");
					i--;
				}
			}
			else{
				printf("\n");
				printf("\nInforme um n�mero para a posi��o %d: ",i);
				scanf("%d",&num);
				if(primo(num)){
					*(vet + i) = num;
				}
				else{
					printf("\nValor Inv�lido");
					i--;
				}
			}
		}
	}
	printf("\nVetor: ");
	for(i = 0;i < tam;i++){
		printf("%d ",*(vet + i));
	}
	free(vet);
	return 0;
}
