#include<stdio.h>
#define max 10
#define opera 20
#define ope 30
int st[max] ;
int top = -1;
int get_type(char t)
{
	switch(t)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return ope;
		default :
			return opera;
	}
}
void push(int temp)
{
	if(top==max)
	{
		printf("Stack is FUll i.e OverFlow Condtion: \n");
		
		
	}
	else
	{
		top++;
		st[top] = temp;
		
	}
}
void Eval(char t2 , int p , int q)
{
	int r;
	switch(t2)
	{
		case '+' :
			r = p+q;
			break;
		case '-':
			r = p-q;
			break;
		case '*':
			r = p*q;
			break;
		case '/':
		    r = p/q;
			break;
					
	}
	push(r);
}
int pop()
{
	int x;
	if(top==-1)
	{
		printf("Stack is Empty i.e UnderFlow Condition :\n");
		
		
	
	}
	else
	{
		x = st[top];
		top --;
		
	}
	return(x);
	
	
}
int main()
{
	int ans , i , n1 , n2 , res , ch;
	char str[20];
	printf("Enter the exprsesion :\n");
	scanf("%s" , &str);
	for(i  = 0; str[i]!='\0' ; i++)
	{
		ans = get_type(str[i]);
		
	}
	switch(ans)
	{
		case opera:
			ch= str[i]-'0';
			push(ch);
			break;
		case ope:
			n1 = pop();
			n2 = pop();
			Eval(str[i] , n2  , n1);
			break;
	}
	printf("%d" , st[top]);	
}













