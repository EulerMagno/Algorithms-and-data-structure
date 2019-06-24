#include <stdio.h>
#include <math.h>
#include <locale.h>
#define MAX 7

/* =======================================
*  FACULDADE DE CI�NCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR J�NIOR
*  MATR�CULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

 
void quick_sort(int *a, int esq, int dir) 
{
    int i, j, x, y;
     
    i = esq;
    j = dir;
    x = a[(esq + dir) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < dir) {
            i++;
        }
        while(a[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        quick_sort(a, esq, j);
    }
    if(i < dir) {
        quick_sort(a, i, dir);
    }
}
 

int main(){
	
setlocale(LC_ALL, "Portuguese");	
 int i, vet[MAX],cont=0;
 
 	do{
		printf("******************************\n");
		printf("**********Quick Sort**********\n");
		printf("******************************\n\n");
		printf("Seu Max est� definido com %d valores \n",MAX);
		 for(i = 0; i < MAX; i++)
		 {
		  printf("Digite o %d� valor: ",i+1);
		  scanf("%d", &vet[i]);
		 }
		 printf("\nValores desordenados\n");
		 for(i = 0; i < MAX; i++)
		 {
		  printf("%d ", vet[i]);
		 }
		
		 quick_sort(vet, 0, MAX - 1);
		 
		 
		 printf("\nValores ordenados\n");
		 for(i = 0; i < MAX; i++)
		 {
		  printf("%d ", vet[i]);
		 }
		
		
		printf("\nRefazer as op��es?");
		printf("\n[1 = sim] [2 = nao ]:");
		scanf("%d", &cont);
		system("cls");
		while(cont!=1 && cont!=2)
		{
			printf("\n Digite uma op��o  v�lida!");
			printf("\n [1 = sim] [2 = nao ]:");
			scanf("%d", &cont);
			system("cls");
		}
	}while (cont!=2);
 return 0;
}
 


