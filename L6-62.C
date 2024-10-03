//PROGRAM FOR REVERSING AN ARRAY.
#include<stdio.h>
int main()
{
	int n, arr[n];
	printf("Enter the no of n:");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
	{
		printf("Enter the number:");
		scanf("%d", &arr[i]);
	}
	
	//printing original array
	printf("Original array which is entered:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}
	
	//reversing the array
	for(int i=0; i<n/2; i++)
	{
		int a;
		a=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=a;
	}
	
	//printing the reversed array
	printf(" \n The reversed array: \n ");
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	 } 
	 
	 return 0;
	 	
}
