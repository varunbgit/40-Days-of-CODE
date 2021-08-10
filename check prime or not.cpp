//check wheather a number is a prime or not

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter a number";
	cin>>a;
	
	int i=2;
	while(i<a)
	{
		if(a%i==0)
		{
		
		cout<<"number is not prime";
	    break;
	    }
	     
	else 
	      {
		  cout<<"number is prime";
		  break;
	      }
	      
	      i++;
	}
	
    return 0;
}
