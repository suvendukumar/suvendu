//using library function
#include<iostream>
//using namespace std
using namespace std;
//function to enter character
char toUpper(char a)
{
  int b;
  char c;
  b=(int)a-32;
  c=(char)b;
  return c;
}
//using char function for lower cases
char toLower(char a)
{
  int b;
  char c;
  b=(int)a+32;
  c=(char)b;
  return c;
}
//using main function
int main()
{
  char a;
  cout<<"enter a character"<<endl;
  cin>>a;
//using if else statement
  if((int)a>=97&&(int)a<=122)
    cout<<"entered character in upper case is "<<toUpper(a)<<endl;
  else
    cout<<"entered character in lower case is "<<toLower(a)<<endl;
  //returning the value
  return 0;
}
