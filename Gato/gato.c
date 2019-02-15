/*
Programa del gato

// pos1 sumx =  1, sumy = 0;
// pos2 sumx = 11, sumy = 0;
// pos3 sumx = 21, sumy = 0;
// pos4 sumx =  1, sumy = 6;
// pos5 sumx = 11, sumy = 6;
// pos6 sumx = 21, sumy = 6;
// pos7 sumx =  1, sumy = 12;
// pos8 sumx = 11, sumy = 12;
// pos9 sumx = 21, sumy = 12;
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

void grafica(int x, int y, int xlong, int ylong);
void jugadorX(int x, int y, int pos);
void jugadorO(int x, int y, int pos);
void dato(int x, int y);

int main(){
  clrscr();
  grafica(10,5,31,17);
  return 0;
}


void grafica(int x, int y, int xlong, int ylong){
  int i, posx1 = 10, posx2 = 20;
  gotoxy(x,y);

  for(i=0; i<ylong; i++){
    gotoxy(x+10,y+i);
    printf("%c", 179);
    gotoxy(x+20,y+i);
    printf("%c", 179);
  }

  for(i=0; i<xlong; i++){
    gotoxy(x+i,y+5);
    printf("%c", 196);
    gotoxy(x+i,y+11);
    printf("%c", 196);
    if(posx1 == i){
      gotoxy(posx1+10, y+5);
      printf("%c", 197);
      gotoxy(posx1+10, y+11);
      printf("%c", 197);
    }
    if(posx2 == i){
      gotoxy(posx2+10, y+5);
      printf("%c", 197);
      gotoxy(posx2+10, y+11);
      printf("%c", 197);
    }
  }
  dato(x,y);
}

void dato(int x, int y){
  int posX, posO, ganador, posSave[9];
  do {
    gotoxy(x, y+19);
    printf("Que posicion quiere ingresar?\n");
    gotoxy(x, y+20);
    scanf("%i", &posX);
    jugadorX(x,y,posX);

    switch (posX) {
      case 1: if(posSave[0] != posX){
        if(posX == 1){
          posO = 5;
          posSave[0] = posX;
        }
      } else if(posSave[0] == posX){
        gotoxy(x, y+21);
        printf("Elige otro lugar");
        Sleep(1000);
        gotoxy(x, y+21);
        printf("                ");
      }
      break;
      case 2: if(posSave[1] != posX){
        if(posX == 2){
          posO = 7;
          posSave[1] = posX;
         }
        } else if(posSave[1] == posX){
          gotoxy(x, y+21);
          printf("Elige otro lugar");
          Sleep(1000);
          gotoxy(x, y+21);
          printf("                ");
        }
      break;
      case 3: if(posSave[2] != posX){
        if(posX == 3){
          posSave[2] = posX;
          if(posSave[0] == 1 && posSave[1] == 2 && posSave[2] == 3){
            gotoxy(x, y+21);
            printf("Ganaste");
          } else{
            posO = 5;
          }
        } else if(posSave[2] == posX){
          gotoxy(x, y+21);
          printf("Elige otro lugar");
          Sleep(1000);
          gotoxy(x, y+21);
          printf("                ");
        }
      }
      break;
      case 4: if(posX == 4){
        posO = 9;
      } else{

      }
      break;
      case 5: if(posX == 5){
        posO = 3;
      } else{

      }
      break;
      case 6: if(posX == 6){
        posO = 1;
      } else{

      }
      break;
      case 7: if(posX == 7){
        posO = 5;
      } else{

      }
      break;
      case 8:  if(posX == 8){
        posO = 3;
      } else{
      }
      break;
      case 9: if(posX == 9){
        posO = 5;
      } else{

      }
      break;
    }

    Sleep(1000);
    jugadorO(x,y,posO);
  } while(ganador != 1);
}

void jugadorX(int x, int y, int pos){
  int sumx, sumy;
  if(pos == 1){
    sumx = 1;
    sumy = 0;
  } else if(pos == 2){
    sumx = 11;
    sumy = 0;
  } else if(pos == 3){
    sumx = 21;
    sumy = 0;
  } else if(pos == 4){
    sumx = 1;
    sumy = 6;
  } else if(pos == 5){
    sumx = 11;
    sumy = 6;
  } else if(pos == 6){
    sumx = 21;
    sumy = 6;
  } else if(pos == 7){
    sumx = 1;
    sumy = 12;
  } else if(pos == 8){
    sumx = 11;
    sumy = 12;
  } else if(pos == 9){
    sumx = 21;
    sumy = 12;
  }

  gotoxy(x+sumx,y+sumy);
  printf("X       X\n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf(" XX   XX \n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf("   XXX   \n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf(" XX   XX \n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf("X       X\n");
}

void jugadorO(int x, int y, int pos){
  int sumx, sumy;
  if(pos == 1){
    sumx = 1;
    sumy = 0;
  } else if(pos == 2){
    sumx = 11;
    sumy = 0;
  } else if(pos == 3){
    sumx = 21;
    sumy = 0;
  } else if(pos == 4){
    sumx = 1;
    sumy = 6;
  } else if(pos == 5){
    sumx = 11;
    sumy = 6;
  } else if(pos == 6){
    sumx = 21;
    sumy = 6;
  } else if(pos == 7){
    sumx = 1;
    sumy = 12;
  } else if(pos == 8){
    sumx = 11;
    sumy = 12;
  } else if(pos == 9){
    sumx = 21;
    sumy = 12;
  }
  gotoxy(x+sumx,y+sumy);
  printf("  OOOOO  \n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf("OO     OO\n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf("OO     OO\n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf("OO     OO\n");
  sumy++;
  gotoxy(x+sumx,y+sumy);
  printf("  OOOOO  \n");
}
