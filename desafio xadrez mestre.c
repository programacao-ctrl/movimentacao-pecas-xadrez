#include <stdio.h>

 void movimentotorre(int casas) {
     if(casas > 0) {
      printf("mover torre para frente \n");
      movimentotorre(casas - 1);
    }
  }

  void moverbispo(int casas) {
    if (casas > 0) {
      printf("mover bispo na diagonal para direita \n");
      moverbispo(casas - 1);
    }
  }

  void moverrainha(int casas){
    if(casas > 0) {
      printf("mover rainha para esquerda \n");
      moverrainha(casas - 1);
    }
  }


  int main(){

  movimentotorre(5);//imprime o movimento cinco vezes

 
  moverbispo(5);//imprime o movimento cinco vezes

  
  moverrainha(8);//imprime o movimento oito vezes
   

  int movimentocavalocompleto = 1;


  while (movimentocavalocompleto--)
    {
      for(int l = 0; l < 2; l++)
      {
        printf("mover cavalo para cima\n");//imprime duas vezes pra cima
      }
          printf("mover cavalo para direita");//imprime uma vez para direita
    }
    








    return 0;
  }
