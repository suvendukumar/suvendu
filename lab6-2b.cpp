

//library function
#include<iostream>
//using namespace std
using namespace std;

/*
write a program as same as that of lab6-1.cpp but here function should be void ,and takes a third passes by ref and then puts sum in that
*/



void funR(int a,int b,int &c)
  {
  c=a+b;
  }
//using main function  
int main(){
   int x,y,z;
	cout<<"enter first number";
	cin>>x;
	cout<<"enter second number";
	cin>>y;
	funR(x,y,z);
	cout<<"sum of two numbers="<<z<<endl;
   return 0;
}
