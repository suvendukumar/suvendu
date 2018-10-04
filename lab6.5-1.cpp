//library function
#include<iostream>
//using namespace std
using namespace std;

//using main function
int main()
{
//int function for taking variables as m,a,b
 int m,a,b;
 double r;
//using for loop for increament
 for(m=1;m<=33;m++)
  {
//again using for loop for 100-m
   for(a=1;a<=(100-m);a++)
   {
     for(b=1;b<=(100-(a+m));b++)
    {
      r=(3*m)+a+(b*0.5);
      if((r==100)&&((a+b+m)==100))
     {
//output values
      cout<<"number of mangoes= "<<m<<endl;
      cout<<"number of apples= "<<a<<endl;
      cout<<"number of bananas= "<<b<<endl;
      cout<<endl;   
     }
    }
   }
  }
//returning value
 return 0;
}
