// (multi dimension array with function) input - output - sum - mult
#include <stdio.h>

void read_mat (int arr[5][5] , int row , int colmn);
int print_mat (int arr[5][5] , int row , int colmn);
int sum_mat (int arr1[5][5] , int arr2[5][5] , int row , int colmn , int sum[5][5]);
int mult_mat (int arr1[5][5] , int row1 , int colmn1 , int arr2[5][5] , int row2 , int colmn2 , int mult[5][5]);

int main () {
	int mat1[5][5] , mat2[5][5] , sum[5][5] = { 0 } , mult[5][5] ;
	int row1 , row2 , colmn1 , colmn2;

	printf ("Enter the dimentions of matrix 1\n");
	scanf ("%d%d" , &row1 , &colmn1);
	printf ("\nEnter the dimentions of matrix 2\n");
	scanf ("%d%d" , &row2 , &colmn2);

	printf ("\nMatrix one :\n");
	read_mat (mat1 , row1 , colmn1);
	printf ("\nMatrix one =\n");
	print_mat (mat1 , row1 , colmn1);

	printf ("\nMatrix two :\n");
	read_mat (mat2 , row2 , colmn2);
	printf ("\nMatrix two =\n");
	print_mat (mat2 , row2 , colmn2);

	if ( row1 == colmn1 && row2 == colmn2 ) {

		sum_mat (mat1 , mat2 , row1 , colmn1 , sum);
		printf ("\n\nthe sum =\n");
		print_mat (sum , row1 , colmn1);

	} else
		printf ("\n\nCan't be summed\n");

	if ( colmn1 == row2 ) {

		mult_mat (mat1 , row1 , colmn1 , mat2 , row2 , colmn2 , mult);
		printf ("\n\nthe multiply =\n");
		print_mat (mult , row1 , colmn2);

	} else
		printf ("Can't be multiplied\n");

	return 0;
}


void read_mat (int arr[5][5] , int row , int colmn) {
	for ( int i = 0; i < row; i++ ) {
		for ( int j = 0; j < colmn; j++ ) {
			printf ("Enter th element %d,%d\t:" , i + 1 , j + 1);
			scanf ("%d" , &arr[i][j]);
		}
	}
}

int print_mat (int arr[5][5] , int row , int colmn) {
	for ( int i = 0; i < row; i++ ) {
		for ( int j = 0; j < colmn; j++ ) {
			printf ("%d\t" , arr[i][j]);
		}
		printf ("\n");
	}
}

int sum_mat (int arr1[5][5] , int arr2[5][5] , int row , int colmn , int sum[5][5]) {
	for ( int i = 0; i < row; i++ ) {
		for ( int j = 0; j < colmn; j++ ) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

int mult_mat (int arr1[5][5] , int row1 , int colmn1 , int arr2[5][5] , int row2 , int colmn2 , int mult[5][5]) {

	for ( int i = 0; i < colmn2; i++ ) {
		for ( int j = 0; j < row1; j++ ) {
			mult[j][i] = 0;
			for ( int k = 0; k < colmn2; k++ )
				mult[j][i] += arr1[j][k] * arr2[k][i] ;
		}
	}
}
