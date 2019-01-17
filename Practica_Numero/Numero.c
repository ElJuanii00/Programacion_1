/*
Practia Numeros
*/

#include <stdio.h>
#include <stdlib.h>

int numero();
int ecuacion_3er_Grado();

int main(){
  numero();
  system("pause");
  ecuacion_3er_Grado();
  return 0;
}

int numero(){
  int numero = 12, dato, n;
  printf("Mi numero es: %i\n", 163);
  scanf("%i", &numero);
  printf("Mi numero es: %i\n", numero, dato, n);
}

int ecuacion_3er_Grado(){
  int coeficiente1, coeficiente2, coeficiente3, coeficiente4;
  printf("Esta es una ecuacion de 3er grado, dame el primer coeficiente \n");
  scanf("%i", &coeficiente1);
  printf("Esta es una ecuacion de 3er grado, dame el segundo coeficiente \n");
  scanf("%i", &coeficiente2);
  printf("Esta es una ecuacion de 3er grado, dame el tercer coeficiente \n");
  scanf("%i", &coeficiente3);
  printf("Esta es una ecuacion de 3er grado, dame el cuarto coeficiente \n");
  scanf("%i", &coeficiente4);
  printf("Mi ecuacion es %ix^3 %ix^2 %ix %i ", coeficiente1, coeficiente2, coeficiente3, coeficiente4);
}
