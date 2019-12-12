/*
4. Fa�a uma fun��o recursiva que encontre o maior n�mero
   de um vetor de inteiros. Fa�a um programa que receba
   o vetor de inteiros com 10 posi��es e usando a fun��o
   implementada informe o maior n�mero do vetor.
*/
#include <stdio.h>
int max(int a, int b){
    if(a >= b)
        return a;
    else
        return b;
}

int maior(int *v, int n){
    if(n == 0)
        return v[n];
    else
        return max(v[n], maior(v, n-1));
}

int main(){
    int vet[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nMaior Elemento: %d", maior(vet, 9));
}
