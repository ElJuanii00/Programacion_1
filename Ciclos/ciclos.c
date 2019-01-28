/*
Programa de cilos for/ while/ do white
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int contador;

                    // for
  for (contador = 2; contador <= 100; contador = contador + 2) {
    printf("%i for\n", contador);
  }

  contador = 2;
                    // while
  while (contador <= 100) {
    printf("%i while\n", contador);
    contador = contador + 2;
  }

  contador = 2;
                    // do while
  do {
    printf("%i do while\n", contador);
    contador = contador + 2;
  } while(contador <= 100);

  return 0;
}
