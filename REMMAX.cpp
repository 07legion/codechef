/* TO get AC */
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll T;cin>>T;
	while(T--) {
		string str;cin>>str;
		if(str.length() == 1) cout<<str<<"\n";
		else if(str[0] == '1') {
			string temp = str;
			bool f8 = false;
			for(ll j=1;j<str.length();j++) {
				if(str[j] != '0'){
					f8 = true; break;
				}
			}
			if(!f8) {
				for(ll j=0;j<str.length();j++) {
					if(str[j] == '1') continue;
					else cout<<'9';
				}
				cout<<"\n";
				continue;
			} 
			ll i = 0;
			for(i=1;i<str.length();i++) {
				if(str[i] != '0') break;
			}
			str[i]--;
			for(ll j=i+1;j<str.length();j++) {
				str[j] = '9';
			}
			bool f0 = true;
			for(ll i=str.length()-1;i>=0;i--) {
				if(str[i] > temp[i]) break;
				if(str[i] < temp[i]) {
					f0 = false;break;
				}
			} 
			if(f0) cout<<str<<"\n";
			else cout<<temp<<"\n";
		}	
		else {
			bool f1 = true;
			for(ll i=1;i<str.length();i++) {
				if(str[i] != '9') {
					f1 = false;
					break;
				}
			}
			if(f1) {
				cout<<str<<"\n"; continue;
			}
			str[0]--;
			for(ll i=1;i<str.length();i++) {
				str[i] = '9';
			}
			cout<<str<<"\n";
		}
	}
	return 0;
}
/* B.T. */