// read two strings from user and checks if they are identical or not
#include <stdio.h>

void compare (char s1 [] , char s2 []);

int main () {
	char s1[100] , s2[100];


	printf ("Enter the first string\n") ;
	gets (s1) ;

	printf ("Enter the second string\n") ;
	gets (s2) ;

	compare (s1 , s2);
	return 0;
}

void compare (char s1 [] , char s2 []) {
	int i , len1 , len2 , equal = 1;


    // calculate lengths 
	for ( len1 = 0 ; s1[len1] != '\0' ; len1++ ) ;
	for ( len2 = 0 ; s2[len2] != '\0' ; len2++ ) ;

	if ( len1 == len2 ) {
		while ( s1[i] != '\0' ) {
			if ( s2[i] == s1[i] ) {
				i++ ;
			} else {
				equal = 0 ;
				break ;
			}
		}
	}

	if ( equal == 1 && len1 == len2 ) {
		printf ("the length of the two strings are equal and also the strings are identical\n") ;
	} else if ( equal != 1 && len1 == len2 ) {
		printf ("the length of the two strings are equal but the two strings are not identical\n") ;
	} else {
		printf ("The two strings are not equal \n") ;
	}
}
