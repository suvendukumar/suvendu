#include<iostream>
//including namespace std
using namespace std;
//using main function
int main()
 {
 int a;
 //inputting the value
 cout<<"input a number=";
 cin>>a;
 //using if else statement
 if(a%5==0 && a%11==0)
     {
	cout<<"the number is divisible";
     }
 else
     {
	cout<<"it is not divisible";
     }
 //return of value
 return 0;
 }
