/* Ein C-Programm, dass für die ganzzahligen Datentypen und die reellen 
Gleitpunkt-Datentypen den benötigten Speicherplatz ausgibt */

#include <stdio.h>

void ganzzahlig(void);
void gleitpunkt(void);

int main(){
	ganzzahlig();
	gleitpunkt();
	return 0;	
}

void ganzzahlig(){
	printf("\nDer Speicherplatz für char:\t %lu Byte\n",sizeof(char));
	printf("Der Speicherplatz für int:\t %lu Byte\n",sizeof(int));
	printf("Der Speicherplatz für short:\t %lu Byte\n",sizeof(short));
	printf("Der Speicherplatz für long:\t %lu Byte\n",sizeof(long));
	printf("Der Speicherplatz für ll:\t %lu Byte\n\n",sizeof(long long));
}

void gleitpunkt(){
	printf("\nDer Speicherplatz für float:\t %lu Byte\n",sizeof(float));
	printf("Der Speicherplatz für double:\t %lu Byte\n",sizeof(double));
	printf("Der Speicherplatz für l-double:\t %lu Byte\n\n", sizeof(long double));

}
