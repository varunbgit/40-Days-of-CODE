//check if the year is a leap year

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter the year";
	cin>>a;
	
	if((a%4==0&&a%100!=0)||a%400==0)
	{
		cout<<"year is a leap ";
	}
	else 
	{
		cout<<"year is not leap";
	}
	
    return 0;
}

