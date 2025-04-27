//B
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF=1e18;



void solve(){
   ll n,k;cin>>n>>k;
   vector<ll> dp(n+1,INF),h(n+1);
   for(ll i=1;i<=n;i++){
    cin>>h[i];
   }
   dp[1]=0;
   for(ll i=1;i<=n;i++){
    for(ll j=1;j<=k;j++){
        if(i-j<=0){continue;}
        dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
    }
   }
   cout<<dp[n]<<endl;
}

int main(){
    ll t=1;//cin>>t;
    while(t--){
    solve();}


}

