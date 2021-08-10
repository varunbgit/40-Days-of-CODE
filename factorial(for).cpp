//factorial of a number
#include<iostream>
using namespace std;

int main()
{
   int a,facto=1;
   cout<<"enter a number";
   cin>>a;
   
   for(int i=2;i<=a;i++)
   {
   	facto=facto*i;
	} 
    
    cout<<"the factorial of number"<<facto;
	
   return 0;
}
