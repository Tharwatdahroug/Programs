// read numbers and print the sum of odd and even without array
#include <stdio.h>
int main () {
	//sum of odd and even

	int i , num , counter , sumodd = 0 , sumeven = 0;

	printf ("the even and odd numbers will be summed seperately  \n");
	printf ("How many numbers you will enter ? \n");
	scanf ("%d" , &counter);
	printf ("\n");

	for ( i = 1; i <= counter; i++ ) {
		printf ("Enter number %d: \t" , i);
		scanf ("%d" , &num);

		if ( num % 2 == 0 ) {
			sumeven += num;
		} else
			sumodd += num;
	}

	printf ("\nthe sum of even numbers is %d\n" , sumeven);
	printf ("the sum of even numbers is %d\n\n" , sumodd);
	return 0;

}
