/* BELIEVE THAT */
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define die return 0;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll gcd(ll a, ll b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main() { 

	fastio;
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll T;cin>>T;
	while(T--) {
		ll N;cin>>N;
		set<ll> st;
		for(ll i=0;i<N;i++) {
			ll x;cin>>x;st.insert(x);
		}	
		vector<ll> v;
		for(auto it:st) {
			v.push_back(it);
		}
		if(v.size() == 1) {
			cout<<1ll * 2 * v[0]<<"\n";
			continue;
			
		}
		reverse(v.begin(),v.end());
		ll mx1 = v[0],gcd1 = v[1];
		for(ll i=2;i<v.size();i++) {
			gcd1 = gcd(gcd1,v[i]);
		}
		ll mx2 = v[1], gcd2 = v[0];
		for(ll i=2;i<v.size();i++) {
			gcd2 = gcd(gcd2,v[i]);
		}
		cout<<max(mx1 + gcd1, mx2 + gcd2)<<"\n";
	}
	return 0;
} 