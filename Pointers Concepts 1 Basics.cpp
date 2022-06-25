/* Pointers :-->
     Pointers which store the addresses of another variable;
             
*/

#include<stdio.h>
int main(){
	
	
	//Basics of Pointers :-
	int a ; 
	a = 10;
	int *p;//*p will give the value of p which is present at address of a;
	p = &a; //&a will give the address of a;
	printf("%d \n" , p);
	printf("%d \n" ,&a);
	printf("%d \n" , &p);
	printf("%d \n" , *p);
	
	char c ;
	c = 'H';
	char *co;
	co = &c;
	printf("%c \n" , &co);
	printf("%c \n" ,&c);
	printf("%c \n" , *co);
	
	int sum = 20;
	int *result = &sum;
	*result +=1;// Here we are incrementing the value;
	printf("result address is  is =  %d\n " , result);
	printf("result value  is  is  = %d\n " , *result);
	printf("Let's incerment the value of result = %d\n" , *result);
	
	int ab = 8865;
	int *b = &ab;
	printf("Size if a is = %d bytes\n"  ,sizeof(int));
	printf("Address of (ab) is = %d\n" , b);
	
	char ch = 's';
	char *chr  = (char*)b;//Typecasting 
	printf("Size  of char is =%c bytes \n" ,sizeof(char));
	printf("Value  of char is = %c \n" ,*chr);

//only two arithmatic opeartions we can perform in pointers :-addition and subtraction

    printf("Adress  = %d \n  Value = %d \n" , chr+1 , *(chr+1));
    printf("Adress  = %d \n  Value = %d \n" , chr-1 , *(chr-1));
	




		
}	
	




