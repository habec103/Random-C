#include "kodieren.h"

void kodieren(char *narchicht){
  char c;
  while(*narchicht){
    *narchicht = *narchicht ^ 31;
    narchicht++;
  }
}
