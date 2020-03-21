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
		string str; cin>>str;
		vector<ll> pre0(str.length(), 0),pre1(str.length(), 0);
		if(str[0] == '0') pre0[0] = 1;
		if(str[0] == '1') pre1[0] = 1;
		for(ll i=1;i<str.length();i++) {
			if(str[i] == '0') pre0[i] = pre0[i-1] + 1;
			else pre0[i] = pre0[i-1];
		} 
		for(ll i=1;i<str.length();i++) {
			if(str[i] == '1') pre1[i] = pre1[i-1] + 1;
			else pre1[i] = pre1[i-1];
		} 
		// 0 1 0
		ll ans = INF;
		for(ll i=1;i<str.length();i++) {
			if(str[i] == '0') continue;
			for(ll j=i;j<str.length();j++) {
				if(str[j] == '0') continue;
				if(j == i) {
					ll left1 = pre1[j-1], right1 = pre1[str.length()-1] - pre1[j];
					ans = min(ans, left1 + right1); 
				}
				else {
					ll left1 = pre1[i-1],right1 = pre1[str.length()-1] - pre1[j],middle0 = pre0[j] - pre0[i];
					ans = min(ans, left1 + right1 + middle0); 
				}
			}
		}

		// 1 0 1
		for(ll i=1;i<str.length();i++) {
			if(str[i] == '1') continue;
			for(ll j=i;j<str.length();j++) {
				if(str[j] == '1') continue;
				if(j == i) {
					ll left1 = pre0[j-1], right1 = pre0[str.length()-1] - pre0[j];
					ans = min(ans, left1 + right1);
				}
				else {
					ll left0 = pre0[i-1],right0 = pre0[str.length()-1] - pre0[j],middle1 = pre1[j] - pre1[i];
					ans = min(ans, left0 + right0 + middle1);
				}
			}
		}	

		// 0 1 
		for(ll i=0;i<str.length();i++) {
			if(str[i] == '1') continue;
			 ll left1 = pre1[i], right0 = pre0[str.length()-1] - pre0[i];
			 ans = min(ans, left1 + right0);
		}

		// 1 0 
		for(ll i=0;i<str.length();i++) {
			if(str[i] == '0') continue;
			 ll left0 = pre0[i], right1 = pre1[str.length()-1] - pre1[i];
			 ans = min(ans, left0 + right1);
		}

		ll ones = 0, zeros = 0;
		for(ll i=0;i<str.length();i++) {
			if(str[i] == '1') ones++;
			else zeros++;
		}
		ans = min(ans, (min(ones, zeros)));
		cout<<ans<<"\n";
	}
 
	return 0; 
}