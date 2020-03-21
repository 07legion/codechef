#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	ll tt;cin>>tt;
	while(tt--) {
		ll n;cin>>n;
		char ar[n][n];
		bool dp1[n][n],dp2[n][n];
		memset(dp1,false,sizeof(dp1));
		memset(dp2,false,sizeof(dp2));
		for(ll i=0;i<n;i++) 
			for(ll j=0;j<n;j++) 
				cin>>ar[i][j];
		ll ans = 0;
		for(ll j=n-1;j>=0;j--) {
			for(ll i=n-1;i>=0;i--) {
				if(i == n-1 && j == n-1) {
					if(ar[i][j] == '.') {
						dp1[i][j] = true;
					}
					else dp1[i][j] = false;
				}
				else if(i == n-1) {
					if(ar[i][j] == '.') {
						dp1[i][j] = true;	
					}
					else dp1[i][j] = false;
				}
				else {
					if(ar[i][j] == '.') {
						if(dp1[i+1][j]) {
							dp1[i][j] = true;
						}
					}
					else dp1[i][j] = false;
				}
			}
		}

		for(ll i=n-1;i>=0;i--) {
			for(ll j=n-1;j>=0;j--) {
				if(i == n-1 && j == n-1) {
					if(ar[i][j] == '.') {
						dp2[i][j] = true;
					}
					else dp2[i][j] = false;
				}
				else if(j == n-1) {
					if(ar[i][j] == '.') {
						dp2[i][j] = true;	
					}
					else dp2[i][j] = false;
				}
				else {
					if(ar[i][j] == '.') {
						if(dp2[i][j+1]) {
							dp2[i][j] = true;
						}
					}
					else dp2[i][j] = false;
				}
			}
		}			
		for(ll i=0;i<n;i++) {
			for(ll j=0;j<n;j++) {
				if(dp1[i][j] && dp2[i][j]) ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}