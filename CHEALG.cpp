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
		if(str.length() == 1) {
			cout<<"NO\n"; continue;
		}
		// ll i = 0;
		// while(i < str.length()) {
		// 	for(ll j=i;j<str.length();j++) {}
		// }


		vector<ll> v;
		str += '#';
		for(ll i=0;i<str.length();i++) {
			if(str[i] == '#') break;
			ll len = 1;
			for(ll j=i;j<str.length();j++) {
				if(str[j] == '#') break;
				if(str[j] == str[j+1]) len++;
				else {
					i = j;
					v.push_back(len);
					break;
				}
			}
		}
		ll ans = 0;
		for(auto it:v) {
			ll temp = it;
			while(temp) temp /= 10, ans++;
		}
		ans += v.size(); 
		if(ans < str.length()-1) cout<<"YES\n";
		else cout<<"NO\n";
		// cout<<ans<<"\n";
	}
	return 0;  
}