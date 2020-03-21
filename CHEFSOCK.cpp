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

	// ll tt; cin>>tt;
	// while(tt--) {
		ll a,b,c; cin>>a>>b>>c;
		c -= a;
		if(ll(c / b) % 2 == 0) cout<<"Lucky Chef\n";
		else cout<<"Unlucky Chef\n";
	// }
	return 0;
}