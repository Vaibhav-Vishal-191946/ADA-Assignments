//Program for Fibonacci Series using For-loop.
#include <iostream>
using namespace std;
int main()
{
	double n, n1, n2, n3;
	cout << "Enter the number of elements: ";
	cin >> n;
	//setting first two terms fibo series to 0,1.
	n1 = 0;
	n2 = 1;
	cout << n1 << " " << n2 << " ";
	//evaluating subsequent terms using FOR loop.
	for (int i = 1; i < n - 1; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << n3 << " ";
	}
	return 0;
}
