// switch - display menu - factorial - power
#include <stdio.h>

int main ( ) {
	int choise, num , fact = 1 , n , power , result = 1 ;;;
	
	printf ("Enter 1 for factorial or 2 for power:\n");
	scanf ("%d" , &choise) ;

	switch ( choise ) {
		case 1 :
			printf ("Enter a number to get the factorial \n")  ;
			scanf ("%d" , &num)  ;

			for ( int i = 1 ; i <= num ; i++ ) {
				fact *= i ;
			}

			printf ("%d ! =%d\n" , num , fact) ;

			break ;
		case 2 :
			printf ("Enter two number , the base and the power\n") ;
			scanf ("%d%d" , &n , &power) ;

			for ( int i = 1 ; i <= power ; i++ ) {
				result *= n ;
			}

			printf ("%d^%d = %d\n" , n , power , result) ;
			break ;

		default :
			printf ("Wrong Entry \n") ;
	}

	return 0 ;
}
