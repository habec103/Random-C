/* Ein Programm, dass die Wurzeln der Zahlen 4, 12.25, 0.012345 berechnet
mit sqrt() */

#include <stdio.h>
#include <math.h>

double x = 4.0, y = 12.25, z = 0.012345;

int main(){
	printf("\tZAHL\t\tWURZEL\n\n");
	printf("\t%f\t%f\n", x, sqrt(x));
	printf("\t%f\t%f\n", y, sqrt(y));
	printf("\t%f\t%f\n\n", z, sqrt(z));

	return 0;
}

