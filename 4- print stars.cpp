// print triangle of * stars
#include <stdio.h>
int main() {
	int i,x,n;
	
	printf("Enter lines number\n");
	scanf("%d",&n);
	
	for( i=1 ; i<=n ; i++ ) {
		for( x=1 ; x<=i; x++) {
		 	printf("*");
		}
		printf("\n");
	}
	
	return 0 ;
}
