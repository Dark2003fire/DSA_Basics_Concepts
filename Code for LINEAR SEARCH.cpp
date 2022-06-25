#include<stdio.h>  //Program for the Linear search:-->
int main()
{
	int array[100] ,search , i , nos ;
	printf("Enter the nos of elements in array :\n");
	scanf("%d" ,&nos);
	printf("Enter the %d elements \n" , nos);
	for(i = 0 ; i < nos ; i++)
	{
		scanf("%d" , &array[i]);
		
	}
	printf("Enter the element You wanna search :\n");
	scanf("%d" ,&search);
	for(i = 0 ; i < nos ; i++)
	{
		if(array[i]==search)
		{
			printf("%d is the elements u r looking for at index position %d " ,search , i+1);
			break;
		}
	}
	if(i == nos )
	{
		printf("%d is elements is not found in because it's not present in the aray' \n" , search);
		
	
	}
	return 0;	
}