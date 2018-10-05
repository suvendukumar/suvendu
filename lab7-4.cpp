//library function
#include<iostream>
//using namespace std
using namespace std;

//call of function
int addNumbers(int n)
 {
	if (n!=0)
	   return n+ addNumbers(n-1);
	else
	   return n;
 }
//int function
int main()
 {
   int a;
   cout<<"enter a positive integer:"<<endl;
   cin>>a;
   cout<<addNumbers(a)<<endl;
   return 0;
 }

