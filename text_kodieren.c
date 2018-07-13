#include <stdio.h>
#include "kodieren.h"

int main(){
  char text[80];
  while(fgets(text,80,stdin)){
    kodieren(text);
    printf("%s\n", text);
  }
}
