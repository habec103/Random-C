#include<stdio.h>
#include "kodieren.h"

int main(){
  char pw[30];
  printf("PW: ");
  fgets(pw, 30, stdin);
  kodieren(pw);
  printf("New PW: %s\n",pw);
}
