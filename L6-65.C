//PROGRAM FOR TRANSPOING 3*3 MATRIX
#include<stdio.h>
int main()
{
	int arr[3][3];
	
	//TAKING ELEMENT FOR MATRIX
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &arr[i][j]);
		}
	}
	printf("\n Matrix \n");
	
	//PRINTING THE MATRIX.
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", arr[i][j]);
	       }
	       printf("\n");
	
	}
	
	//PRINTING THE TRANSPOSE OF GIVEN MATRIX.
	printf("\n Transpose of the matrix: \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", arr[j][i]);
	       }
	       printf("\n");
	
	}
	
	return 0;
	
	
}
