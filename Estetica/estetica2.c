/*
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <windows.h>
# define ESC 27


void marco(int x, int y, int width, int height);
void menu(void);
void inventario(void);
void inventariotitulo(void);
void inventarioEntrada(void);
void inventarioItem1(void);
void inventarioItem2(void);
void inventarioItem3(void);
void inventarioItem4(void);
void inventarioItem5(void);
void inventarioItem6(void);

int main(void){
  clrscr();
  marco(1,1,80,25);
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
      gotoxy(width,y);
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

void menu(void)

{
    inventario();
}

void inventario()
{
  int pos=0;
  char tecla;
  inventariotitulo();
  // inventarioEntrada();

  do {
    tecla=getch();
    if (tecla == 0) {
      tecla = getch();
    }

    switch(tecla)
    {
      case 80: 	pos++;
      if(pos > 5){
        pos = 5;
      }
      break;

      case 72: pos--;
      if(pos < 0){
        pos = 0;
      }
      break;
    }

    switch(pos)
    {

      case 0:

      textcolor(RED);
      inventarioItem0();

      textcolor(15);
      inventarioItem1();

      textcolor(15);
      inventarioItem2();

      textcolor(15);
      inventarioItem3();

      textcolor(15);
      inventarioItem4();

      textcolor(15);
      inventarioItem5();

      textcolor(15);
      inventarioItem6();
      break;

      case 1:

      textcolor(15);
      inventarioItem0();

      textcolor(RED);
      inventarioItem1();

      textcolor(15);
      inventarioItem2();

      textcolor(15);
      inventarioItem3();

      textcolor(15);
      inventarioItem4();

      textcolor(15);
      inventarioItem5();

      textcolor(15);
      inventarioItem6();
      break;

      case 2:

      textcolor(15);
      inventarioItem0();

      textcolor(15);
      inventarioItem1();

      textcolor(RED);
      inventarioItem2();

      textcolor(15);
      inventarioItem3();

      textcolor(15);
      inventarioItem4();

      textcolor(15);
      inventarioItem5();

      textcolor(15);
      inventarioItem6();
      break;

      case 3:

      textcolor(15);
      inventarioItem0();

      textcolor(15);
      inventarioItem1();

      textcolor(15);
      inventarioItem2();

      textcolor(RED);
      inventarioItem3();

      textcolor(15);
      inventarioItem4();

      textcolor(15);
      inventarioItem5();

      textcolor(15);
      inventarioItem6();
      break;

      case 4:

      textcolor(15);
      inventarioItem0();

      textcolor(15);
      inventarioItem1();

      textcolor(15);
      inventarioItem2();

      textcolor(15);
      inventarioItem3();

      textcolor(RED);
      inventarioItem4();

      textcolor(15);
      inventarioItem5();

      textcolor(15);
      inventarioItem6();
      break;

      case 5:

      textcolor(15);
      inventarioItem0();

      textcolor(15);
      inventarioItem1();

      textcolor(15);
      inventarioItem2();

      textcolor(15);
      inventarioItem3();

      textcolor(15);
      inventarioItem4();

      textcolor(RED);
      inventarioItem5();

      textcolor(15);
      inventarioItem6();
      break;

      case 6:

      textcolor(15);
      inventarioItem0();

      textcolor(15);
      inventarioItem1();

      textcolor(15);
      inventarioItem2();

      textcolor(15);
      inventarioItem3();

      textcolor(15);
      inventarioItem4();

      textcolor(15);
      inventarioItem5();

      textcolor(RED);
      inventarioItem6();
      break;
    }

    gotoxy(10,10);
    printf("%i", pos);
  } while(tecla != ESC);
}
void inventariotitulo(void)
{
  gotoxy(30,3);
	textcolor(5);
	cprintf("INVENTARIO");
}

void inventarioItem0(){
  // inventariotitulo();
  textcolor(RED);
  inventarioItem1();
  textcolor(15);
  inventarioItem2();
  textcolor(15);
  inventarioItem3();
  textcolor(15);
  inventarioItem4();
  textcolor(15);
  inventarioItem5();
  textcolor(15);
  inventarioItem6();
}

void inventarioItem1(){
  gotoxy(10,4);
  cprintf("Gel Perfomance..........\n");
}
void inventarioItem2(){
  gotoxy(10,5);
  cprintf("tinte rojo..........\n");
}
void inventarioItem3(){
  gotoxy(10,6);
  cprintf("tinte morado..........\n");
}
void inventarioItem4(){
  gotoxy(10,7);
  cprintf("tinte azul..........\n");
}
void inventarioItem5(){
  gotoxy(10,8);
  cprintf("Gel Marca Gorilla..........");
}
void inventarioItem6(){
  gotoxy(10,9);
  cprintf("Cera para el pelo CK..........");
}
