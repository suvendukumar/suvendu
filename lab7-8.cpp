//using library function
#include<iostream>
//using library for mathematical
#include<cmath>
//using namespace std
using namespace std;
//defining function
int sumnum(int n,int nn)
{
 int d;
//if and else
 if(n>0)
  {
   d=n%10;
   nn+=d;
   return
    sumnum(n/10,nn);
  }
 else
  return nn;
}
//using main function
int main()
{
//declaring function
 int n,fs;
 cout<<"enter a number"<<endl;
 cin>>n;
 fs=sumnum(n,0);
 cout<<"sum of digits of "<<n<<" is="<<fs<<endl;
//returning function
 return 0;
}

