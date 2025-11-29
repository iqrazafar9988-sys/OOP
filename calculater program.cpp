#include<iostream>
#include"calculater.h"
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	calculater c(a,b);
cout<<"Addition"<<c.add()<<endl;
	cout<<"subtraction"<<c.sub()<<endl;
	cout<<"multiplication"<<c.multi()<<endl;
	cout<<"division"<<c.divide()<<endl;
}
