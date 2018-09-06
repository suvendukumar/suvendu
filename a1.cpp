#include<iostream>
using namespace std;
//using main function
int main()
 {
	int a;
//printing the header line
	cout<<"\nprint a pattern like square with * character:";
//asking the user for input
	cout<<"\ninput the number of characters for a side:";
	cin>>a;
//using nested for loop
	for(int row=1;row<=a;row++)
	{
		for(int col=1;col<=a;col++)
		{
			cout<< "*";
		}
		cout<<endl;
	}
//returning value
	return 0;
 }
