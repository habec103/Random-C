#include <stdio.h>

typedef struct{
  const char *name;
  const char *art;
  int alter;
} schildkroete;

void happy_birthday(schildkroete *s){
  s->alter = s->alter+1;
  printf("Happy Birthday %s Sie sind jetzt %i Jahre alt!\n", s->name, s->alter);
}

int main(){
  schildkroete myrtle = {"Myrtle", "Lederschildkröte", 99};
  happy_birthday(&myrtle);
  printf("%s ist jetzt %i Jahre alt.\n", myrtle.name,myrtle.alter);
}
