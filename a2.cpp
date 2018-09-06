//hollow square star pattern
//using library function
#include<iostream>
//using namespace std
using namespace std;
//using main function
int main()
 {      
	int n;
	cout<<"enter a number:";
	cin>>n;
//for printing lines with stars
	for(int i=0;i<n;i++)
	{
//using if else statements
		if(i==0||i==n-1)
			{
				for(int j=0;j<n;j++)
				cout<<"*";
				cout<<endl;
			}
		else
		{
//another for loop for line's characters
			for(int j=0;j<n;j++)
			{
				if(j==0||j==(n-1))
				{
				cout<<"*";
			
				}
				else
				 cout<<" ";
					
			}
//ending the complete line
 		cout<<endl;
		}
	}
//returning value
	return 0;
}
