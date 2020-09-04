// reverse input number and sum of its digits
#include <stdio.h>
int main(){
	int num,reminder,result=0,sum=0;
	
	printf("Enter an number to be reversed\n");
	scanf("%d",&num);
	
	while( num >= 1 ){
		reminder= num%10 ;
		result= (result*10) + reminder;
		num= num/10 ;
		sum+=reminder;
	}
	
	printf("\nThe reverse :   %d\n",result);
	printf("\nThe sum :       %d\n",sum);

	return 0;
}
