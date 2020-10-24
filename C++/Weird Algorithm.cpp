//Weird Algorithm
#include<bits/stdc++.h>
using namespace std;
void algo (int n)
{
	while(n != 1)
	{
		if(n%2 == 0)
		{
			n=n/2;
			cout<<n<<"even ";
		}
		else{
			n=(n*3)+1;
			cout<<n<<"odd ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<n<<"def ";
	algo(n);
}
//////////////////////////////////////////////////
//Weird Algorithm
#include<bits/stdc++.h>
using namespace std;
void algo (int n)
{
	if(n == 1)
	cout<<n<<" ";
	else if(n%2 == 0)
	{
		if(n/2 != 1)
		{
			cout<<n/2<<" ";
			algo(n/2);
		}
		else algo(n/2);
	}
	else{
		cout<<(n*3)+1<<" ";
		algo((n*3)+1);
	}
}
int main()
{
	int n;
	cin>>n;
	if(n!=1)
	{
		cout<<n<<" ";
		algo(n);
	}
	else
	cout<<n;
}
