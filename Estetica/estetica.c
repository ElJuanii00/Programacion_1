/*
Programa para almacenar el inventario y servicios que ofrese la estetica
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define ESC 27

void marco(int x, int y, int width, int height);
void menu(void);
void focus(int focus);
void creditos(void);
void marcoInventario(void);
void marcoAyuda(void);
void marcoServicio(void);
void marcoGanancias(void);
void marcoError(void);

int main(void){
  clrscr();
  textcolor(WHITE);
  marco(1,1,80,25);  //Marco Global
  menu();
  // creditos();
  return 0;
}

void marco(int x, int y, int width, int height){
  int i;
  // textbackground(LIGHTMAGENTA+BLACK);
  for(i=0; i <= width; i++){
    if (i == 0) {
      gotoxy(x,y);
      cprintf("%c", 218);
      gotoxy(x,y+height);
      cprintf("%c", 192);
    } else if (i == width){
      gotoxy(x+width,y);
      cprintf("%c", 191);
      gotoxy(x+width,y+height);
      cprintf("%c", 217);
    } else{
      gotoxy(x+i,y);
      cprintf("%c", 196);
      gotoxy(x+i,y+height);
      cprintf("%c", 196);
    }
  }

  for(i=0; i < height; i++){
    if(i >= 1 && i <= (width-1)){
      gotoxy(x,y+i);
      cprintf("%c", 179);
      gotoxy(x+width,y+i);
      cprintf("%c", 179);
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
  int tecla, focused, posFocus;

  gotoxy(35,3);       // Nombre de la estetca
  textcolor(CYAN);
  cprintf("EMMA PRADA");

  focused = 0;    // Posicion de entrada del menu
  focus(focused);

  do {          // Ingresa la tecla
    tecla = getch();
    if (tecla == 0) {
      tecla = getch();
    }
    switch (tecla) {
      case 72: //focused = 0;    //Arriba
      if(posFocus == 1){
        focused = 0;
        focus(focused);
      } else if(posFocus == 2){
        focused = 3;
        focus(focused);
      } else{
        marcoError();
      }
      posFocus = focused;
      break;
      case 77: //focused = 2;     //Derecha
      if(posFocus == 0){
        focused = 3;
        focus(focused);
      } else if(posFocus == 1){
        focused = 2;
        focus(focused);
      } else{
        marcoError();
      }
      posFocus = focused;
      break;
      case 75:                  //Izquierda
      if(posFocus == 3){
        focused = 0;
        focus(focused);
      } else if(posFocus == 2){
        focused = 1;
        focus(focused);
      } else{
        marcoError();
      }
      posFocus = focused;
      break;
      case 80: //focused = 1;      //Abajo
      if(posFocus == 0){
        focused = 1;
        focus(focused);
      } else if(posFocus == 3){
        focused = 2;
        focus(focused);
      } else {
        marcoError();
      }
      posFocus = focused;
      break;
    }
  } while(tecla != ESC);

  gotoxy(1,26);  //Output
  printf("");
}

void focus(int focus){
  switch (focus) {
    case 0: textcolor(RED);            //Focus Inventario
    marcoInventario();
    textcolor(WHITE);
    marcoServicio();
    marcoAyuda();
    marcoGanancias();
    break;

    case 1: textcolor(RED);            //Focus Servicios
    marcoServicio();
    textcolor(WHITE);
    marcoInventario();
    marcoAyuda();
    marcoGanancias();
    break;

    case 2: textcolor(RED);            //Focus Ganancias
    marcoGanancias();
    textcolor(WHITE);
    marcoInventario();
    marcoServicio();
    marcoAyuda();
    break;

    case 3: textcolor(RED);            // Focus Ayuda
    marcoAyuda();
    textcolor(WHITE);
    marcoInventario();
    marcoServicio();
    marcoGanancias();
    break;
  }

  gotoxy(1,26);  //Output
  printf("");
}

void marcoInventario(){
  marco(4,5,40,9); //Inventario
  gotoxy(20,6);
  printf("Inentario");
}

void marcoAyuda(){
  marco(54,5,24,9); // Ayuda
  gotoxy(63,6);
  printf("Ajustes");
}

void marcoServicio(){
  marco(4,16,40,9); //Servicios
  gotoxy(20,17);
  printf("Servicios");
}

void marcoGanancias(){
  marco(54,16,24,9); //Ganancias
  gotoxy(62,17);
  printf("Ganancias");
}

void marcoError(){
  // gotoxy(1,27);  //Output Error
  // printf("Error");
  // Sleep(1000);
  // gotoxy(1,27);
  // printf("     ");
}
