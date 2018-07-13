#include <stdio.h>
#include "rechnung.h"

float summe = 0.0;
short anzahl = 0;
short steuersatz = 19;

int main(){

  float wert;
  printf("Betrag für Posten: ");
  while (scanf("%f", &wert) == 1) {
    printf("Zwischensumme: %.2f\n",mit_steuer_addieren(wert));
    printf("Betrag für Posten: ");
  }
  printf("\nGesamtsumme: %.2f\n", summe);
  printf("Anzahl Posten: %hi\n", anzahl);
  return 0;
}

float mit_steuer_addieren(float f){
  float steuer = 1 + steuersatz/100.0;
  summe = summe + (f*steuer);
  anzahl = anzahl+1;
  return summe;
}
