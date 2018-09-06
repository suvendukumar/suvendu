#include<iostream>
using namespace std;
//using main function
int main()
   {
     int i,j,k;
	cout<<"\ninverted mirrored right triangle star pattern:\n";
//using for loop 
      for(i=5;i>=1;--i)
		{
//using for loop for spaces
	for(k=i;k<5;k++)
	    cout<<" ";
//again using for loop for the variable j

		for(j=i;j>=1;--j)
			{
				cout<<"*";
			}
//ending statements
		cout<<endl;
		}
   }
			
