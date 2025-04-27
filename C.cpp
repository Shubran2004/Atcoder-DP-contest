#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF=1e18;

struct node{
  ll a;
  ll b;
  ll c;
};

void solve(){
   ll n;cin>>n;
   vector<ll> a(n),b(n),c(n);
   vector<node> dp(n);
   for(ll i=0;i<n;i++){cin>>a[i]>>b[i]>>c[i];}
   dp[0].a=a[0];
   dp[0].b=b[0];
   dp[0].c=c[0];
   for(ll i=1;i<n;i++){
    dp[i].a=max(dp[i-1].b+a[i],dp[i-1].c+a[i]);
    dp[i].b=max(dp[i-1].a+b[i],dp[i-1].c+b[i]);
    dp[i].c=max(dp[i-1].b+c[i],dp[i-1].a+c[i]);
   }

   cout<<max(max(dp[n-1].a,dp[n-1].b),dp[n-1].c)<<endl;


}

int main(){
    ll t=1;//cin>>t;
    while(t--){
    solve();}


}
