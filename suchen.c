#include <stdio.h>
#include <string.h>

int ANN_ANZ = 7;
char *ANN[] ={
  "Werner: SBM GSOH mag Sport, TV, Essen",
  "Mark: SWM NS mag Kunst, Filme, Theater",
  "Luis: SLM ND mag Bücher, Theater, Kunst",
  "Mika: DWM DS mag Autos, Sport und Bieber",
  "Peter: SAM mag Schach, Fitness und Kunst",
  "Jonas: SJM mag Sport, Filme und Theater",
  "Jan: DBM mag Theater, Bücher und Essen"
};

int sport_nicht_bieber(char *s){
  return strstr(s,"Sport") && !strstr(s,"Bieber");
}

int sport_oder_fitness(char *s){
  return strstr(s,"Sport") || strstr(s,"Fitness");
}

int nr_theater(char *s){
  return strstr(s,"NR") && strstr(s,"Theater");
}

int kunst_theater_oder_essen(char *s){
  return strstr(s,"Kunst") || strstr(s,"Theater") || strstr(s,"Essen");
}

void suchen(int (*suche)(char*)){
  int i;
  puts("Suchergebnisse:");
  puts("------------------------------------");
  for(i = 0; i < ANN_ANZ; i++){
    if(suche(ANN[i])){
      printf("%s\n", ANN[i]);
    }
  }
  puts("------------------------------------");
}

int main(){
  suchen(sport_nicht_bieber);
  suchen(sport_oder_fitness);
  suchen(nr_theater);
  suchen(kunst_theater_oder_essen);
  return 0;
}
