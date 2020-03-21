#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

bool magic(ll m,vector<ll> v) {

	vector<bool> left(v.size(),false),right(v.size(),false);
	ll k = 0;
	for(ll i=0;i<v.size();i++) {
		if(v[i] >= k + 1) {
			k++; 
			if(k == m) {
				left[i] = true;
				k--; 
			}
		}
		else k = v[i];
	}
	k = 0;
	for(ll i=v.size()-1;i>=0;i--) {
		if(v[i] >= k + 1) {
			k++; 
			if(k == m) {
				right[i] = true;
				k--;
			} 
		}
		else k = v[i];
	}
	for(ll i=0;i<v.size();i++) {
		if(left[i] && right[i]) return true;
	}
	return false;
}

int main() {

	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n; cin>>n;
		vector<ll> v(n); ll sum = 0;
		for(ll i=0;i<n;i++) cin>>v[i],sum += v[i];
		// ll sum = accumulate(v.begin(),v.end(),0);
		ll low = 0,high = n;
		ll ans = 0;
		while(low <= high) {
			ll mid = low + (high - low)/2;
			if(magic(mid,v)) {
				ans = mid;
				low = mid + 1;
			}
			else high = mid - 1;
		}		
		cout<<sum - (ans*ans)<<"\n";
	}
	return 0;
}