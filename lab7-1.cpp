//library function
#include<iostream>
//using namespace std
using namespace std;
//int function
int calculatePower(int a, int b)
 {
	if(b!=0)
	   return (a*calculatePower(a,b-1));
	else
	   return 1;
 }
//main function
int main()
 {
//initializing variables
int a,b,c,result;
   { 
	cout<<"enter base number:";
	cin>>a;
	cout<<" enter power number(posetive):";
	cin>>b;
	result = calculatePower(a,b);
	cout<<"a"<<"^"<<"b"<<"="<<result;
//returning 0
        return 0;
   }
 }

