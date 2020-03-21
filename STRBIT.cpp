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
		ll n,k; cin>>n>>k;
		string str; cin>>str;
		vector<ll> pre(n<<1,0); ll cur = 0;
		ll ans = 0;
		for(ll i=0;i<n;i++) {
			cur += pre[i];
			if((cur % 2 == 0 && str[i] == 'R') || (cur % 2 == 1 && str[i] == 'G')) {
				++ans;
				pre[i+1]++; 
				if(i+k <= pre.size() - 1) pre[i+k]--;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}