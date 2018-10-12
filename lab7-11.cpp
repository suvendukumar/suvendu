//library function
#include<iostream>
//library function for math
#include<cmath>
//using namespace std
using namespace std;
//defining a function
int hcf(int a,int b,int i,int hf)
{
//if and else
 if(i<=a&&i<=b)
 {
  if(a%i==0&&b%i==0)
  hf=i;
  return
   hcf(a,b,i+=1,hf);
 }
 else
  return hf;
}
//using main function
int main()
{
//declaring variables
 int a,b;
 cout<<"enter the first number"<<endl;
 cin>>a;
 cout<<"enter the second number"<<endl;
 cin>>b;
 cout<<"H.C.F of "<<a<<" and "<<b<<"="<<hcf(a,b,1,0)<<endl;
//returning 0
 return 0;
}

