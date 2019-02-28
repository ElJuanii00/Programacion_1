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
  system("cls");
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
  int password = 123, monto, meses, rendimientoMes, rendimiento = 12;
  gotoxy(2,2);
  printf("Bienvenido al banco, Ingrese el password\n");
  scanf("%i", &password);
  if (password == 123){
    system("cls");
    printf("Password correcto\n");
    printf("Ingrese el monto de inversion que desee generar\n");
    scanf("%i", &monto);
    printf("Ingrese los meses a invertir\n");
    scanf("%i", &meses);
    rendimientoMes = monto / rendimiento;
    monto = (monto + (meses * rendimientoMes));
    printf("Tu rendimiento a %i meses son de: %i \n", meses, monto);
    system("pause");
  } else{
    printf("Password incorrecto\n");
  }
}
