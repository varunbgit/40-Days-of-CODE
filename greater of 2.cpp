//check which number is greater

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter two numbers";
	cin>>a>>b; 
	if(a>b)
	{
		cout<<"first number is greater";
	}
	else if(a<b)
	{
		cout<<"second number is greater";
	}
	
	else
	{
		cout<<"both are eqaul";
		
	}
	return 0;
}
