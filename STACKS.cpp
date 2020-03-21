#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define int long long int
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll tt;cin>>tt;
	while(tt--) {
		ll n;cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];
		vector<ll> temp;
		for(ll i=0;i<v.size();i++) {
			ll index = upper_bound(temp.begin(),temp.end(),v[i]) - temp.begin();
			if(index == temp.size()) temp.push_back(v[i]);
			else{
				temp[index] = v[i];
			}
		}
		cout<<temp.size()<<" ";
		for(auto it:temp) cout<<it<<" ";
			cout<<"\n";
	}
	return 0;
}