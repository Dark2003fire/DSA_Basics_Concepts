#include<stdio.h>
#define MAX 10

void swap(int *x , int *y)   // Here I've created the Swap function;
{
	int temp;
	
	temp   = *x;
	*x = *y;
	*y = temp;
}
void bubblesort(int list[] , int n )  //This is the function  logic of Bubble Sort 
{
	int i , j ;
	for (i = 0 ; i < (n-1) ; i++)
	{
		
		for (j = 0 ; j < n -(i+1) ; j ++)
		{
			if (list[j]>list[j+1])
			{
			swap(&list[j]   , &list[j+1]);	//Called swap function
			}
			
		}
		printf("\n");
	}
	
}

void Userinputlist(int list[] , int n)
{
	int i ;
	printf("Enter the elements :\n");
	for(i =0 ; i < n ; i++)
	{
		scanf("%d" , &list[i]);
		printf("\n");
	}
}

void printlist(int list[] , int n)
{
	int i ;
	printf("The elements of the list are :\n");
	for(i= 0; i < n ; i++)
	{
		printf("%d" ,list[i]);
		printf("\n");
	}
}
int main()
{
	int list[MAX] , n;
	printf("Enter the numbers of elements in the list max = 10\n");
	scanf("%d" , &n);
	Userinputlist(list , n);
	printf("The list before the sorting is :\n");
	printlist(list , n);
    bubblesort(list ,n);
    printf("The list  after  sorting is :\n");
    printlist(list , n);
}