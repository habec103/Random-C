#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\nAus Fehlern wird man klug!\n");

	double a = 12.5,b;
	srand(a);
	b = rand();

	printf("\nZufallszahl: %f\n", b);
	return 0;
}
