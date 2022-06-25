#include<stdio.h>
#include<cstring>
#define max 10
char pop(void);
void push(char);
char st[max] , top = -1;
void push(char t)
{
	if(top == max)
	{
		printf("Stack is in Overflow Condition:\n");
		
	}
	else
	{
		top ++;
		st[top]= t;
		
		
	}
	
}
char pop()
{
	char t2;
	if(top == -1)
	{
		printf("Stack is in Underflow Condidtion:\n");
		
	}
	t2 = st[top];
	top --;
	return (t2);
	
}
int main()
{
	int i , l;
	char str[20];
	printf("Enter the String You wanna reverse :\n");
	scanf("%c" , str);
	l = strlen(str);
	for(i = 0 ; i<l ; i++)
	{
		push(str[i]);
		
	}
	for(i = top ; i>=0 ; i--)
	{
		char t1;
		t1 = pop();
		printf("%c" , t1);
	}
}










