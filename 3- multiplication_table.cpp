// print multiplication table
#include <stdio.h>

int main () {
	int result ;

	printf ("\n\t\t\t    Multiplication Table  \n\n");
	printf ("------------------------------------------------------------------------------\n");

	for ( int row = 1 ; row <= 10 ; row++ ) {
		for ( int col = 1 ; col <= 10 ; col++ ) {
			result = row * col ;
			printf ("%d\t" , result) ;
		}
		printf ("\n") ;
	}

	printf ("------------------------------------------------------------------------------\n");

	return 0 ;
}
