/* BELIEVE THAT */
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF 1e9 + 7

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll T;cin>>T;
	while(T--) {
		ll N;cin>>N;
		ll ar[507][509];
		ll ct1 = 0,ct2 = 0;
		for(ll i=0;i<N;i++) { 
			for(ll j=0;j<N;j++) {  
				cin>>ar[i][j];
			}
		}
		for(ll i=0;i<N;i++) {
			ll mx = INF;
			for(ll j=0;j<N;j++) {
				if(ar[i][j] < mx) 
					mx = ar[i][j];
				//mx = min(mx,ar[i][j]);
				//cout<<mx<<"\n";
			}
			//cout<<mx<<"\n";
			if(mx == 0) ct1++;
		}
		for(ll i=0;i<N;i++) {
			ll mx = INF;
			for(ll j=0;j<N;j++) {
				if(ar[j][i] < mx)
					mx = ar[j][i];
				//mx = min(mx,ar[j][i]);
			}
			if(mx == 0) ct2++;
		}
		if(ct1 == N && ct2 == N) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
/* BELIEVE THAT */