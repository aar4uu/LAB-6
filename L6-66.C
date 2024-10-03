//Program to find sum of 2 matrix 3*3
#include<stdio.h>
int main()
{
	int a1[3][3], a2[3][3];//declaration of matrix 1 and 2
	
	//taking input for matrix 1.
	printf("Enter the data for matrix 1 \n ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter the number:");
			scanf("%d", &a1[i][j]);
		}
	}
	
	//taking input for matrix 2.
	printf("Enter the data for matrix 2 \n ");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter the number:");
			scanf("%d", &a2[i][j]);
			
		}
	}
	
	//printing the 1st matrix 
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a1[i][j]);
	       }
	       printf("\n");
	
	}
	printf("\n");
	
	
		//printing the 2nd matrix 
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a2[i][j]);
	       }
	       printf("\n");
	
	}
	printf("\n");
	
	
	//storing the sum in 3rd matrix
	int a3[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
			
		}
       }
       
       //printing the 3rd matrix
       for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d \t", a3[i][j]);
	       }
	       printf("\n");
	
	}
	
	
	return 0;
}
	
	 


	

