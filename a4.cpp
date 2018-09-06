#include<iostream>
using namespace std;
//using main function
int main()
   {
     int i,j;
	cout<<"\ninverted right triangle star pattern:\n";
//using for loop 
	for(i=5;i>=1;--i)
		{
//again using for loop for the variable j

		for(j=i;j>=1;--j)
			{
				cout<<"*";
			}
//ending the line
		cout<<endl;
		}
   }
			
