#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll n,w,l;
vector<pair<ll,ll> > v;

bool func(ll mid) {
	ll sum = 0;
	for(ll i=0;i<n;i++) {
		if(v[i].first + (mid*v[i].second) >= l) sum += (v[i].first + (mid*v[i].second));
		if(sum >= w) return true;
	}
	return false;
}

int main() {

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
	cin>>n>>w>>l;
	for(ll i=0;i<n;i++) {
		ll a,b; cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	ll ans = 1e18,low = 0, high = 1e18;
	while(low <= high) {
		ll mid = (low + high)/2;
		// if(func(mid)) {
		// 	ans = min(ans,mid);
		// 	high = mid - 1;
		// }
		ll sum = 0; bool flag = false;
		for(ll i=0;i<n;i++) {
			if(v[i].first + (mid*v[i].second) >= l) sum += (v[i].first + (mid*v[i].second));
			if(sum >= w) {
				flag = true;
				break;
			}
		}
		if(flag) {
			ans = min(ans,mid);
			high = mid - 1;
		}
		else low = mid + 1;
	}
	cout<<ans<<"\n";
	return 0;
}