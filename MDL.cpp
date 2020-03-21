#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
const ll INF = 0x3f3f3f3f; //1061109567
const ll MOD = 1e9 + 7;
ll debug;

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n;cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];
		ll mx = -INF, mn = INF, mxi = 0, mni = 0;
		for(ll i=0;i<n;i++) {
			if(v[i] > mx) mx = v[i],mxi = i;
			if(v[i] < mn) mn = v[i],mni = i;
		}		
		if(mxi > mni) cout<<mn<<" "<<mx<<"\n";
		else cout<<mx<<" "<<mn<<"\n";
	}
	return 0;
}
