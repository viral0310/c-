#include<iostream>
using namespace std;
int factorial(int n);
int main() 
{

	int n;

  	cout << "Enter a integer: ";
  	cin >> n;

  	cout << "Factorial of " << n << " = " << factorial(n);

}

int factorial(int n) 
{
  	if(n > 1)
  	{
    	return n * factorial(n - 1);
	}
  	else
  	{
    	return 1;
	}
}
