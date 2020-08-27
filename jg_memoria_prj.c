#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define T 16
void TAB_ABERT();
void TIMER();
/*aqui são declaradas as matrizes e atribuídos os valores (palavras)
Use esta configuração apenas para teste, pois as palavras usadas no jogo
precisam ser inseridas pelo jogador.*/
char M[T][20]={"LARANJA","LARANJA","GOLA","GOLA","COMIDA","COMIDA",
                "OVO","OVO","PARQUE","PARQUE","CASA","CASA","DORMIR",               "DORMIR","PIPOCA","PIPOCA"};
  char A[T][20]={"1A","1B","1C","1D","2A","2B","2C","2D","3A","3B",
                 "3C","3D","4A","4B","4C","4D"};
main(){
  int L,C;

  C=1;
  printf("\n\nMemorize as palavras...");
  printf("\n\n");


  for(L=0;L<T;L++){
    printf("%s\t\t",M[L]);
    if(C % 4==0) {
      printf("\n");
    }
    C++;
  }
  TIMER();
  TAB_ABERT();
}

void TIMER(){//função para determinar o tempo de exibição das palavras
  int I;
  for(I=10;I>=0;I--){
    printf(" \r% d",I);
    Sleep(1000);
  }
  system("cls");
}

void TAB_ABERT(){//carrega a matriz do jogo
  int I,C=1;
  for(I=0;I<T;I++){
	  printf("%s\t\t",A[I]);
     if(C % 4==0) {
    printf("\n");
  }
  C++;
  }
}

