//Program for Fibonacci Series.
#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a,res,res1,res2;
	a=50;
	res1=0;
	res2=1;
	cout<<res1<<" "<<res2<<" ";
	for(int i=1;i<a;i++)
	{
		res=res1+res2;
		res1=res2;
		res2=res;
		cout<<res<<" ";
			
	}
	return 0;	
}