/*
Programa para almacenar el inventario y servicios que ofrese la estetica
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "estetica_lib.h"

#define ESC 27

int main(void){
  clrscr();
  textcolor(WHITE);
  marco(1,1,80,25);  //Marco Global
  estetica();
  // creditos();
  return 0;
}
