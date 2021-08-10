//print the sum of digits of a number

#include<iostream>
using namespace std;

int main()
{
	int a,sum=0;
	cout<<"enter a number";
	cin>>a;
	while(a%10!=0)
	{
		sum=sum+a%10;
		a=a/10;
	}
	cout<<"sum of digts is "<<sum;
     return 0;
}
