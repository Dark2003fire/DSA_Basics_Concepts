//Program for slection sort::-->
#include<stdio.h>
int main()
{
	int nos , a[20] , temp;
	printf("Enter the total numbers \n" );
	scanf("%d" ,&nos);
	
	printf("Enter the elements \n" , nos );
	for (int i =0; i<nos ; i++)
	{
		scanf("%d" , &a[i]);
		
	}
	for(int i =0; i<nos ;i++)
	{
		for(int j = j+1 ; j < nos ; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				
				
				
			}
		}
		
	}
	printf("After sorting of the array is :");
	for(int i = 0 ; i < nos ; i++)
	{
		printf("%d " , a[i]);
	}
}