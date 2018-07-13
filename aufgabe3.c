#include <stdio.h>

void pause(void);
void antwort(void);

int main(){
	printf("\nLieber Leser,\ngönnen Sie sich jetzt eine");
	pause();
	printf("!\n");
	antwort();

	return 0;
}

void pause(){
	printf(" PAUSE");
}

void antwort(){
	printf("\nAntwort:\n\nNIEMALS!!\n\n");
}
