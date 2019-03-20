#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "estetica_lib.h"

#define ESC 27

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

void creditos(int x, int y){
  do {
    textcolor(RED);
    gotoxy(x,y);
    cprintf("Fernando Alfaro");
    y--;
    gotoxy(x,y);
    cprintf("Juan Ponce");
    y--;
    textcolor(YELLOW);
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
  } while(y > 5);
}

void estetica(){
  int tecla, focused, posFocus, secContent;

  gotoxy(35,3);       // Nombre de la estetca
  textcolor(CYAN);
  cprintf("EMMA PRADA");

  focused = 5;    // Posicion de entrada del menu
  focus(focused,0);
  focused = 0;
  focus(focused,1);
  posFocus = focused;

  do {          // Ingresa la tecla

    switch (tecla) {
      case 72: //focused = 0;     //Arriba
      if(posFocus == 1){
        focus(focused,0);
        focused = 0;
        focus(focused,1);
      } else if(posFocus == 2){
        focus(focused,0);
        focused = 3;
        focus(focused,1);
      } else{
        marcoError();
      }
      posFocus = focused;
      break;
      case 77: //focused = 2;     //Derecha
      if(posFocus == 0){
        focus(focused,0);
        focused = 3;
        focus(focused,1);
      } else if(posFocus == 1){
        focus(focused,0);
        focused = 2;
        focus(focused,1);
      } else{
        marcoError();
      }
      posFocus = focused;
      break;
      case 75: // focused = 3;    //Izquierda
      if(posFocus == 3){
        focus(focused,0);
        focused = 0;
        focus(focused,1);
      } else if(posFocus == 2){
        focus(focused,0);
        focused = 1;
        focus(focused,1);
      } else{
        marcoError();
      }
      posFocus = focused;
      break;
      case 80: //focused = 1;     //Abajo
      if(posFocus == 0){
        focus(focused,0);
        focused = 1;
        focus(focused,1);
      } else if(posFocus == 3){
        focus(focused,0);
        focused = 2;
        focus(focused,1);
      } else {
        marcoError();
      }
      posFocus = focused;
      break;

      case 13:                  //Enter
      if(posFocus == 0){
        focused = 4;
        focus(focused,0);
        // Sleep(1000);
        // posFocus = focused;
      } else if(posFocus == 1){
        focused = 4;
        focus(focused,0);
        // posFocus = focused;
      } else if(posFocus == 2){
        focused = 4;
        focus(focused,0);
        // posFocus = focused;
      } else if(posFocus == 3){
        focused = 4;
        focus(focused,0);
        // posFocus = focused;
      }
      break;
    }

    //posFocus == 0 inventario
    //posFocus == 1 servicios
    //posFocus == 2 ganacias
    //posFocus == 3 ayuda

    // int secContent;
    if (focused == 4 && posFocus == 0) {          //Inventario
      do {
        if(tecla == ESC){
          secContent = 1;
        } else{
          secContent = 0;
        }

        switch (secContent) {
          case 0:
          gotoxy(25,5);  //Output
          textcolor(WHITE);
          cprintf("Inventario");
          inventarioItem1(15);
          inventarioItem2(15);
          inventarioItem3(15);
          inventarioItem4(15);
          inventarioItem5(15);
          inventarioItem6(15);
          tecla = getch();
          if (tecla == 0) {
            tecla = getch();
          }
          break;
          case 1:
          gotoxy(25,5);  //Output
          textcolor(BLACK);
          cprintf("Inventario");
          inventarioItem1(0);
          inventarioItem2(0);
          inventarioItem3(0);
          inventarioItem4(0);
          inventarioItem5(0);
          inventarioItem6(0);
          outputSection(focused);
          focused = 0;
          posFocus = focused;
          break;
        }
      } while(focused != 0);
    } else if(focused == 4 && posFocus == 1){         //Servicios
      do {
        if(tecla == ESC){
          secContent = 1;
        } else{
          secContent = 0;
        }

        switch (secContent) {
          case 0:
          gotoxy(25,5);  //Output
          textcolor(WHITE);
          cprintf("Servicios");
          servicioItem1(15);
          servicioItem2(15);
          servicioItem3(15);
          servicioItem4(15);
          servicioItem5(15);
          servicioItem6(15);
          tecla = getch();
          if (tecla == 0) {
            tecla = getch();
          }
          break;
          case 1:
          gotoxy(25,5);  //Output
          textcolor(BLACK);
          cprintf("Servicios");
          servicioItem1(0);
          servicioItem2(0);
          servicioItem3(0);
          servicioItem4(0);
          servicioItem5(0);
          servicioItem6(0);
          outputSection(focused);
          focused = 0;
          posFocus = focused;
          break;
        }
      } while(focused != 0);
    } else if(focused == 4 && posFocus == 2){       // Ganancias
      do {
        if(tecla == ESC){
          secContent = 1;
        } else{
          secContent = 0;
        }

        switch (secContent) {
          case 0:
          gotoxy(25,5);  //Output
          textcolor(WHITE);
          cprintf("Ganancias");
          tecla = getch();
          if (tecla == 0) {
            tecla = getch();
          }
          break;
          case 1:
          gotoxy(25,5);  //Output
          textcolor(BLACK);
          cprintf("Ganancias");
          outputSection(focused);
          focused = 0;
          posFocus = focused;
          break;
        }
      } while(focused != 0);
    } else if(focused == 4 && posFocus == 3){       //Ajustes
      int ajustePos = 0, saveAjustesPos = 0;

      do {
        if(tecla == ESC){
          secContent = 1;
        } else{
          secContent = 0;
        }

        if(saveAjustesPos == 3 && tecla == 13){
          ajusteItem1(0);
          ajusteItem2(0);
          ajusteItem3(0);
          creditos(35,25);
          saveAjustesPos = 0;
        }

        if (saveAjustesPos == 0) {
          gotoxy(25,5);  //Input Ajustes
          textcolor(WHITE);
          cprintf("Ajustes:");
          ajusteItem1(RED);
          ajusteItem2(15);
          ajusteItem3(15);
          saveAjustesPos = 1;
          ajustePos = 0;
        }

        switch (secContent) {
          case 0:
          // ajustePos = 0;
          switch (tecla) {
            case 72:                // Arriba
            if(ajustePos == 1){
              ajusteItem2(15);
              ajusteItem1(RED);
              ajustePos = 0;
              saveAjustesPos = 1;
            } else if (ajustePos == 2){
              ajusteItem3(15);
              ajusteItem2(RED);
              ajustePos = 1;
              saveAjustesPos = 2;
            }
            break;

            case 80:                // Abajo
            if(ajustePos == 0){
              ajusteItem1(15);
              ajusteItem2(RED);
              ajustePos = 1;
              saveAjustesPos = 2;
            } else if (ajustePos == 1){
              ajusteItem2(15);
              ajusteItem3(RED);
              ajustePos = 2;
              saveAjustesPos = 3;
            }
            break;
          }


          tecla = getch();
          if (tecla == 0) {
            tecla = getch();
          }
          break;
          case 1:
          gotoxy(25,5);  //Output
          textcolor(BLACK);
          cprintf("Ajustes:");
          ajusteItem1(0);
          ajusteItem2(0);
          ajusteItem3(0);
          outputSection(focused);
          focused = 0;
          posFocus = focused;
          break;
        }
      } while(focused != 0);
    }
    tecla = getch();
    if (tecla == 0) {
      tecla = getch();
    }
  } while(tecla != ESC);

  gotoxy(1,26);  //Output
  printf("");
}

void focus(int focus, int cond){
  switch (focus) {
    case 0:                            //Focus Inventario
    if (cond == 0) {
      marcoInventario(15,0);
    } else if(cond == 1){
      marcoInventario(15,1);
    }
    break;

    case 1:                           //Focus Servicios
    if (cond == 0) {
      marcoServicio(15,0);
    } else if(cond == 1){
      marcoServicio(15,1);
    }
    break;

    case 2:                           //Focus Ganancias
    if (cond == 0) {
      marcoGanancias(15,0);
    } else if(cond == 1){
      marcoGanancias(15,1);
    }
    break;

    case 3:                           // Focus Ayuda
    if (cond == 0) {
      marcoAyuda(15,0);
    } else if(cond == 1){
      marcoAyuda(15,1);
    }
    break;

    case 4:                          // Focus None
    marcoAyuda(0,2);
    marcoInventario(0,2);
    marcoServicio(0,2);
    marcoGanancias(0,2);
    // gotoxy(1,26);  //Output
    // printf("Negro");
    break;

    case 5:         // Focus White
    marcoAyuda(15,0);
    marcoInventario(15,0);
    marcoServicio(15,0);
    marcoGanancias(15,0);
    break;
  }

  gotoxy(1,26);  //Output
  printf("");
}

// borderColor == 0 | White
// borderColor == 1 | Red
// borderColor == 2 | Black

void marcoInventario(int color, int borderColor){
  gotoxy(20,6);
  textcolor(color);
  cprintf("Inentario");
  if(borderColor == 0){
    textcolor(WHITE);
    marco(4,5,40,9); //Inventario
  }else if(borderColor == 1){
    textcolor(RED);
    marco(4,5,40,9); //Inventario
  } else if(borderColor == 2){
    textcolor(BLACK);
    marco(4,5,40,9); //Inventario
  }
}

void marcoAyuda(int color, int borderColor){
  gotoxy(63,6);
  textcolor(color);
  cprintf("Ajustes");
  if(borderColor == 0){
    textcolor(WHITE);
    marco(54,5,24,9); // Ayuda
  }else if(borderColor == 1){
    textcolor(RED);
    marco(54,5,24,9); // Ayuda
  } else if(borderColor == 2){
    textcolor(BLACK);
    marco(54,5,24,9); // Ayuda
  }
}

void marcoServicio(int color, int borderColor){
  gotoxy(20,17);
  textcolor(color);
  cprintf("Servicios");
  if(borderColor == 0){
    textcolor(WHITE);
    marco(4,16,40,9); //Servicios
  }else if(borderColor == 1){
    textcolor(RED);
    marco(4,16,40,9); //Servicios
  } else if(borderColor == 2){
    textcolor(BLACK);
    marco(4,16,40,9); //Servicios
  }
}

void marcoGanancias(int color, int borderColor){
  gotoxy(62,17);
  textcolor(color);
  cprintf("Ganancias");
  if(borderColor == 0){
    textcolor(WHITE);
    marco(54,16,24,9); //Ganancias
  }else if(borderColor == 1){
    textcolor(RED);
    marco(54,16,24,9); //Ganancias
  } else if(borderColor == 2){
    textcolor(BLACK);
    marco(54,16,24,9); //Ganancias
  }
}

void marcoError(){
//   gotoxy(1,27);  //Output Error
//   printf("Error");
//   Sleep(1000);
//   gotoxy(1,27);
//   printf("     ");
}

void outputSection(int focused){
  focused = 5;
  focus(focused,0);
  focused = 0;
  // posFocus = focused;
  focus(focused,1);
}

            //Inventario

void inventarioItem1(int color){
  gotoxy(25,7);
  textcolor(color);
  cprintf("Gel Perfomance 90$..........\n");
}
void inventarioItem2(int color){
  gotoxy(25,8);
  textcolor(color);
  cprintf("Tinte rojo 100$..........\n");
}
void inventarioItem3(int color){
  gotoxy(25,9);
  textcolor(color);
  cprintf("Perfumes para hombre 125$..........\n");
}
void inventarioItem4(int color){
  gotoxy(25,10);
  textcolor(color);
  cprintf("Perfume para mujer 125$..........\n");
}
void inventarioItem5(int color){
  gotoxy(25,11);
  textcolor(color);
  cprintf("Gel Marca Gorilla 85$..........");
}
void inventarioItem6(int color){
  gotoxy(25,12);
  textcolor(color);
  cprintf("Cera para el pelo seco 75$..........");
}

            //Servicio

void servicioItem1(int color){
  gotoxy(25,7);
  textcolor(color);
  cprintf("Corte de Cabello 120$..........\n");
}
void servicioItem2(int color){
  gotoxy(25,8);
  textcolor(color);
  cprintf("Corte de Cabello JR 70$..........\n");
}
void servicioItem3(int color){
  gotoxy(25,9);
  textcolor(color);
  cprintf("Corte Damas y Peinado 120$..........\n");
}
void servicioItem4(int color){
  gotoxy(25,10);
  textcolor(color);
  cprintf("Tinte 80$..........\n");
}
void servicioItem5(int color){
  gotoxy(25,11);
  textcolor(color);
  cprintf("Masaje 50$..........");
}
void servicioItem6(int color){
  gotoxy(25,12);
  textcolor(color);
  cprintf("Manicura y Pedicura 75$..........");
}

              //Ajuste

void ajusteItem1(int color){
gotoxy(25,7);
textcolor(color);
cprintf("Color background..........\n");
}
void ajusteItem2(int color){
gotoxy(25,8);
textcolor(color);
cprintf("Color marco..........\n");
}
void ajusteItem3(int color){
gotoxy(25,9);
textcolor(color);
cprintf("Creditos..........\n");
}
