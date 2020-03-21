/* BELIEVE THAT */
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main(){

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
    	ll N;cin>>N;
    	vector<ll> v1(N),v2(N);
    	for(ll i=0;i<N;i++) cin>>v1[i];
    	for(ll i=0;i<N;i++) cin>>v2[i];
    		bool f = true;
    	if((N == 1) && v1[0] != v2[0]) cout<<"NIE\n";
		else if((N == 2) && (v1[0] != v2[0] || v1[1] != v2[1])) cout<<"NIE\n";
    	else{ 
	    	for(ll i=0;i<N-2;i++){
	    		if(v1[i] == v2[i]) continue;
	    		ll t = v2[i] - v1[i];
	    		v1[i] += (t*1);
	    		v1[i+1] += (t*2);
	    		v1[i+2] += (t*3);
	    	}
	    	if((v1[N-1] != v2[N-1] || v1[N-2] != v2[N-2])) {cout<<"NIE\n"; continue;}
	    	bool flag = true;
	    	cout<<"TAK\n";
	    }
    }
    return 0;
}
/* BELIEVE THAT */