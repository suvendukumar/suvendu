//library function
#include<iostream>
//using namespace std
using namespace std;
//ddefining function revnum
int revnum(int n)
 {
      cout<<n%10;
     if(n/10==0)
       return 1;
     else
       revnum((n/10));
 }
//using main function
int main()
 {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    revnum(n);
//returning value
    return 0;
 }
