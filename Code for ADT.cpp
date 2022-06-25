#include<stdio.h>
#include<stdlib.h>
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;	
};
void CreateArray(struct myArray *a , int t_size , int u_size)
{
	a -> total_size = t_size;
	a -> used_size  = u_size;
	a -> ptr        = (int*)malloc(t_size * sizeof(int));
	
}
void show(struct myArray *a)
{
	for(int i =0 ; i < a -> used_size ; i++)
	{
		printf("%d \n " , (a->ptr)[i]);
		
	}
	
}
void setVal(struct myArray *a)
{
	int n ,i;
	
	printf("Enter the elements  \n"  ,n);
	scanf("%d" , &n);
	(a->ptr)[i]= n;
	
}
int main()
{
	struct myArray Marks;
	CreateArray(&Marks , 10 ,2); // Function recall;
	printf("we are running the setval function \n");
	setVal(&Marks);//Function recall;
	printf("We are running the show function\n");
	show(&Marks);// Func recall;
}
















