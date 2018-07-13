#include "kodieren.h"
#include "pruefsumme.h"
#include <stdio.h>

int main(){
  char s[] = "Sprich, Freund und tritt ein.";
  kodieren(s);
  printf("Verschlüsselt: %s\n",s);
  printf("Prüfsumme: %i\n", pruefsumme(s));
  kodieren(s);
  printf("Entschlüsselt: %s\n",s);
  printf("Prüfsumme: %i\n", pruefsumme(s));
  return 0;
}
