#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll INF = 1e9 + 7;

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll tt;cin>>tt;
	while(tt--) {
		ll n,k;cin>>n>>k;
		vector<ll> v(n+1,0);
		for(ll i=1;i<=n;i++) cin>>v[i];
		ll dp[n+1][1024];
		memset(dp,0,sizeof(dp));
		dp[0][0] = 1;
		for(ll i=1;i<=n;i++) {
			for(ll j=0;j<=1023;j++) {
				if(dp[i-1][j] || dp[i-1][j^v[i]]) 
					dp[i][j] = 1;
			}
		} 
		ll ans = -INF;
		for(ll i=0;i<=1023;i++) {
			if(dp[n][i] == 1) ans = max(ans,i^k);
		}
		cout<<ans<<"\n";
	}
	return 0;
}