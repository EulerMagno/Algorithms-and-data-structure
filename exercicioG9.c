//Algoritmo de ordenação por seleção
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/


//Função Selection Sort
void selectionSort(int n, int a[]) { //Selection recebendo tamanho e vetor //O(n^2)

    int i;
    for (i = 0; i < n - 1; i++) { //Loop para percorrer o vetor //O(n)
        
        int minIndex = i;
        int k;
        int aux;

        for (k = i + 1; k < n; k++) //Percorreremos o vetor da posiçao 1 ate o tamanho estimado // O(n-1)
        {
            if (a[minIndex] > a[k]) {
                minIndex = k;
            }
        }
       
        aux = a[i];         
        a[i] = a[minIndex]; 
        a[minIndex] = aux;  
       //printf("%d %d %d \n",aux,a[i],a[minIndex]);
    }
}




int main() {
	
setlocale(LC_ALL, "Portuguese");
int B[10],i,cont=0;

	do{
	
	    printf("**********************************************\n");
		printf("*************Ordenação Por Seleção************\n");
		printf("**********************************************\n");
	    for(i = 0; i <10; i++){
				
			  printf("Digite um valor: ");
			  scanf("%d", &B[i]);
			 }
	    printf("Vetor desordenado\n");
	    printf("B = [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n", B[0], B[1], B[2], B[3], B[4], B[5], B[6], B[7], B[8], B[9]);
	
	    selectionSort(10, B);
	
	    printf("Vetor ordenado\n");
	    printf("B = [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n", B[0], B[1], B[2], B[3], B[4], B[5], B[6], B[7], B[8], B[9]);
	    
			printf("\n");
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
	    
    return 0;
}

