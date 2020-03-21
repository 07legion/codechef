#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll tt;cin>>tt;
	while(tt--) {
		ll n,q;cin>>n>>q;
		vector<ll> v1(n),v2(n);
		for(ll i=0;i<n;i++) cin>>v1[i];
		for(ll i=0;i<n;i++) cin>>v2[i];  
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		while(q--) {
			ll a;cin>>a;
			ll low = 0,high = 2*1000000000000000000*1ll, ans = -1;
			while(low <= high) {
				ll mid = (low + (high-low)/2), count = 0;
				for(ll i=0;i<v1.size();i++) {
					ll l = 0,h = v2.size()-1, value = mid - v1[i],res = -1;
					while(l <= h) {
						ll m = (l + (h-l)/2);
						if(v2[m] <= value) {
							res = m;
							l = m + 1;
						}
						else h = m - 1;
						
					}
					if(res == -1) break;
					else count += (1 + res);
					if(count >= 10100) break;
				}
				if(count >= a) {
					ans = mid;
					high = mid - 1;
				}
				else low = mid + 1;
			}		
			cout<<ans<<"\n";
		}
	}
	return 0;
}