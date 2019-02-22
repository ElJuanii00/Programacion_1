/*
Programa para almacenar el inventario y servicios que ofrese la estetica
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void marco(int x, int y, int width, int height);
void menu(void);
void creditos(void);

int main(void){
  clrscr();
  marco(1,1,80,25);
  // creditos();
  menu();
  return 0;
}

void marco(int x, int y, int width, int height){
  int i;
  for(i=0; i <= width; i++){
    if (i == 0) {
      gotoxy(x,y);
      printf("%c", 218);
      gotoxy(x,y+height);
      printf("%c", 192);
    } else if (i == width){
      gotoxy(x+width,y);
      printf("%c", 191);
      gotoxy(x+width,y+height);
      printf("%c", 217);
    } else{
      gotoxy(x+i,y);
      printf("%c", 196);
      gotoxy(x+i,y+height);
      printf("%c", 196);
    }
  }

  for(i=0; i < height; i++){
    if(i >= 1 && i <= (width-1)){
      gotoxy(x,y+i);
      printf("%c", 179);
      gotoxy(x+width,y+i);
      printf("%c", 179);
    }
  }
}

void creditos(){
  int x = 31, y = 22;
  do {
    textcolor(RED);
    gotoxy(x,y);
    cprintf("Fernando Alfaro");
    y--;
    gotoxy(x,y);
    cprintf("Juan Ponce");
    y--;
    textcolor(CYAN);
    gotoxy(x,y);
    cprintf("EMMA PRADA");

    Sleep(500);

    y = y + 2;
    gotoxy(x,y);
    printf("               ");
    y--;
    gotoxy(x,y);
    printf("               ");
    y--;
    gotoxy(x,y);
    printf("               ");
  } while(y > 2);
}

void menu(){
  gotoxy(35,3);
  textcolor(CYAN);
  cprintf("EMMA PRADA");

  marco(4,5,40,9); //Inventario
  gotoxy(20,6);
  printf("Inentario");
  marco(4,16,40,9); //Servicios
  gotoxy(20,17);
  printf("Servicios");
  marco(68,2,10,6);
  marco(54,16,24,9); //Ganancias
  gotoxy(62,17);
  printf("Ganancias");
  gotoxy(1,26);
  printf("");
}
