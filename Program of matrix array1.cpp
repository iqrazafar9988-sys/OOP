# include<iostream>
using namespace std;
int main()
{
	int A[2][2]={ {3,2},{6,4} };
	int B[2][2]={ {2,6},{3,8} };
	int sum[2][2];
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			sum[i][j]=A[i][j]+B[i][j];
		}
		for(int i=0;i<=1;i++)
		
			for(int j=0;j<=1;j++)
	
		cout<<sum[i][j];
	}
}
