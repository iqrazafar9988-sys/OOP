#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		if(i==1 ||  i==5 || j==1 || j==10)
		{
			 Sleep(100);
		cout<<"*";
		}
		else
		cout<<" ";
		cout<<"\t";
	}
}
