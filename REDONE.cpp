/* BELIEVE THAT */

#include "bits/stdc++.h" 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef long long ll;
const ll MOD  = 1e9 + 7;
#define MAX 100000

int main(){

	fastio;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

	ll T;cin>>T;
	ll temp = 1; vector<ll> v;
	for(ll i=1;i<=1000001;i++){
		temp = (temp * i) % MOD;
		v.push_back(temp);
	}
	while(T--){
		ll N;cin>>N;
		cout<<v[N]-1<<"\n";
	}
	return 0;
}

/* BELIEVE THAT */