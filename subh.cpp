#include<iostream>
using namespace std;
//using main function
int main()
{

double km,met,cent;

cout<<"convert length in centimeter to meter and kilometer"<<"\n";
cout<<"input distance in centimeter=";
cin>>cent;
//convertng values
met=(cent/100.0);
km=(cent/100000.0);
//output values
cout<<"length in meters="<<met<<endl;
cout<<"length in kilometers="<<km<<endl;
return 0;
}



