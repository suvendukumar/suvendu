//library function
#include<iostream>
//using namespace std
using namespace std;

  


/*
write a program with a function that takes two int parameter and them together and then returns the sum
*/

int fun(int a,int b)
   {
	int sum= a+b;
	return sum;
   }
//using main function

int main(){
       int n1,n2;
	cout<<"enter first number=";
	cin>>n1;
	cout<<"enter second number=";
	cin>>n2;
	fun(n1,n2);
	cout<<"sum of two numbers ="<<fun(n1,n2)<<endl;
//returning value of function
return 0;
       }

