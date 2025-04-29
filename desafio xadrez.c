#include <stdio.h>

  int main(){

  for (int i = 1; i <= 5; i++)
  {
    printf("mover torre para frente\n");
  }

  int iz = 1;
  
  while (iz <= 5)
  {
    printf("mover bispo na diagonal para direita %d\n", iz);
    iz++;
  }
  
  int i = 1;

   do
   {
    printf("mover rainha para esquerda %d\n", i);
    i++;
   } while (i <= 8);
   





    return 0;
  }
