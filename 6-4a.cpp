//library function
#include<iostream>
//using namespace std
using namespace std;
//function to calculate minimum
 int min(int a,int b)
{
 if(a<b)
  return a;
 else
  return b;
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

	
//print its minimum
        cout<<"min of "<<n1<<" and "<<n2<<" is "<<min(n1,n2)<<endl;
return 0;
  }
