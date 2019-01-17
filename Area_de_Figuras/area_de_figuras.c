/*
Area de figuras
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  area_triangulo();
  return 0;
}

int area_triangulo(){
  int base, altura, area, area2;
  printf("Este es un programa para realizar el area de un triangulo\n");
  printf("Ingresa la base: \n");
  scanf("%i", &base);
  printf("Ingresa la altura: \n");
  scanf("%i",&altura);
  area = base * altura;
  area2 = area/2;
  printf("El area del triangulo es: %i\n", area2 );
}
