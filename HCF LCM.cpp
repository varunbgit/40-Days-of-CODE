//calculate HCF and LCM of a number

#include<iostream>
using namespace std;

int hcf(int num1,int num2)
{
	int n1,n2;
	if(num1>num2)
	{
		n1=num1;//  n1 always contains greater number
		n2=num2;
	}
	
	else 
	{
		n1=num2;
		n2=num1;
		
	}
	
	if(n1==n2)
	{
		return n1;
	}
	
	else 
	{
		hcf(n2,n1-n2);
	}
}


int main()
{
	int a,b;
	int hf,lcm;
	cout<<"enter two number";
	cin>>a>>b;
	hf=hcf(a,b);
	lcm=a*b/hf;
	cout<<"the hcf of the number is "<<hf<< "and lem of numbers is "<<lcm;;
	
	return 0;
}
