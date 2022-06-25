
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n == 0){
		return 1;
		return n *fact(n-1);
		
		
	}
	
}
int main()
{
	int n;
	cout<< "Enter the nos u want to find the factorial of nos %d is \n"<< endl;
	cin>>n;
	cout<< "The factorial of a numbers is \n" << n << endl;
	fact(n);

	

}
/*class recursion()
{
	int Recursion(int n)
	{
		if(n==0)
		{
			return 1;
			return n * fact(n-1);
		}
	}
		recursion r1 = recursion();
	    r1.Recursion();
};
*/

