#include <stdio.h>
#include <string.h>

int main(){
  char scherz[80];
  printf("Bitte Scherz eingeben:\n");
  scanf("%79s",scherz);

  if(strstr("10010101",scherz)){
    printf("\nDu böser, garstiger Mensch! ... Der war echt gut\n");
  }
  else
    printf("\nDen versteh ich nicht...\n");
  return 0;
}
