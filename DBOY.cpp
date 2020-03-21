#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll tt;cin>>tt;
	while(tt--) {
		ll n;cin>>n;
		vector<ll> dis(n,0),coin(n,0);
		for(ll i=0;i<n;i++) cin>>dis[i],dis[i] *= 2;
		for(ll i=0;i<n;i++) cin>>coin[i];
		ll mx = *max_element(dis.begin(),dis.end());
		vector<ll> dp(mx+1,INF);
		dp[0] = 0;
		for(ll i=1;i<=mx;i++) {
			for(ll j=0;j<coin.size();j++) {
				if(i == coin[j]) {
					dp[i] = 1;
					break;
				}
				else if(coin[j] < i) {
					dp[i] = min(dp[i],dp[coin[j]] + dp[i - coin[j]]);
				}
			}
			// mp[i] = dp[i]; 
		}
		// for(ll i=0;i<dp.size();i++) cout<<i<<" "<<dp[i]<<"\n";
		// 	cout<<"\n";
		ll ans = 0;
		for(ll i=0;i<dis.size();i++) {
			ans += dp[dis[i]];
		}
		cout<<ans<<"\n";
	}
	return 0;
}