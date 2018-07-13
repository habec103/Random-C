#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vgl_werte_abst(const void* wert_a, const void* wert_b){
  int a = *(int*) wert_a;
  int b = *(int*) wert_b;
  return b-a;
}

int vgl_namen(const void* a, const void* b){
  char** sa = (char**)a;
  char** sb = (char**)b;
  return strcmp(*sa,*sb);
}

int main(){

  int werte[] = {543,323,32,554,11,3,112};
  int i;
  qsort(werte,7,sizeof(int),vgl_werte_abst);
  puts("Das sind die sortierten Wertungen");
  for(i=0; i<7; i++){
    printf("Werte: %i\n", werte[i]);
  }
  char *namen[] = {"Karen", "Mark", "Bert", "Mona"};
  qsort(namen,4,sizeof(char*),vgl_namen);
  puts("Das sind die sortierten Namen:");
  for(i=0; i<4; i++){
    printf("%s\n", namen[i]);
  }
  return 0;
}
