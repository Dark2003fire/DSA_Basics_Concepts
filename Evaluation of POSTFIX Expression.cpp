#include<stdio.h>
#include<conio.h>
#define MAX 10
#define opra 20
#define ope 30
int st[MAX];
int top = -1;
int gettype(char t){
	
	switch(t){
		
		
		
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return ope;
		default :
			return opra;
		
	}
}

   void push(int temp){
		
		if(top==MAX){
			
			printf("Stack Full or Overflow Condition");
		
			
		}
		else {
			
			
			top++;
			st[top]=temp;
			
		}
				
	}
void eval12(char t2 , int p , int q){
		
		
		
		int r;
		switch(t2){
			
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
	
int pop(){
		
		int x;
		if(top==-1){
			
			printf("Stack   is Empty or Underflow Condition");
		
			
		}
		else{
			
			
			x = st[top];
			top--;
			
		}
		return (x);
		
		
		
}
		
int main(){
	
	
	
	int ans, i , n1 , n2 , res , ch;
	char str[20];
	printf("Enter the Expression \n");
	scanf("%s" , &str);
	
	for(i =0;str[i]!='\0';i++){
		
		ans = gettype(str[i]);
		
		switch(ans){
		
		case opra:
			ch = str[i]-'0';
			push(ch);
			break;
			
		case ope:
			n1 = pop();
			n2 = pop();
			
			eval12(str[i] , n2 , n1);
			break;
	}
		
}

printf("%d" , st[top]);
getch();

	
	
}



