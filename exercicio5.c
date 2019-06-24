#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/


// "*a" é o vetor e "tamnho" é o número de itens existentes na lista. 
  void shell_sort(int *a, int tamanho) {

    int i , j , valor;
    int h = tamanho;

    do {
    h /= 2;
    for(i = h; i < tamanho; i++) {
      valor = a[i];
      j = i - h;

      while (j >= 0 && valor < a[j]) {
      a[j + h] = a[j];
      j -= h;
      }
      a[j + h] = valor;
    }
    }while(h > 1);
  }

int main() {
setlocale(LC_ALL, "Portuguese");
int i, vet[MAX], cont=0;
	do{
		printf("******************************\n");
		printf("**********Shell Sort**********\n");
		printf("******************************\n");
		for(i = 0; i < MAX; i++){
			
		  printf("Digite um valor: ");
		  scanf("%d", &vet[i]);
		 }
		shell_sort(vet, 10);
		// Imprime os valores ordenados
		printf("Valores ordenados: \n");
		
		for(i = 0; i < MAX; i++){
			
		  printf("%d \n", vet[i]);
		}
	

		printf("\nRefazer as opções?");
		printf("\n[1 = sim] [2 = nao ]:");
		scanf("%d", &cont);
		system("cls");
		while(cont!=1 && cont!=2)
		{
			printf("\n Digite uma opção  válida!");
			printf("\n [1 = sim] [2 = nao ]:");
			scanf("%d", &cont);
			system("cls");
		}
		
	}while (cont!=2);
 
}


