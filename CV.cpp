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
		ll N;cin>>N;
		string str;cin>>str;
		ll ct = 0;
		for(ll i=0;i<str.length()-1;i++) {
			if(str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' ||  str[i+1] == 'o' || str[i+1] == 'u') {
				if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&  str[i] != 'o' && str[i] != 'u')
					ct++;
			}
		}
		cout<<ct<<"\n";
	}
	return 0;
}
/* 	
	MASTER HAS FAILED MORE TIME 
	THAN BEGINNER HAS EVER TRIED
*/