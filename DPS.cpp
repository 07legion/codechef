/* 
	MASTER HAS FAILED MORE TIME 
	THAN BEGINNER HAS EVER TRIED
*/

#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;


int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ll T;cin>>T;
	while(T--) {
		string str;cin>>str;
		map<char,ll> mp;
		if(str.length() % 2) {
			for(ll i=0;i<str.length();i++) 
				mp[str[i]]++;
			ll ct = 0;
			for(auto it:mp) {
				if(it.second % 2) {
					ct++;
				}	
			}
			if(ct == 1 || ct == 3) cout<<"DPS\n";
			else cout<<"!DPS\n";
		}
		else {
			for(ll i=0;i<str.length();i++) 
				mp[str[i]]++;
			ll ct = 0;
			for(auto it:mp) {
				if(it.second % 2) 
					ct++;
			}
			if(ct == 2) cout<<"DPS\n";
			else cout<<"!DPS\n";
		}
	}
	return 0;
}
/* 	
	MASTER HAS FAILED MORE TIME 
	THAN BEGINNER HAS EVER TRIED
*/