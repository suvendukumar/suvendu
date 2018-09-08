//library function
#include<iostream>
//using namespace std
using namespace std;
//using any function
int accept(int &uc,int &u,int &tr)
{
	cout<<"enter unit cost"<<endl;
	cin>>uc;
	cout<<"enter units"<<endl;
	cin>>u;
	cout<<"enter tax rate"<<endl;
	cin>>tr;

}
//using any function to calculate
  int calculate(int uc,int u,int tr,int &st,int &td)
     {
        st=u*uc*tr;
	td=st+(u*uc);
     }
//using any functn for printing
  int print(int uc,int u,int tr,int st,int td)
     {
	cout<<"Unit Cost="<<uc<<endl;
	cout<<"units="<<u<<endl;
	cout<<"tax rate="<<tr<<endl;
	cout<<"sales tax="<<st<<endl;
	cout<<"total due="<<td<<endl;
     }
//using main function again
  int main()
     {
	int uc,u,tr,st,td;
	accept(uc,u,tr);
	calculate(uc,u,tr,st,td);
	print(uc,u,tr,st,td);
//returning the value 
  return 0;
}

