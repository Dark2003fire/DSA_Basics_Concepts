#include<stdio.h>  //Implementation of Stack using array;
#define Max 10
int Array[Max] , top = -1;
void Push()
{
	int element;
	if(top == Max-1)
	{
		printf(" Stack is in OverFlow Condition");
		
		
	}
	else
	{
		
		printf("Enter the element u wanna insert :\n" );
		scanf("%d" , &element);
		top++;
		Array[top] = element;
	}
}
void Pop()
{
	int data;
	if(top == -1)
	{
		printf("Stack is in Underflow condition: \n");
	}
	else
	{
		data = Array[top];
		top --;
		printf("Deleted data is %d" , data);
	}
}
void Display()
{
	int i;
	for(i =0; i>=0 ; i--)
	{
		printf("%d" ,Array[i]);
		
	}
}
int main()
{
	
	int ch ; 
	int ans =1 ;
	
	do
	{
	printf("All Satck Operation will Performed here :\n");
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Display\n");
	printf("4.Exit\n");
	switch(ch)
	{
		case 1:
			Push();
			break;
		case 2:
			Pop();
			break;
		case 3:
			Display();
			break;
		
		case 4:
			default :printf("You have Entered an Invalid Choice:\n");
			
	}
	printf("Do You wanna Continue :[1/0] \n");
	scanf("%d" ,&ans);
		
   }
   while(ans == 1);
   
   /*
   Push();
   Pop();
   Display();
   */
}
