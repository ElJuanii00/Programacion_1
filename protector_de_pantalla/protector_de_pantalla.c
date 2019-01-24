/*
Protector de pantalla
*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int protector_de_pantalla(void);
int welcome(void);

int main(void){
  clrscr();
  protector_de_pantalla();
  welcome();
  system("pause");
  clrscr();
}


int protector_de_pantalla(){
  int color=YELLOW, x=40, y=12;
  clrscr();
  randomize();
  do {
    color = random(16);
    y = random(25);
    x = random(80);
    textcolor(color);
    textbackground(color - 7);
    gotoxy(x,y);
    cprintf(".");
  } while(!kbhit());
}

int welcome(){
  int password = 123;
  window(10,10,40,12);
  textbackground(YELLOW);
  clrscr();
  gotoxy(25,15);
  printf("Bienvenido al banco, Ingrese el password\n");
  gotoxy(25,16);
  scanf("%i", &password);
  clrscr();
  gotoxy(1,1);
  if (password == 123){
    printf("Password correcto\n");
    printf("Ingrese el monto de inversion que desee generar\n");
  } else(
    printf("Password incorrecto\n");
  )
}
