/*
Programa del gato  Juan Francisco Ponce Luna 4537524

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
void casillaOcupada(int x, int y);
int condPosX(int pos, int sumx, int resux);
int condPosY(int pos, int sumy, int resuy);

int main(){
  int x = 10, y = 5;
  clrscr();
  grafica(x,y,31,17);
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
  int posX, posO, ganador = 0, posSaveX[9], posSaveO[9], casillaBloqueada = 0;
  do {
    gotoxy(x, y+19);
    printf("Que posicion quiere ingresar?\n");
    gotoxy(x, y+20);
    scanf("%i", &posX);

    switch (posX) {
      case 1: if(posSaveX[0] != posX && posSaveO[0] != 1){
        if(posX == 1){
          posSaveX[0] = posX;
          if(posSaveX[0] == 1 && posSaveX[1] == 2 && posSaveX[2] == 3 || posSaveX[6] == 7 && posSaveX[3] == 4 && posSaveX[0] == 1 || posSaveX[8] == 9 && posSaveX[4] == 5 && posSaveX[0] == 1){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            // posO = 5;
            posO = 5;
            posSaveO[4] = posO;
          }
        }
      } else if(posSaveX[0] == posX || posSaveO[0] == 1){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
      case 2: if(posSaveX[1] != posX && posSaveO[1] != 2){
        if(posX == 2){
          posSaveX[1] = posX;
          if(posSaveX[0] == 1 && posSaveX[1] == 2 && posSaveX[2] == 3 || posSaveX[7] == 8 && posSaveX[4] == 5 && posSaveX[1] == 2){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            // posO = 5;
            posO = 7;
            posSaveO[6] = posO;
          }
         }
       } else if(posSaveX[1] == posX || posSaveO[1] != 2){
         casillaOcupada(x,y);
         casillaBloqueada = 1;
       }
      break;
      case 3: if(posSaveX[2] != posX && posSaveO[2] != 3){
        if(posX == 3){
          posSaveX[2] = posX;
          if(posSaveX[0] == 1 && posSaveX[1] == 2 && posSaveX[2] == 3 || posSaveX[6] == 7 && posSaveX[4] == 5 && posSaveX[2] == 3 || posSaveX[8] == 9 && posSaveX[5] == 6 && posSaveX[2] == 3){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 5;
            posSaveO[4] = posO;
          }
         }
       } else if(posSaveX[2] == posX || posSaveO[2] == 3){
          casillaOcupada(x,y);
          casillaBloqueada = 1;
        }
      break;
      case 4: if(posSaveX[3] != posX || posSaveO[3] != 4){
        if(posX == 4){
          posSaveX[3] = posX;
          if(posSaveX[0] == 1 && posSaveX[3] == 4 && posSaveX[6] == 7 || posSaveX[3] == 4 && posSaveX[4] == 5 && posSaveX[5] == 6){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 9;
            posSaveO[8] = posO;
          }
        }
      } else if(posSaveX[3] == posX || posSaveO[3] == 4){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
      case 5: if(posSaveX[4] != posX && posSaveO[4] != 5){
        if(posX == 5){
          posSaveX[4] = posX;
          if(posSaveX[0] == 1 && posSaveX[4] == 5 && posSaveX[8] == 9 || posSaveX[1] == 2 && posSaveX[4] == 5 && posSaveX[7] == 8 || posSaveX[2] == 3 && posSaveX[4] == 5 && posSaveX[6] == 7 || posSaveX[3] == 4 && posSaveX[4] == 5 && posSaveX[5] == 6){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 3;
            posSaveO[2] = posO;
          }
        }
      } else if(posSaveX[4] == posX || posSaveO[4] == 5){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
      case 6: if(posSaveX[5] != posX && posSaveO[5] != 6){
        if(posX == 6){
          posSaveX[5] = posX;
          if(posSaveX[2] == 3 && posSaveX[5] == 6 && posSaveX[8] == 9 || posSaveX[3] == 4 && posSaveX[4] == 5 && posSaveX[5] == 6){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 1;
            posSaveO[0] = posO;
          }
        }
      } else if(posSaveX[5] == posX || posSaveO[5] == 6){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
      case 7: if(posSaveX[6] != posX && posSaveO[6] != 7){
        if(posX == 7){
          posSaveX[6] = posX;
          if(posSaveX[6] == 7 && posSaveX[4] == 5 && posSaveX[2] == 3 || posSaveX[6] == 7 && posSaveX[3] == 4 && posSaveX[0] == 1 || posSaveX[6] == 7 && posSaveX[7] == 8 && posSaveX[8] == 9){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 5;
            posSaveO[4] = posO;
          }
        }
      } else if(posSaveX[6] == posX || posSaveO[6] == 7){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
      case 8:  if(posSaveX[7] != posX && posSaveO[7] != 8){
        if(posX == 8){
          posSaveX[7] = posX;
          if(posSaveX[7] == 8 && posSaveX[4] == 5 && posSaveX[1] == 2 || posSaveX[6] == 7 && posSaveX[7] == 8 && posSaveX[8] == 9){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 3;
            posSaveO[2] = posO;
          }
        }
      } else if(posSaveX[7] == posX || posSaveO[7] == 8){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
      case 9: if(posSaveX[8] != posX && posSaveO[8] != 9){
        if(posX == 9){
          posSaveX[8] = posX;
          if(posSaveX[8] == 9 && posSaveX[4] == 5 && posSaveX[0] == 1 || posSaveX[8] == 9 && posSaveX[7] == 8 && posSaveX[6] == 7 || posSaveX[8] == 9 && posSaveX[5] == 6 && posSaveX[2] == 3){
            gotoxy(x, y+21);
            printf("Ganaste");
            ganador = 1;
          } else{
            posO = 5;
            posSaveO[4] = posO;
          }
        }
      } else if(posSaveX[8] == posX || posSaveO[8] == 9){
        casillaOcupada(x,y);
        casillaBloqueada = 1;
      }
      break;
    }


    if(casillaBloqueada != 1){
      jugadorX(x,y,posX);
    }
    Sleep(1000);
    jugadorO(x,y,posO);
    casillaBloqueada = 0;
  } while(ganador != 1);
}

void jugadorX(int x, int y, int pos){
  int sumx, sumy, resux, resuy;
  condPosX(pos, sumx, resux);
  condPosY(pos, sumy, resuy);
  sumx = condPosX(pos, sumx, resux);
  sumy = condPosY(pos, sumy, resuy);
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
  int sumx, sumy, resux, resuy;
  condPosX(pos, sumx, resux);
  condPosY(pos, sumy, resuy);
  sumx = condPosX(pos, sumx, resux);
  sumy = condPosY(pos, sumy, resuy);
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

int condPosX(int pos, int sumx, int resux){
  if(pos == 1){
    sumx = 1;
  } else if(pos == 2){
    sumx = 11;
  } else if(pos == 3){
    sumx = 21;
  } else if(pos == 4){
    sumx = 1;
  } else if(pos == 5){
    sumx = 11;
  } else if(pos == 6){
    sumx = 21;
  } else if(pos == 7){
    sumx = 1;
  } else if(pos == 8){
    sumx = 11;
  } else if(pos == 9){
    sumx = 21;
  }

  resux = sumx;

  return resux;
}

int condPosY(int pos, int sumy, int resuy){
  if(pos == 1){
    sumy = 0;
  } else if(pos == 2){
    sumy = 0;
  } else if(pos == 3){
    sumy = 0;
  } else if(pos == 4){
    sumy = 6;
  } else if(pos == 5){
    sumy = 6;
  } else if(pos == 6){
    sumy = 6;
  } else if(pos == 7){
    sumy = 12;
  } else if(pos == 8){
    sumy = 12;
  } else if(pos == 9){
    sumy = 12;
  }

  resuy = sumy;

  return resuy;
}

void casillaOcupada(int x, int y){
  gotoxy(x, y+21);
  printf("Elige otro lugar");
  Sleep(1000);
  gotoxy(x, y+21);
  printf("                ");
}
