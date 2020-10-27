#include<bits/stdc++.h>
using namespace std;
void algo(int sum1,int n)
{
	int sum2=0;
	for(int i=0;i<n;i++)
	sum2=sum2 + (i + 1);
	
	cout<<sum2 - sum1;
}
int main()
{
	int n,sum=0,num;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>num;
		sum+=num;
	}
	algo(sum,n);
}
