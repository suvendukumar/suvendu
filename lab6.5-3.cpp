//including library function
#include<iostream>
//using library function for mathematical calculations
#include<cmath>
//using namespace std
using namespace std;
//using main function
int main()
 {
 	long i,j,t,a;
 	double s;
 	for(i=1226;i>1225;i++)
    {
  	for(j=1;j<i;j++)
          {
   		a+=j;
   		s=sqrt(a);
   		t=(long)sqrt(a);
   		if(a==i&&(s-t)==0.0)
   	break;
    }
    
  		 if(a==i&&(s-t)==0.0)
   	         break;
   		a=0;
 }
//values output
	 cout<<"next such number is "<<a<<endl;
	 cout<<"square root of "<<a<<" is "<<s<<endl;
	 cout<<"It is sum of numbers from 1 to "<<j<<endl;
//returning zero
 return 0;
}
