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

	ll n,k,p;cin>>n>>k>>p;
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin>>v[i];
	vector<pair<ll,ll> > v1;
	for(ll i=0;i<n;i++) 
		v1.push_back(make_pair(v[i],i));
	
	sort(v1.begin(),v1.end());

	// for(auto it:v1) cout<<it.first<<" "<<it.second<<"\n";
	// cout<<"\n"; return 0;	
	
	vector<ll> ans(n,-1);	
	ans[v1[n-1].second] = v1[n-1].first + k;
	for(ll i=n-2;i>=0;i--) {
		if(llabs(v1[i+1].first - v1[i].first) <= k) {
			ans[v1[i].second] = ans[v1[i+1].second];
		}
		else {
			ans[v1[i].second] = v1[i].first + k;
		}
	}
	// cout<<ans[2]<<"\n";
	while(p--) {
		ll a,b;cin>>a>>b;
		a--;b--;
		if(ans[a] == ans[b]) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}