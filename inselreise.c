#include<stdio.h>

typedef struct insel{
  char *name;
  char *oeffnet;
  char *schliesst;
  struct insel *naechste;
}insel;

void anzeigen(insel *start){
  insel *i = start;
  for (;i != NULL; i = i->naechste){
    printf("Name: %s Öffnet: %s - %s\n", i->name, i->oeffnet, i->schliesst);
  }
}

insel *erstellen (char *name){
  insel *i = malloc(sizeof(insel));
  i ->name = strdup(name);
  i ->oeffnet = "09:00";
  i ->schliesst = "17:00";
  i ->naechste = NULL;
  return i;
}

void freigeben(insel *start){
  insel *i = start;
  insel *naechste = NULL;
  for(;i != NULL; i = naechste){
    naechste = i->naechste;
    free(i->naechste);
    free(i);
  }
}

int main(){
  insel *start = NULL;
  insel *i = NULL;
  insel *naechste = NULL;
  char name[80];
  for(;fgets(name,80,stdin) != NULL; i = naechste){
    naechste = erstellen(name);
    if(start == NULL){
      start = naechste;
    }
    if(i != NULL){
      i->naechste = naechste;
    }
  }
  anzeigen(start);
  freigeben(start);
}
