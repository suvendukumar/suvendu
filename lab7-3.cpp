//library function
#include<iostream>
//using namespace std
using namespace std;
//defining a function odd
int odd(int i,int n)
 {
  int t;
  if(i%2!=0)
    cout<<i<<endl;
  else
    t++;
    i++;
  if(i==n+1)
   return 1;
  else
  odd(i,n);
 }
//defining again the same taking function as even
int even(int i,int n)
 {
  int t;
  if(i%2==0)
   cout<<i<<endl;
  else
   t++;
   i++;
 if(i==n+1)
   return 1;
  else
   even(i,n);
 }
//using main function
int main()
{
 int n;
 char c;
 cout<<"enter a number"<<endl;
 cin>>n;
 cout<<"press e to print even numbers between 1 and "<<n<<" or press o to print odd numbers between 1 and "<<n<<endl;
 cin>>c;
 if(c=='e')
  even(1,n);
 else
  odd(1,n);
//returning value
 return 0;
} 
