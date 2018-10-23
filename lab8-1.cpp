//library function

#include <iostream>
//using namespace std
using namespace std;
//generating function

int sumarr(int arr[],int n)
 {
    int b,sa=0;
    for(b=0;b<n;b++)
    sa+=arr[b];
    return sa;
 }
 int main()
 {
     //declaration 
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY"<<endl;
    cin>>n;
    int arr[n],a,b,c,sa;
    //output
    cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
    for(a=0;a<n;a++)
    cin>>arr[a];
    cout<<"ELEMENTS OF THE ARRAY ARE"<<endl;
    for(b=0;b<n;b++)
    cout<<arr[b]<<endl;
    sa=sumarr(arr,n);
    cout<<"SUM OF ELEMENTS OF THE ARRAY="<<sa<<endl;
    //return 0
   return 0;
 }