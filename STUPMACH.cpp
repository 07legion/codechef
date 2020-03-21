#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
 
	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
 	
	ll tt; cin>>tt;
	while(tt--) {
		ll n; cin>>n;
		vector<ll> v(n); for(ll i=0;i<n;i++) cin>>v[i];
		vector<ll> pre(n,0);
		pre[0] = v[0];
		for(ll i=1;i<n;i++) {
			pre[i] = min(pre[i-1],v[i]);
		}
		ll sum = 0;
		for(auto it:pre) sum += it; cout<<sum<<"\n"; 
	}
	return 0;  
}