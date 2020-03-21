/* TO get AC */


#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define watch(x) cerr<<#x<<" is: "<<(x)<<"\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	
	ll T;cin>>T;
	while(T--) {
		ll n,m,k;cin>>n>>m>>k;
		if(__gcd(n,k) == 1 && __gcd(m,k) == 1) 
			cout<<n*m<<"\n";
		else cout<<"-1\n";
	}
	return 0;
}
/* B.T. */