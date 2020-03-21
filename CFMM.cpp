/* BELIEVE THAT */
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll T;cin>>T;
	while(T--) {
		ll N;cin>>N;
		map<char,ll> mp;
		while(N--) {
			string str;cin>>str;
			for(ll i=0;i<str.length();i++) 
				mp[str[i]]++;
		}
		cout<<min(mp['c']/2,min(mp['o'],min(mp['d'],min(mp['e']/2,min(mp['c'],min(mp['h'],min(mp['e'],mp['f'])))))))<<"\n";
	}
	return 0;
}
/* BELIEVE THAT */