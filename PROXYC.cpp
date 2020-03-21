/* BELIEVE THAT */
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {

	ll T;cin>>T;
	while(T--) {
		ll N;cin>>N;
		string str;cin>>str;
		ll p = 0;
		for(ll i=0;i<str.length();i++) {
			if(str[i] == 'P'){
				p++;
			}
		}
		if(((p*100)/double(N)) >= 75) cout<<"0\n";
		else {
			if(str.length() <= 4) {
				if(((p*100)/double(N)) >= 75) cout<<"0\n";
				else cout<<"-1\n";
			}
			else {
				ll ct = 0; //bool flag = false;
				for(ll i=2;i<str.length()-2;i++) {
					if(((p*100)/double(N)) >= 75) {
						//flag = true;
						break;
					}
					if(str[i] == 'A'){
						if((str[i-1] == 'P' || str[i-2] == 'P') && (str[i+1] == 'P' || str[i+2] == 'P')) {
							p++;ct++;
						}
					}
				}
				if((p*100)/double(N) >= 75) cout<<ct<<"\n";
				else cout<<"-1\n";
			}
		}
	}
	return 0;
}
/* BELIEVE THAT */