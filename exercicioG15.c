#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* =======================================
*  FACULDADE DE CI�NCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR J�NIOR
*  MATR�CULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

/* Implementa��o de �rvore bin�ria */


/* Cada n� armazena tr�s informa��es:
   nesse caso um n�mero (num),
   ponteiro para sub-�rvore � direita (sad)
   e ponteiro para sub-�rvore � esquerda (sae) */
   
typedef struct tree
{
  int num;
  struct tree* sad;
  struct tree* sae;
} Tree;

/* A estrutura da �rvore � representada por um ponteiro
   para o n� raiz. Com esse ponteiro, temos acesso aos
   demais n�s. */

/* Fun��o que cria uma �rvore */

Tree* createTree()
{
  /* Uma �rvore � representada pelo endere�o do n� raiz,
     essa fun��o cria uma �rvore com nenhum elemento,
     ou seja, cria uma �rvore vazia, por isso retorna NULL. */
     
  return NULL;
}

/* Fun��o que verifica se uma �rvore n� vazia */
int treeIsEmpty(Tree* t)
{
  /* Retorna 1 se a �rvore for vazia e 0 caso contr�rio */
  return t == NULL;

}

/* Fun��o que mostra a informa��o da �rvore */
void showTree(Tree* t)
{
  /* Essa fun��o imprime os elementos de forma recursiva */
  
  printf("<"); /* nota��o para organizar na hora de mostrar os elementos */
  if(!treeIsEmpty(t)) /* se a �rvore n�o for vazia... */
  {
    /* Mostra os elementos em pr�-ordem */
    printf("%d ", t->num); /* mostra a raiz */
		showTree(t->sae); /* mostra a sae (sub�rvore � esquerda) */
  		showTree(t->sad); /* mostra a sad (sub�rvore � direita) */
  }
  printf(">"); /* nota��o para organizar na hora de mostrar os elementos */
}

/* Fun��o que insere um dado na �rvore */
void insertTree(Tree** t, int num)
{
  /* Essa fun��o insere os elementos de forma recursiva */
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree)); /* Aloca mem�ria para a estrutura */
    (*t)->sae = NULL; /* Sub-�rvore � esquerda � NULL */
    (*t)->sad = NULL; /* Sub-�rvore � direita � NULL */
    (*t)->num = num; /* Armazena a informa��o */
  } else {
    if(num < (*t)->num) /* Se o n�mero for menor ent�o vai pra esquerda */
    {
      /* Percorre pela sub-�rvore � esquerda */
      insertTree(&(*t)->sae, num);
    }
    if(num > (*t)->num) /* Se o n�mero for maior ent�o vai pra direita */
    {
      /* Percorre pela sub-�rvore � direita */
      insertTree(&(*t)->sad, num);
    }
  }
}

/* Fun��o que verifica se um elemento pertence ou n�o � �rvore */
int isInTree(Tree* t, int num) {
  
  if(treeIsEmpty(t)) { /* Se a �rvore estiver vazia, ent�o retorna 0 */
    return 0;
  }
  
  /* O operador l�gico || interrompe a busca quando o elemento for encontrado */
  return t->num==num || isInTree(t->sae, num) || isInTree(t->sad, num);
}

int main(){
	
setlocale(LC_ALL, "Portuguese");
int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, contrl=0, numexist=0, aux=0, cont=2, tamanho=0, vec[tamanho], i=0; 
	
do{
	printf("**********************�rvore Bin�ria**********************");
	printf("\nVerificar se existe uma �rvore.........................[1]");
	printf("\nConstruir e exibir uma  �rvore.........................[2]");
	printf("\nSair...................................................[3]\n");
	scanf("%d",&contrl);
	system("cls");
  
	
		
	while(contrl>3 || contrl<1){
			
		printf("\nDigite uma op��o v�lida!");
		printf("\n**********************�rvore Bin�ria**********************");
		printf("\nVerificar se existe uma �rvore.........................[1]");
		printf("\nConstruir e exibir uma  �rvore.........................[2]");
		printf("\nSair...................................................[3]\n");
		scanf("%d",&contrl);
		system("cls");
		
			
	}
		
	if (contrl == 1){
		Tree* t = createTree();  /*cria uma �rvore */
		void showTree(Tree* t); /* Fun��o que mostra a informa��o da �rvore */
		if(treeIsEmpty(t)) /* Verifica se a �rvore est� vazia */
		{
   			printf("\n\nCriamos uma �rvore, mas  est�  vazia!!\n");
 		} else {
  			printf("\n\n�rvore n�o est� vazia!!\n");
		}
			
	}
	
	if (contrl == 2){
		Tree* t = createTree();  /*cria uma �rvore */
		printf("Introduza o tamanho do vetor: ");
    	scanf("%d", &tamanho);
		
		for(i=0; i<tamanho; i++){
        	printf("Preencha o vector: ");
        	scanf("%d", &vec[i]);
        	insertTree(&t, vec[i]);
        }

    
  		showTree(t); /* Mostra os elementos da �rvore em pr�-ordem */
  		printf("\nDeseja verificar a exist�ncia de algum n�mero?");
  		printf("\n[1 = sim] [2 = n�o ]:");
		scanf("%d", &aux);
		system("cls");
		
		while(aux!=1 && aux!=2)
		{
			system("cls");
			printf("\n Digite uma op��o  v�lida!");
			printf("\n [1 = sim] [2 = n�o ]:");
			scanf("%d", &aux);
			system("cls");
		}
		if (aux == 1 ){
			printf("\nDigite o n�mero que deseja procurar: "); 
			scanf("%d", &numexist);
			if(isInTree(t, numexist)) { /* Verifica se o n�mero  pertence a �rvore */
    			printf("\nO n�mero %d pertence a �rvore!\n",numexist);
 			} else {
    			printf("\nO n�mero %d n�o pertence a �rvore!\n", numexist);
 			}
		}
		if (aux ==2){
			free(t); /* Libera a mem�ria alocada pela estrutura �rvore */	
		}
		
	}
	if (contrl == 3){
		system("pause");
		return 0;
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

