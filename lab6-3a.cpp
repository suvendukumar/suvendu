//library function
#include<iostream>
//using namespace std
using namespace std;
//function to calculate maximum
int max(int a,int b)
{
if(a<b)
return b;
else
return a;
}
//using main function
int main()
  {
    int n1,n2;
//accept numbers from user
	cout<<"enter first number="<<endl;
	cin>>n1; 
	cout<<"enter second number="<<endl;
	cin>>n2;
//print max of two number
        cout<<"max of"<<n1<<" and "<<n2<<" is "<<max(n1,n2)<<endl;
return 0;
  }
