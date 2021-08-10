//print the factor of a number;
#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter a number";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<"factor is "<<i<<endl;
		}
	}
	
   return 0;
}

