/*
Este programa te pregunta tu edad
*/

#include <stdio.h>
#include <conio.h>

int main(void) {
  int anioNac, edad;
  clrscr();
  textcolor(YELLOW);
  cprintf("Cuando Naciste?");
  scanf("%i", &anioNac);
  edad = 2019 - anioNac;

  if (edad <= 3) {
    cprintf("Eres un bebe\n");
  } else if (edad > 3 && edad <= 13) {
    cprintf("Eres un adolecente\n");
  } else{
    cprintf("Eres mayor de edad\n");
  }
  return 0;
}
