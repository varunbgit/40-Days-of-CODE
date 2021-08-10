//check if number is an armstrong number;

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,i=1;
	cout<<"enter a number ";
	cin>>a;
	int num=a;
	int n=a;
	while(a/10!=0)
	{
		a=a/10;
		i++;
	}
	//	cout<<"i is "<<i<<endl;;
	
	int sum=0;
	for(int p=0;p<=i;p++)
	{
		sum=sum+pow(num%10,i);
	//	cout<<"sum is "<<sum<<endl;
		num=num/10;
	}
//	cout<<sum<<endl;
	if (sum==n)
	{
		cout<<"the given number is an armstrong number";
	}
	else
	{
		cout<<"given number is not an armstrong number";
	}
   return 0;
}
