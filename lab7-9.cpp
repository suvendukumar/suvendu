//library function
#include<iostream>
//library function for mathematical approach
#include<cmath>
//using namespace std
using namespace std;
//defining value
int fac(int n,int fn)
{
//if and else
 if(n>0)
 {
  fn*=n;
  return
   fac(n-1,fn);
 }
 else
  return fn;
}
//main function
int main()
{
 int n;
 cout<<"enter a number"<<endl;
 cin>>n;
 cout<<"factorial of "<<n<<"="<<fac(n,1)<<endl;
//returning
 return 0;
}

