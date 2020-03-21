#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

bool func(ll mid,ll k,string str) {
	ll cost = 0,len = 1;
	str += '#';
	for(ll i=0;i<str.length()-1;i++) {
		if(str[i] == str[i+1]) {
			len++;
		}
		else {
			k -= (len/(mid+1));
			cost += (len/(mid+1));
			len = 1;
		}
	}
	return k >= 0;
}

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n,k; cin>>n>>k;
		string str; cin>>str;
		ll c1 = 0,c2 = 0;
		for(ll i=0;i<str.length();i++) {
			if(i%2 == 1) {
				if(str[i] == '1') c1++;
			}
			if(i%2 == 0) {
				if(str[i] == '0') c1++;
			}
		}
		for(ll i=0;i<str.length();i++) {
			if(i%2 == 0) {
				if(str[i] == '1') c2++;
			}
			if(i%2 == 1) {
				if(str[i] == '0') c2++;
			}
		}
		// cout<<c1<<" "<<c2<<"\n";
		if(k >= min(c1,c2)) {
			puts("1");
			continue;
		}
		ll ans = 0;
		ll low = 2,high = 1000000;
		while(low <= high) {
			ll mid = low + (high - low)/2;
			if(func(mid,k,str)) {
				ans = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
