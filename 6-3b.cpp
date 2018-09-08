//library function
#include<iostream>
//using namespace std
using namespace std;
//function to calculate maximum
 void max(int a,int b,int &c)
{
 if(a>b)
  c=a;
 else
  c=b;
}
//using main function
 int main()
  {
    int n1,n2,maxm;
//accept numbers from user
	cout<<"enter first number="<<endl;
	cin>>n1; 
	cout<<"enter second number="<<endl;
	cin>>n2;
//calculate maximum of two number
	max(n1,n2,maxm);
//print its maximum
        cout<<"maximum of two numbers="<<maxm<<endl;
return 0;
  }
