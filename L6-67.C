//
#include<stdio.h>
int main()
{
	int a1[3][3], a2[3][3], a3[3][3];
	
	//taking element of 1st matrix.
	printf(" \n Enter the data for matrix 1:\n ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &a1[i][j]);
		}
	}
	
	//taking element of 2nd matrix.
	printf(" \n Enter the data for matrix 2:\n ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &a2[i][j]);
		}
	}
	
	//PRINTING MATRIX 1
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a1[i][j]);
	       }
	       printf("\n");
	}
	printf("\n");
	
	
	//PRINTING MATRIX 2
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a2[i][j]);
	       }
	       printf("\n");
	}
	printf("\n");
	
	//STORING THE SUM IN THE 3RD MATRIX .
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			a3[i][j] = a1[i][j]-a2[i][j];
		}
       }

	
	//PRINTING 3RD MATRIX
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a3[i][j]);
	       }
	       printf("\n");
	}
	printf("\n");
	
	
	return 0;
	}
