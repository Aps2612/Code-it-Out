#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
using namespace std;
int main()
{
ll m,n;
cin>>m>>n;
ll arr[n];
for (int i = 0; i < m; ++i)
cin>>arr[i];
ll dp[n+1];
dp[0]=1;
for(ll i=1;i<=n;i++)
dp[i]=0;

for(ll i=1;i<=n;i++)
{
  for(ll j=0;j<m;j++)
  {
    if(i-arr[j]>=0)
      dp[i] = (dp[i]+dp[i-arr[j]])%mod;
    
  }
}
cout<<dp[n]<<endl;
}
    
