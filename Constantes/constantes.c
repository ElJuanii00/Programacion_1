/*
constantes
Este es un programa d ecaracteres
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define MAX 50
#define YO "Juan Ponce"

int constantes();

int main(){
  constantes();
  return 0;
}

int constantes(){
  // constantes
  const int edad = 17;
  const float precio = 14.3526;
  const char inicial = 'J';
  // printf("Valores: %10f %10i  %15s \n %10i %.2f %c", PI, MAX, YO, edad, precio, inicial);
  printf("EL valor de PI es: %10f \nMi valor maximo es: %10i \nMi nombre es: %15s \nMi edad es: %10i \nEl precio es: %.3f \nMi inicial es: %c", PI, MAX, YO, edad, precio, inicial);
}
