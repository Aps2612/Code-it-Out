#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
using namespace std;
int main()
{
ll n;
cin>>n;
ll dp[n+1];
dp[0]=1;
for(ll i=1;i<=n;i++)
dp[i]=0;

for(ll i=1;i<=n;i++)
{
  for(ll j=1;j<=6;j++)
  {
    if(i-j>=0)
      dp[i] = (dp[i]+dp[i-j])%mod;
    
  }
}
cout<<dp[n]<<endl;
}
    
