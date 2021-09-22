#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
using namespace std;
int main(){

    
   ll n,a,b,ans=0,first=0;
   cin>>n;
   vector<pair<ll,ll>>v;
   while(n--){
      cin>>a>>b;
      v.push_back({a,b});
   }

  sort(v.begin(),v.end());
 
  
  for(ll i=0;i<v.size();i++){
    first=first+v[i].first;
     ans=ans+v[i].second-first;
  }
  cout<<ans<<endl;

    return 0;
}