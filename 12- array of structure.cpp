// input and output ( array fo structure ) 
#include <stdio.h>

struct Students {
	float num ;
	int ID ;
};

int main () {
	Students s [10] ;
	int n ;

	printf ( "How Many students you will Enter\n");
	scanf ( "%d" , &n) ;
	for ( int i = 0 ; i < n ; i++ ) {
		printf ( "Enter The num and id of student number %d :\t" , i+1) ;
		scanf ( "%f%d" , &s[i].num , &s[i].ID) ;
	}

	printf ( "\n**********\nYou entered :\n") ;
	for ( int i = 0 ; i < n ; i++ ) {
		printf ( "\nstudent number %d : \t" , i+1) ;
		printf ( "num = %f\t id = %d" , s[i].num , s[i].ID) ;
	}

	return 0 ;
}
