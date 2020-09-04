// array input- output - sum - average - max - min - reverse - sort
#include <stdio.h>

int main () {
	int numbers[50] , rev[50] , n , sum = 0 , max , min ;

	printf ("How many numbers will you enter ?\n") ;
	scanf ("%d" , &n) ;

	// input
	for ( int i = 0 ; i < n ; i++ ) {
		printf ("Enter number %d:\t" , i + 1) ;
		scanf ("%d" , &numbers[i]) ;
	}

	max = min = numbers[0] ;
	// sum - max- min
	for ( int i = 0 ; i < n ; i++ ) {
		sum += numbers[i] ;

		if ( numbers[i] > max ) {
			max = numbers[i] ;
		}
		if ( numbers[i] < max ) {
			min = numbers[i] ;
		}
	}
	
	
	// reverse
	int j = 0 ;
	for ( int i = n - 1 ; i >= 0 ; i-- ) {
		rev[j] = numbers[i] ;
		j++ ;
	}


	// outputs
	printf ("The array  :\n") ;
	for ( int i = 0 ; i < n ; i++ ) {
		printf ("%d , " , numbers[i]) ;
	}

	printf ("\n\nThe array in reverse order  :\n") ;
	for ( int i = 0 ; i < n ; i++ ) {
		printf ("%d , " , rev[i]) ;
	}

	printf ("\n\nThe array in sorted order  :\n") ;
	// sorting step
	int temp ;
	for ( int i = 0 ; i < n ; i++ ) {
		for ( int j = 0 ; j < n ; j++ ) {
			if ( numbers[i] < numbers[j] ) {
				temp = numbers[i] ;
				numbers[i] = numbers[j] ;
				numbers[j] = temp ;
			}
		}
	}
	
	// print the sorted
	for ( int i = 0 ; i < n ; i++ ) {
		printf ("%d , " , numbers[i]) ;
	}

	printf ("\n\nSum  = %d\n" , sum) ;
	printf ("Average  = %f\n" , ( float ) sum / n) ;
	printf ("Max  = %d\n" , max) ;
	printf ("Min  = %d\n" , min) ;

	return 0 ;

}
