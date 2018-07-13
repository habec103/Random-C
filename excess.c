#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct knoten{
  char *frage;
  struct knoten *ja;
  struct knoten *nein;
}knoten;

int ja_nein(char *frage){
  char antwort[3];
  printf("%s? j/n: ", frage);
  fgets(antwort,3,stdin);
  return antwort[0] == 'j';
}

knoten *erstellen(char *frage){
  knoten *k = malloc(sizeof(knoten));
  k->frage = strdup(frage);
  k->nein = NULL;
  k->ja = NULL;
  return k;
}

void freigeben(knoten *k){
  if(k){
    if(k->nein){
      freigeben(k->nein);
    }
    if(k->ja){
      freigeben(k->ja);
    }
    if(k->frage){
      free(k->frage);
    }
    free(k);
  }
}

int main(){
  char frage[80];
  char verdächtiger[20];
  knoten *start_knoten = erstellen("Hat der Verdächtige einen Schnurrbart?");
  start_knoten->ja = erstellen("Loretta Barnsworth");
  start_knoten->nein = erstellen("Vinny the Spoon");

  knoten *aktuell;
  do{
    aktuell = start_knoten;
    while(1){
      if(ja_nein(aktuell->frage)){
        if(aktuell->ja){
          aktuell = aktuell->ja;
        }else{
          printf("VERDÄCHTIGER IDENTIFIZERT.\n");
          break;
        }
      }else if(aktuell->nein){
        aktuell = aktuell->nein;
        }else{
          printf("Wer ist der Verdächtige? ");
          fgets(verdächtiger,20,stdin);
          knoten *ja_knoten = erstellen(verdächtiger);
          aktuell->ja = ja_knoten;

          knoten *nein_knoten = erstellen(aktuell->frage);
          aktuell->nein = nein_knoten;

          printf("Eine Frage, die für %s zutrifft, aber für %s nicht?", verdächtiger, aktuell->frage);
          fgets(frage,80,stdin);
          free(aktuell->frage);
          aktuell->frage = strdup(frage);

          break;
      }
    }
  }
  while(ja_nein("Neuer Durchlauf"));
  freigeben(start_knoten);
  return 0;
}
