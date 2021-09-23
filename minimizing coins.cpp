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
ll dp[n+1],arr[m];
for(ll i=0;i<m;i++)
cin>>arr[i];
dp[0]=0;
for(ll i=1;i<=n;i++)
dp[i]=mod;
for(ll i=1;i<=n;i++)
{
  for(ll j=0;j<m;j++)
  {
    if(i-arr[j]>=0 && 1+dp[i-arr[j]]<=dp[i])
      dp[i]=1+dp[i-arr[j]];
   
  }
}
if(dp[n]!=mod)
cout<<dp[n]<<endl;
else
cout<<-1<<endl;
return 0;
}
    
