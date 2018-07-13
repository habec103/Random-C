#include <stdio.h>


enum antworttyp{KORB_GEBEN,ZWEITE_CHANCE,HEIRAT};
typedef struct {
  char *name;
  enum antworttyp typ;
}antwort;

void korb_geben(antwort a){
  printf("Sehr geehrter %s,\n", a.name);
  puts("unglücklicherweise teilte uns Ihr letztes Date mit,");
  puts("dass es Sie nicht wiedersehen will.");
}

void zweite_chance(antwort a){
  printf("Sehr geehrter %s,\n", a.name);
  puts("gute Neuigkeiten: Ihr letztes Date hat uns gebeten,");
  puts("ein weiteres Treffen zu organisieren.");
}

void heirat(antwort a){
  printf("Sehr geehrter %s,\n", a.name);
  puts("herzlichen Glückwunsch! Ihr letztes Date hat uns");
  puts("gebeten, einen Heiratsantrag zu übermitteln.");
}
void (*antworten[])(antwort) = {korb_geben, zweite_chance, heirat};

int main(){
  antwort a[] = {
    {"Mika",KORB_GEBEN},{"Luis",ZWEITE_CHANCE},
    {"Mark",ZWEITE_CHANCE},{"Werner",HEIRAT}
  };
  int i;
  for(i = 0; i < 4; i++){
    (antworten[a[i].typ])(a[i]);
  }
  return 0;
}
