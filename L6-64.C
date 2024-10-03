//PROGRAM TO READ A 3*3 MATRIX AND PRINT THE SUM OF ALL ROWS.
#include<stdio.h>
int main()
{
	int arr[3][3];
	
	//Entering the elements of matrix.
	for(int i=0; i<3; i++)
	{
			for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &arr[i][j]);
		}
	}
	
	//printing the matrix.
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", arr[i][j]);
	       }
	       printf("\n");
	
	}
	
	//printing the sums.
	printf(" \n The sum of rows is: \n ");
	for(int i=0; i<3; i++)
	{
		printf("%d \n", arr[i][0]+arr[i][1]+arr[i][2]);
	 } 
	
	return 0;
	
	
	
	
}
