//thr greater of three

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter three numbers ";
	cin>>a>>b>>c;
	
	if(a>b&&a>c)
	{
		cout<<"first is greatest";
		
	}
	else if(b>a&&b>c)
	{
		cout<<"second is greatest";
	}
	else
	{
		cout<<"third is greatest";
	}

	
   return 0;
}
