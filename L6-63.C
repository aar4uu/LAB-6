// Program to find max and mini from 3*3 matrix
#include<stdio.h>
int main()
{
	int arr[3][3]; //declaration 3*3 matrix
	
	//Taking elememts for array
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf(" Enter the no:");
			scanf(" %d", &arr[i][j]);
		}
	}
	
	//LOGIC TO FIND MAXIMUN FROM ARRAY
	int max=arr[0][0];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if (max< arr[i][j])
			{
				max=arr[i][j];
			}
		}
	}
	
	//Logic to find mimimum from array
	int mini=arr[0][0];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if (mini> arr[i][j])
			{
				mini=arr[i][j];
			}
		}
	}
	
	printf("\n %d is the maximum \n \n", max);
	printf(" \n %d is the minimum \n ", mini);
	
	return 0;
	
 }




