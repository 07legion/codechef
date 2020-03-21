#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {

	fastio;	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll tt; cin>>tt;
	while(tt--) {
		string str; cin>>str;
		if(str.length() < 3) {
			if(str.length() == 1) {
				if(str[0] == '?') str[0] = 'A';
				cout<<str<<"\n";
			}
			else {
				if(str[0] == '?') str[0] = 'A';
				if(str[1] == '?') str[1] = 'A';
				cout<<str<<"\n";
			}
			continue;
		}
		for(ll i=str.length()-4;i>=0;i--) {
			if((str[i] == 'C' || str[i] == '?') && (str[i+1] == 'H' || str[i+1] == '?') && (str[i+2] == 'E' || str[i+2] == '?') && (str[i+3] == 'F' || str[i+3] == '?')) {
				str[i] = 'C'; str[i+1] = 'H'; str[i+2] = 'E'; str[i+3] = 'F';
			}
		}
		for(ll i=0;i<str.length();i++) if(str[i] == '?') str[i] = 'A';
		cout<<str<<"\n";
	}
	return 0;
}