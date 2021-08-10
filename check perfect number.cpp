//to check if a number is perect number

#include<iostream>
using namespace std;

int main()
{
		int a,sum=1;
	cout<<"enter a number";
	cin>>a;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			sum=sum+i;
        }
	}
	if(sum==a)
	{
		cout<<"given number is a perfect number";
	}
	else
	{
		cout<<"the number is not a perfect number";
	}
	//cout<<"sum of factors is "<<sum;
	
    return 0;
}
