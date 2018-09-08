//library function
#include<iostream>
//using namespace std
using namespace std;
//function to calculate minimum
 int min(int a,int b,int &c)
{
 if(a>b)
  c=b;
 else
  c=a;
}
//using main function
 int main()
  {
    int n1,n2,minm;
//accept numbers from user
	cout<<"enter first number="<<endl;
	cin>>n1; 
	cout<<"enter second number="<<endl;
	cin>>n2;
//calculate minimum of two number
	min(n1,n2,minm);
//print its minimum
        cout<<"min of two numbers="<<minm<<endl;
return 0;
  }
