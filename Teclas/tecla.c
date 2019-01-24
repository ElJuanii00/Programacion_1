/*
  Teclas
*/
#include <stdio.h>
#include <stdlib.h>

int OpcionA();
int OpcionB();
int OpcionC();
int error();

char Tecla;

int main(void){
  printf("\n Menu \n A) Limpiar Pantalla \n B) Ver un chiste \n C) Salir \n");
  Tecla = getchar();
  clrscr();
  if(Tecla == 'A' ||  Tecla == 'a'){
    OpcionA();
  } else if (Tecla == 'B' ||  Tecla == 'b'){
    OpcionB();
  } else if (Tecla == 'C' ||  Tecla == 'c'){
    OpcionC();
  } else {
    error();
  }

  switch (Tecla) {
    case A: OpcionA();
    break;
    case a: OpcionA();
    break;
    case B: OpacionB();
    break;
    case b: OpcionB();
    break;
    case C: OpcionC();
    break;
    case c: OpcionC();
    break;
    default: error();
  }

  switch

  return 0;
}

int OpcionA(){
  system("cls");
  return 0;
}

int OpcionB(){
  printf("Que le dijo una uva a otra uva\n");
  system("pause");
  printf("M A D U R A\n");
  return 0;
}

int OpcionC(){
  printf("Gracias por elegir este programa\n");
  system("pause");
  return 0;
}

int error(){
  printf("Error al teclear\n");
  system("pause");
  return 0;
}
