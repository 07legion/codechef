/*  
    MASTER HAS FAILED MORE TIMES 
    THAN BEGINNNER HAS EVER TRIED
*/

#include "bits/stdc++.h"
using namespace std; 
using namespace chrono;
typedef long long ll;
typedef long long int lli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//Ref :- https://www.geeksforgeeks.org/finding-the-parity-of-a-number-efficiently/
bool func(ll x)  { 
    ll y = x ^ (x >> 1); 
    y = y ^ (y >> 2); 
    y = y ^ (y >> 4); 
    y = y ^ (y >> 8); 
    y = y ^ (y >> 16); 
  	y = y ^ (y >> 32);
    if (y & 1) 
    	return 1;
    return 0; 
    // ll t = 0;
    // while(x > 0) {
    //     if(x % 2) t++;
    //     x /= 2;
    // }
    // if(t % 2) return true;
    // else return false;
} 

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
    	ll Q;cin>>Q;
    	unordered_set<ll> st;
    	ll e = 0,o = 0;
    	while(Q--) {
            ll X;cin>>X;
            if(st.find(X) == st.end()) {
                st.insert(X);
                
                unordered_set<ll> st1;
                for(auto it:st) {
                    if(it == X) continue;
                    st1.insert(it ^ X);
                }
                for(auto it:st1) {
                    st.insert(it);
                }
                
                ll ee = e,oo = o;
                if(func(X)) {
                    e += oo;
                    o += ee;
                    o++;
                }
                 else {
                    e += ee;
                    o += oo;
                    e++;

                }
            }    
            cout<<e<<" "<<o<<"\n";
            //for(auto it:st) cout<<it<<" ";cout<<"\n";
    	}
    } 
}

