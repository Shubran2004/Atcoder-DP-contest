#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF=1e18;



void solve(){
   ll n,W;cin>>n>>W;
   vector<ll> w(n+1),v(n+1);
   vector<vector<ll>> dp(n+2,vector<ll> (W+10,-1*INF));
   for(ll i=1;i<=n;i++){cin>>w[i]>>v[i];}
   dp[0][0]=0;

   for(ll i=1;i<=n;i++){
    for(ll j=0;j<=W;j++){
        dp[i][j]=dp[i-1][j];
        if(j-w[i]<0){continue;}
        dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
    }
   }
   ll ans=-1;
   for(ll j=0;j<=W;j++){
      ans=max(ans,dp[n][j]);
   }
cout<<ans<<endl;



}

int main(){
    ll t=1;//cin>>t;
    while(t--){
    solve();}


}
