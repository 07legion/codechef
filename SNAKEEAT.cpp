#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main() {


	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n,Q; cin>>n>>Q;
		vector<ll> v(n+1);
		for(ll i=1;i<=n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		vector<ll> pre(n+1,0);
		pre[1] = v[1];
		for(ll i=2;i<=n;i++) pre[i] = pre[i-1] + v[i];
		
		while(Q--) {
			ll k; cin>>k;
			ll index = lower_bound(v.begin(),v.end(),k) - v.begin();
			index--;
			ll current = index, ans = 0;
			ll low = 0,high = index;
			while(low <= high) {
				ll mid = low + ((high - low) >> 2);
				ll temp = k*(current - mid) - (pre[current] - pre[mid]);
				if(mid >= temp) {
					ans = mid;
					high = mid - 1;
				}
				else low = mid + 1;
			}
			cout<<n-ans<<"\n";
		}
	}
	return 0;
}