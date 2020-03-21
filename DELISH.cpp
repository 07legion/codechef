#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;

int main() {
	
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ll tt;cin>>tt;
    while(tt--) {
		ll n;cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];
		vector<ll> mnright(n,0),mnleft(n,0),mxright(n,0),mxleft(n,0);
		mnleft[0] = v[0], mxleft[0] = v[0];
		for(ll i=1;i<n;i++) {
			mnleft[i] = min(mnleft[i-1]+v[i],v[i]);
			mxleft[i] = max(mxleft[i-1]+v[i],v[i]);
		}
		mnright[n-1] = v[n-1], mxright[n-1] = v[n-1];
		for(ll i=n-2;i>=0;i--) {
			mnright[i] = min(mnright[i+1]+v[i],v[i]);
			mxright[i] = max(mxright[i+1]+v[i],v[i]);
		}
		ll res = -INF;
		for(ll i=0;i<n-1;i++) {
			res = max(llabs(mnleft[i] - mxright[i+1]),res);
			res = max(llabs(mxleft[i] - mnright[i+1]),res);
			res = max(llabs(mnleft[i] - mnright[i+1]),res);
			res = max(llabs(mxleft[i] - mxright[i+1]),res);
		}
		cout<<res<<"\n";
	}
	return 0;
}
/* Bless me papa! */