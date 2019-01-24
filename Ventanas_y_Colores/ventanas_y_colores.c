/*
Ventanas de colores
*/
#include <conio.h>

int main(void){
  clrscr();
  window(1,1,70,20);
  textbackground(CYAN);
  clrscr();
  window(2,2,68,18);
  textbackground(WHITE);
  clrscr();
  textcolor(GREEN);
  textbackground(BLUE);
  gotoxy(20,2);
  cprintf("Esto es una prueba");
  // window(1,1,70,70);
  // gotoxy(70,70);
  // printf("Hola");

  window(1,1,80,25);
  textbackground(RED);
  gotoxy(25,25);
  cprintf(" Bienvenido / Welcome");

  window(1,1,80,80);
  textbackground(BLUE);
  gotoxy(1,25);
  cprintf("Prueba");
  return 0;
}
