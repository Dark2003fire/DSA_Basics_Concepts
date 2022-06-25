#include<iostream>
using namespace std;
int fib(int terms);
int fib(int n)
{
	if(n ==0)
	return 0;
	if(n==1)
	return 1;
	return(fib(n-1)+fib(n-2));
	
}
int main()
{
	int terms , p ,i;
	cout<< "\n Enter the term up to which u want to find the fibonacci series \n"<<endl;
	cin>>terms;
	cout<< "The fibonacci series are :-> "<<endl;
	for(i = 0 ; i<terms ; i++)
	{
		p =fib(i);
		cout<<"\n" << p<<endl;
	}
}