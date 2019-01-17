/*
Tienda
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int bienvenido();
int items();

int main(){
  system("cls");
  bienvenido();
  system("pause");
  system("cls");
  items();
  return 0;
}

int bienvenido(){
  //Mensaje de bienvenido
printf("   ######                                                                               \n");
printf("   #     # # ###### #    # #    # ###### #    # # #####   ####   ####       ##   #      \n");
printf("   #     # # #      ##   # #    # #      ##   # # #    # #    # #          #  #  #      \n");
printf("   ######  # #####  # #  # #    # #####  # #  # # #    # #    #  ####     #    # #      \n");
printf("   #     # # #      #  # # #    # #      #  # # # #    # #    #      #    ###### #      \n");
printf("   #     # # #      #   ##  #  #  #      #   ## # #    # #    # #    #    #    # #      \n");
printf("   ######  # ###### #    #   ##   ###### #    # # #####   ####   ####     #    # ###### \n");
printf("                                                                                        \n");
printf("                                                                                        \n");
printf("         OOOOOOOOO     XXXXXXX       XXXXXXXXXXXXXX       XXXXXXX     OOOOOOOOO         \n");
printf("       OO:::::::::OO   X:::::X       X:::::XX:::::X       X:::::X   OO:::::::::OO       \n");
printf("     OO:::::::::::::OO X:::::X       X:::::XX:::::X       X:::::X OO:::::::::::::OO     \n");
printf("    O:::::::OOO:::::::OX::::::X     X::::::XX::::::X     X::::::XO:::::::OOO:::::::O    \n");
printf("    O::::::O   O::::::OXXX:::::X   X:::::XXXXXX:::::X   X:::::XXXO::::::O   O::::::O    \n");
printf("    O:::::O     O:::::O   X:::::X X:::::X      X:::::X X:::::X   O:::::O     O:::::O    \n");
printf("    O:::::O     O:::::O    X:::::X:::::X        X:::::X:::::X    O:::::O     O:::::O    \n");
printf("    O:::::O     O:::::O     X:::::::::X          X:::::::::X     O:::::O     O:::::O    \n");
printf("    O:::::O     O:::::O     X:::::::::X          X:::::::::X     O:::::O     O:::::O    \n");
printf("    O:::::O     O:::::O    X:::::X:::::X        X:::::X:::::X    O:::::O     O:::::O    \n");
printf("    O:::::O     O:::::O   X:::::X X:::::X      X:::::X X:::::X   O:::::O     O:::::O    \n");
printf("    O::::::O   O::::::OXXX:::::X   X:::::XXXXXX:::::X   X:::::XXXO::::::O   O::::::O    \n");
printf("    O:::::::OOO:::::::OX::::::X     X::::::XX::::::X     X::::::XO:::::::OOO:::::::O    \n");
printf("     OO:::::::::::::OO X:::::X       X:::::XX:::::X       X:::::X OO:::::::::::::OO     \n");
printf("       OO:::::::::OO   X:::::X       X:::::XX:::::X       X:::::X   OO:::::::::OO       \n");
printf("         OOOOOOOOO     XXXXXXX       XXXXXXXXXXXXXX       XXXXXXX     OOOOOOOOO         \n");
}

int items(){

  //Constantes
  const float precio_Coca = 15.30;
  const float precio_Vikingo = 22.55;
  const float precio_Dorito = 16.40;
  const int precio_Magnum = 30;

  //Este dato elige la cantidad de productos que va a llevar
  float dato_Coca, dato_Vikingo, dato_Dorito;
  int dato_Magnum;

  //Este dato multiplica la cantidad de productos que va a llevar por el precio del producto
  float dato_Coca2, dato_Vikingo2, dato_Dorito2;
  int dato_Magnum2;

  //Datos finales de la compra
  float dato_Total, dato_Pago, dato_Cambio;

  // Menu
  printf("El dia de hoy tenemos:\n");
  printf("====================================================================\n");
  printf("    Coca cola         %.2f pesos \n    Vikingo           %.2f pesos \n    Doritos           %.2f pesos \n    Magnum            %i    pesos \n", precio_Coca, precio_Vikingo, precio_Dorito, precio_Magnum);
  printf("====================================================================\n");

  // Calcular del total
  printf("Cuantas Coca Cola va a llevar?\n");
  scanf("%f", &dato_Coca);
  dato_Coca2 = dato_Coca * precio_Coca;
  printf("Cuantos Vikingos va a llevar?\n");
  scanf("%f", &dato_Vikingo);
  dato_Vikingo2 = dato_Vikingo * precio_Vikingo;
  printf("Cuantos Doritos va a llevar?\n");
  scanf("%f", &dato_Dorito);
  dato_Dorito2 = dato_Dorito * precio_Dorito;
  printf("Cuantas Magnum va a llevar?\n");
  scanf("%i", &dato_Magnum);
  dato_Magnum2 = dato_Magnum * precio_Magnum;
  dato_Total = dato_Coca2 + dato_Vikingo2 + dato_Dorito2 + (float)dato_Magnum2;
  printf("El precio final es: %.2f pesos\n", dato_Total);
  system("pause");

  // Metodo de pago
  system("cls");
  printf("El precio final es: %.2f pesos\n", dato_Total);
  printf("Cuanto va a pagar?\n");
  scanf("%f", &dato_Pago);
  dato_Cambio = dato_Pago - dato_Total;

  //Condicion sobre el metodo de pago
  if (dato_Pago >= dato_Total) {
    printf("El cambio total es: %.2f pesos\n", dato_Cambio);
  } else {
    printf("No tiene suficiente dinero\n");
  }
}
