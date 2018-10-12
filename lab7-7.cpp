//library function
#include<iostream>
//library function for mathematical calculations
#include<cmath>
//using namespace std
using namespace std;
//defining a function
int palnum(int n,int nn)
{
 int d;
 if(n>0)
 {
  d=n%10;
  nn=(nn*10)+d;
  return
   palnum(n/10,nn);
 }
 else
  return nn;
 
}
//using main function
int main()
{
 int n,nn,fn;
 nn=n;
 cout<<"enter a number"<<endl;
 cin>>n;
 fn=palnum(n,0);
//using if else statement
 if(fn==nn)
  cout<<n<<" is a pallindromic number"<<endl;
 else
  cout<<n<<" is not a pallindromic number"<<endl;
//returning value 
 return 0;
}
