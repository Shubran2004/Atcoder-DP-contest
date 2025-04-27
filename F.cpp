#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF=1e18;





void solve(){
 string s1,s2;
 cin>>s1>>s2;
 s1=" "+s1;s2=" "+s2;
 ll n=s1.size(),m=s2.size();
 vector<vector<ll>> dp(n,vector<ll> (m,0));
 ll ans=0;
 ll x,y;
 for(ll i=1;i<n;i++){
    for(ll j=1;j<m;j++){
        if(s1[i]==s2[j]){dp[i][j]=1+dp[i-1][j-1];}
        else{ dp[i][j]=max(dp[i-1][j],dp[i][j-1]);  }
        ans=max(ans,dp[i][j]);
        if(ans==dp[i][j]){
            x=i;y=j;
        }
    }
 }
 string out="";
 while(x>0 && y>0){

    if(s1[x]==s2[y]){ out.push_back(s1[x]);x--;y--;ans--;continue;}
    else{
        if(dp[x][y-1]==dp[x][y]){y--;continue;}
        if(dp[x-1][y]==dp[x][y]){x--;continue;}
    }
 }

reverse(out.begin(),out.end());
cout<<out<<endl;


}

int main(){
    ll t=1;//cin>>t;
    while(t--){
    solve();}


}
