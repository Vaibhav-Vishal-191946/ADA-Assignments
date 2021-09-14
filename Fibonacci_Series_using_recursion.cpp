//Program for Fibonacci Series using Recursion Function.
#include <iostream>
using namespace std;
//Recursion function to evaluate Fibonacci Series.
double fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	int n;
	double result;
	cout << "Enter the number of element : ";
	cin >> n;
	//printing elements of fibonacci series
	for (int i = 0; i < n; i++)
	{
		result = fibo(i);
		cout << result << ' ';
	}
	return 0;
}