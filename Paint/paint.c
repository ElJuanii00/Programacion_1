/*
Programa que hace simular un paint, Juan Francisco Ponce Luna 4537524
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define ESC 27

int paint(void);
int hola(void);

int main(void){
  clrscr();
  paint();
  return 0;
}

int paint(){
  char tecla;
  int x=40, y=12, color=25;
  // clrscr();
  printf("Ayuda presione 'F1'");

  do {

    textcolor(color);
    gotoxy(x, y);
    cprintf("%c", 219);

    tecla = getch();
    if (tecla == 0) {
      tecla = getch();
    }

    switch (tecla) {
      case 72: if(y > 2){
        y--;
      } else{
        y = 25;
      }
      break;
      case 77: if(x < 80){
        x++;
      } else{
        x = 1;
      }
      break;
      case 75: if(x > 1){
        x--;
      } else{
        x = 80;
      }
      break;
      case 80: if(y < 25){
        y++;
      } else{
        y = 1;
      }
      break;
      case 'B': clrscr();
      break;
      case 'b': clrscr();
      break;
      case 'C': textcolor(color++);
      break;
      case 'c': textcolor(color++);
      break;
      case 59:
      clrscr();
      printf("Presiona 'c' o 'C' para cambiar de color de texto\nPresiona 'b' o 'B' para borrar la pantalla\nPara salir del programa precione 'ESC'\n");
      system("pause");
      x = 40;
      y = 12;
      clrscr();
    }
  } while(tecla != ESC);

  clrscr();
  return 0;
}
