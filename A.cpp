//A
#include <bits/stdc++.h>
using namespace std;
const int M=1e6+1;
const int N=1e9+7;
typedef long long ll;
typedef unsigned long long ull;
typedef  double db;
ll dp[10001][10001];
int main()
{
   ll n;cin>>n;
   vector<ll> v(n),out(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   out[0]=0;
   out[1]=abs(v[1]-v[0]);
   for(ll i=2;i<n;i++){

    out[i]=min(out[i-1]+abs(v[i]-v[i-1]),out[i-2]+abs(v[i]-v[i-2]));

   }
cout<<out[n-1]<<endl;

}

