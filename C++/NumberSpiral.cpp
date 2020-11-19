#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t,x,y;
  cin>>t;
  while(t>0)
  {
    cin>>y>>x;
    ll z = max(y,x);
    ll ap = z*(z-1) + 1;  //digonal value
    ll ans;
    if(z%2==0) ans = ap + y - x;
    else ans = ap + x - y;

    cout<<ans<<endl;
    t--;
  }
}
