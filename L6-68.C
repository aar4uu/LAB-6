//program of multipliaction of 3*3 matrix.
#include<stdio.h>
int main()
{
	int a1[3][3];
	int a2[3][3];
	int a3[3][3];
	
	//taking the elements for the 1st array.
	printf(" \n Enter the data for matrix 1:\n ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &a1[i][j]);
		}
	}
	
	//taking the elements for the 2nd array.
	printf(" \n Enter the data for matrix 2:\n ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &a2[i][j]);
		}
	}
	
	//LOGIC FOR MULTIPLICATION.
	for(int i=0; i<3; i++)
	{
		a3[i][0] = a2[0][0]*a1[i][0] +  a2[1][0]*a1[i][1] +a2[2][0]*a1[i][2];
		a3[i][1] = a2[0][1]*a1[i][0] +  a2[1][1]*a1[i][1] +a2[2][1]*a1[i][2];
		a3[i][2] = a2[0][2]*a1[i][0] +  a2[1][2]*a1[0][1] +a2[2][2]*a1[i][2];
	}
	
	printf("\n");
	
	//printing array 1
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a1[i][j]);
	       }
	       printf("\n");
	}
	printf("\n");
	
	
	//printing array 2
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a2[i][j]);
	       }
	       printf("\n");
	}
	printf("\n");
	
	//printing array 3
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



