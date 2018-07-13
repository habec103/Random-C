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
