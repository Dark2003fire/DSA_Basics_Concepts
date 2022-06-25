#include<stdio.h>
#include<cstring>
#define max 20
int pre(char);
int main()
{
	char ch , in[max] , st [max] ,pos[max];
	int top = -1 , i , j =0 ,l;
	printf("Enter the infix Expression:\n");
	scanf("%s" ,in);
	top++;
	st[top] = '-';
	l = strlen(in);
	for(i = l-1 ; i>=0 ; i--)
	{
		ch = in[i];
		if(ch =='+'|| ch =='-' || ch =='*' || ch =='/' || ch =='%' || ch == '^')
		{
			if (pre(st[top])>pre(ch))
			{
				pos[j] = st[top];
				j++;
				top--;
				
				
				
			}
			top++;
			st[top] = ch;
		}
		else if(ch == ')')
		{
			top ++;
			st[top] = ch;
		}
		else if(ch == '(')
		{
			while(st[top]!=')')
			{
				pos[j] = st[top];
				j++;
				top--;
				
			}
			top --;
		}
		else
		{
			pos[j] = ch;
			j++;
			
		}
		while(st[top] != '-')
		{
			pos[j] = ch;
			top--;
			j++;
			
		}
		pos[j] = '\0';
		strrev(pos);
		for(i = 0 ; pos[i]!='\0'  ;i++)
		{
			
			printf("%c" , pos[i]);
			
		}
		
	}
	


}
int pre(char c)
{
		int t = 0;
		switch(c)
		{
			case '^':
				t = 3;
				break;
			case '*':
				t = 2;
				break;
			case '/':
				t = 2;
				break;
			case '%':
				t = 2;
				break;
			case '+':
				t =1;
				break;
			case '-':
				t = 1;
				break;
				
		}
		return t;
		
}	