//library function
#include<iostream>
//using namespace std
using namespace std;

//call of function
 int print(int i,int n)
 {
    cout<<i<<endl;
     i++;
    if(i==(n+1))
	return 0;
	
    else
	print(i,n);
 }
//using main function
int main()
 {
    int a,b=1;
    cout<<"enter a number:";
    cin>>a;
	print(b,a);
//returning 0
  
    return 0;
}
