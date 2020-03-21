#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
	
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ll tt;cin>>tt;
    while(tt--) {
		ll n;cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) cin>>v[i];
		vector<ll> ans(n,0);
		ans[n-1] = 1;
		for(ll i=n-2;i>=0;i--) {
			if(v[i] > 0 && v[i+1] > 0) ans[i] = 1;
			else if(v[i] < 0 && v[i+1] < 0) ans[i] = 1;
			else if(v[i] > 0 && v[i+1] < 0) ans[i] = ans[i+1] + 1;
			else if(v[i] < 0 && v[i+1] > 0) ans[i] = ans[i+1] + 1;			
		}
		for(auto it:ans) cout<<it<<" ";
			cout<<"\n";
	}

	return 0;
}
/* Bless me papa! */