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
		ll ans = 0;
		for(ll i=0;i<str.length();i++) {
			for(ll j=i;j<str.length();j++) {
				string u = str;
				for(ll k=i;k<=j;k++) {
					if(u[k] == '0') u[k] = '1';
					else u[k] = '0';
				}
				for(ll k=0;k<u.length()-1;k++) {
					if(u[k] == u[k+1]) ans++;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;  
}