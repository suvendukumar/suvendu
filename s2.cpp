#include<iostream>
//including namespace std
using namespace std;
//using main function
int main()
{
int n1,n2,n3;
//inputting 3 numbers
cout<<"enter 1st number:";
cin>>n1;
cout<<"enter 2nd number:";
cin>>n2;
cout<<"enter 3rd number:";
cin>>n3;
//using if statement
if(n1>=n2 && n1>=n3)
    {
	cout<<"n1 is greater";
    }
if(n2>=n1 && n2>=n3)
    {
	cout<<"n2 is greater";
    }
if(n3>=n2 && n3>=n1)
    {
	cout<<"n3 is the largest";
    }
//returning value
return 0;
}
