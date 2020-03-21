/* BELIEVE THAT */

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// Reference: https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/

ll power(ll x, ll y, ll p) { 
    ll res = 1;
    x = x % p; 
    while (y > 0) {  
        if (y & 1) 
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 

int main() {

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
     	ll K;cin>>K;
     	cout<<((power(2,K-1,INF) * 10) % INF)<<"\n";
		// ll K;cin>>K;
		// ll p = pow(10,K),ct = 0; 
		// for(ll i=0;i<p/2;i++) {
		// 	set<ll> st;
		// 	if(i == 0) {
		// 		st.insert(0);
		// 		ll n2 = p - i - 1;
		// 		while(n2 > 0) {
		// 			ll t = n2 % 10;
		// 			st.insert(t);
		// 			n2 /= 10;
		// 		}
		// 	}
		// 	else if(i == p-1) {
		// 		ll n1 = p-1; st.insert(0);
		// 		while(n1 > 0) {
		// 			ll t = n1  % 10;
		// 			st.insert(t);
		// 			n1 /= 10;
		// 		}
		// 	}
		// 	else {
		// 		ll n1 = i, n2 = p - i - 1;
		// 		while(n1 > 0) {
		// 			ll t = n1 % 10;
		// 			st.insert(t);
		// 			n1 /= 10;
		// 		}
		// 		while(n2 > 0) {
		// 			ll t = n2 % 10;
		// 			st.insert(t);
		// 			n2 /= 10;
		// 		}
		// 	}
		// 	if(st.size() == 2) {
		// 		ct = (ct+1)%INF;
		// 		//ct++;
		// 		cout<<i<<" "<<p-i-1<<"\n";
		// 	}
		// }    	
		// cout<<(1ll * 2 * ct) % INF<<"\n";
    }    
	return 0;
}
/* 
	MASTER HAS FAILED MORE TIMES
  	THAN BEGINNER HAS EVER TRIED 
*/
