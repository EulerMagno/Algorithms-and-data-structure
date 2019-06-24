#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define total 10


/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/


int main(){ 

setlocale(LC_ALL, "Portuguese");
int v[10];
int x, inicio=0, meio , fim=9,cont;
int num;          //número a ser buscado.

	do{
		printf("**********************************************\n");
		printf("***************Pesquisa Binária***************\n");
		printf("**********************************************\n");
		
	    printf("\nPreencha o vetor de forma ordenada\n");
	    for(x=0; x <10; x++){
	
	     printf("insira o elemento %d do vetor\n",x+1);
	     scanf("%d",& v[x]);
	   }
	      printf("\nInsira o numero que deseja fazer a busca binaria\n");
	        scanf("%d",&num); 
	
	    if(v[inicio]==num) {
	      printf("o numero encontrado esta no indice %d\n",inicio);
	    }else
	       if(v[fim]==num){
	        printf("o numero encontrado esta no indice %d\n",fim);
	    }else { 
	
		    while(inicio<=fim) {
		      meio=(inicio+fim)/2;  // a cada interaçao o vetor sera  dividido ao meio
		       if (v[meio]==num){
		         printf("o numero encontrado esta no indice %d\n",meio);
		          break; //caso o valor chave buscado seja exatamente o meio do vetor, encerra-se a busca
		     }else if(num>v[meio]){
		        inicio=meio+1;   //caso o valor chave nao seja encontrado a busca inicia na parte direita do indice central
		       }else{ 
		         fim=meio-1;   // buscando valor chave a esquerda 
		     	}	 
	    	} 
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
