#include "pruefsumme.h"

int pruefsumme(char *text){
  int p = 0;
  while(*text){
    p += p ^ (int)(*text);
    text++;
  }
  return p;
}
