#include<stdbool.h>
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

bool sorte(int *a, int n){
  while ( --n >= 1 ) {
    if ( a[n] < a[n-1] ) return false;
  }
  return true;
}
 
void embaralhar(int *a, int n){
  int i, t, r;
  for(i=0; i < n; i++) {
    t = a[i];
    r = rand() % n;
    a[i] = a[r];
    a[r] = t;
  }
}
 
void bogosort(int *a, int n){
  while ( !sorte(a, n) ) embaralhar(a, n);
}
 
int main(){

  setlocale(LC_ALL, "Portuguese");
  
  int num[5] = {1, 4, 3, 6, 9};
  int i, cont=0;
  		
  		printf("**********************************************\n");
		printf("*******************Bogo Sort******************\n");
		printf("**********************************************\n");
  		bogosort(num,5);
  		for (i=0; i <5; i++){
  
   			printf("%d ", num[i]);
   			printf("\n");
  
  		}
return 0;
}
