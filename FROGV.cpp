#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n,p,k; cin>>n>>k>>p;
	vector<ll> v(n); vector<pair<ll,ll> >vect;
	for(ll i=0;i<n;i++) cin>>v[i], vect.push_back({v[i], i});
	sort(vect.begin(), vect.end());
	
	unordered_map<ll,ll> mp;
	// vector<ll> mp(100000, 0);
	
	ll t = 1; mp[vect[0].second] = t;

	for(ll i=1;i<vect.size();i++) {
		if(vect[i].first - vect[i-1].first <= k) {
			mp[vect[i].second] = mp[vect[i-1].second];
		}
		else t++, mp[vect[i].second] = t;
	}
	while(p--) {
		ll a,b; cin>>a>>b; a--; b--;
		// assert(a >= 0);
		// assert(b >= 0);
		if(mp[a] == mp[b]) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}