// swap two numbers using functions clarifing (call by address) consept
#include <stdio.h>
void swap (int &n1 , int &n2) ;

int main () {
	int num1 , num2 ;

	printf ("Enter two numbers to be swapped: \n") ;
	scanf ("%d%d" , &num1 , &num2) ;

	printf ("before swapping \tnum1 = %d\tnum2 = %d\n" , num1 , num2) ;
	swap (num1 , num2) ;
	printf ("after swapping \tnum1 = %d\tnum2 = %d\n" , num1 , num2) ;

	return 0 ;
}

void swap (int &n1 , int &n2) {
	int temp ;
	temp = n1 ;
	n1 = n2 ;
	n2 = temp ;
}