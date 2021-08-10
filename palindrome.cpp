//check if number is a palindrome

#include<iostream>
using namespace std;

int main()
{
	int a,i=1;
	cout<<"enter a number";
	cin>>a;

	int num,n;
		num=a;
        n=a;	

	while(a/10!=0)
	{
		i++;
		a=a/10;
	}
	
	
//	cout<<"i is "<<i<<endl;
	
	int arr[i];
	
	
//	cout<<"size if array"<<sizeof(arr)<<endl;
	
	
	for(int j=0;j<i;j++)
	{
		arr[j]=num%10;
		num=num/10;
	//	cout<<arr[j]<<"  ";
		
	}
//	cout<<endl;
	
	int q=0;
	
	
	
		for(int p=0;p<i/2;p++)
	     {
	     	if(arr[p]==arr[i-p-1])
	     	{q=q+1;
	    
		 //	cout<<q<<endl;
			 }
		
	     }
	    
		// cout<<"value of q "<<q<<endl;
	     //cout<<"i/2 is "<<i/2<<endl;
	     
		 if(q==i/2)
	     {
	     	cout<<"number is a palindrome";
		 }
		 
		 else 
		 {
		 	cout<<"number is not a palindrome";
		 }
	
	
	}
	

