#include "hfkal.h"
#include <stdio.h>

void kalorien_anzeigen(float gewicht, float entfernung, float koef){
  printf("Gewicht: %3.2f lbs\n", gewicht);
  printf("Entfernung: %3.2f mi\n", entfernung);
  printf("Kalorien: %4.2f cal\n", koef*gewicht*entfernung);
}

int main(){
  kalorien_anzeigen(115.2, 11.3, 0.79);
  return 0;
}
