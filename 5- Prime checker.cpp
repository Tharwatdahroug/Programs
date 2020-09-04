// check if the input number is prime or not
#include <stdio.h>
int main () {
	int num , checker = 0 ;

	printf ("Enter a number to check if it\'s prime or not\n")  ;
	scanf ("%d" , &num) ;

	for ( int i = 2 ; i < num ; i++ ) {
		if ( num % i == 0 ) {
			checker = 1 ;
			break ;
		}
	}
	if ( checker == 1 )
		printf ("NOT PRIME \n") ;
	else
		printf ("PRIME NUMBER\n") ;

	return 0 ;
}
