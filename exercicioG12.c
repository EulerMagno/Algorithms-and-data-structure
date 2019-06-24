#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/


void intercalar (int v[],int aux[],int ini1, int ini2,int fim2){

  int in1=ini1,in2=ini2,fim1=in2-1,au=0,i;

  while(in1<=fim1 && in2<=fim2){
    if (v[in1]<v[in2]){
    aux[au++] = v[in1++];
    }
    else{
    aux[au++] = v[in2++];
    }
 }
 while(in1<=fim1){
  aux[au++] = v[in1++];
 }

 while(in2<=fim2){
  aux[au++] = v[in2++];
 }
 
 for(i=0;i<au;i++){
  v[i+ini1]=aux[i];}
}

void mergeSort (int v[], int aux[],int esq, int dir){
  int meio,i;
    if(esq<dir){
      meio=(esq+dir)/2;
      mergeSort(v,aux,esq,meio);
      mergeSort(v,aux,meio+1,dir);
      intercalar(v,aux,esq,meio+1,dir);  
    }
}
int main(){
	
setlocale(LC_ALL, "Portuguese");
int v[10], i=0, aux[10], cont=0;

	do{
	
		printf("**********************************************\n");
		printf("*******************Merge Sort*****************\n");
		printf("**********************************************\n");
		
	 	for(i=0;i<10;i++){
	 		printf("Digite um valor: ");
			scanf("%d", &v[i]);
		}
	 	mergeSort(v,aux,0,9);
	 
	 	for(i=0;i<10;i++){
	  		printf("%d ",v[i]);
	 	}
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
