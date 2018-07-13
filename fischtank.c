#include <stdio.h>
struct auslauf{
  const char *beschreibung;
  float dauer;
};

struct speise{
  const char *zutaten;
  float menge;
};

struct vorlieben{
  struct auslauf auslauf;
  struct speise nahrung;
};

struct fish {
  char *name;
  char *art;
  int zaehne;
  int alter;
  struct vorlieben pflege;
};

void katalog (struct fish f){
  printf("%s ist ein/e %s mit %i Zähnen. Er ist %i Jahre alt.\n", f.name,f.art,f.zaehne,f.alter);
}

void schild (struct fish f){
  printf("Name: %s\nArt: %s\nJahre alt: %i\nZähne: %i\n", f.name,f.art,f.alter,f.zaehne);
}

int main(){
  struct fish snappy = {"Snappy","Piranha",69,4};
  katalog(snappy);
  schild(snappy);
  return 0;
}
