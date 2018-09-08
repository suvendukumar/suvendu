//library function
#include<iostream>
//using namespace std
using namespace std;
//function to calculate sum
 
int fun(int a,int b)
   {
	int sum= a+b;
	return sum;
   }
	int max(int a,int b)
		{
		if(a<b)
		return b;
		else
		return a;
		}
	 int min(int a,int b)
	{
 	if(a<b)
 	 return a;
 	else
  	return b;
	}
 int main()
  {
    int n1,n2,l;
//accept numbers from user
	cout<<"enter first number="<<endl;
	cin>>n1; 
	cout<<"enter second number="<<endl;
	cin>>n2;
	cout<<" PRESS 1 TO CALCULATE SUM,PRESS 2 TO CALCULATE MAXIMUM,PRESS 3 TO CALCULATE MINIMUM OF TWO NUMBERS "<<endl;
	cin>>l;
	if(l==1)
	{
	fun(n1,n2);
		cout<<"sum of two numbers ="<<fun(n1,n2)<<endl;
	}
	else if(l==2)
		{
   			cout<<"max of"<<n1<<" and "<<n2<<" is "<<max(n1,n2)<<endl;
		}
	else
		{
			cout<<"min of "<<n1<<" and "<<n2<<" is "<<min(n1,n2)<<endl;
		}
	return 0;
}
