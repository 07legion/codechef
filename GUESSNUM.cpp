#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// source :- https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/


vector<ll> divisors(ll n) { 
    vector<ll> v;
    for (int i=1; i<=sqrt(n); i++) { 
        if (n%i == 0) { 
            if (n/i == i) 
                v.push_back(i); //printf("%d ", i); 
            else {
                v.push_back(i);
                v.push_back(n/i);
                //printf("%d %d ", i, n/i); 
            }
        } 
    } 
    return v;
} 
  

int main() {
 
	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
 	
	ll tt; cin>>tt;
	while(tt--) {
		ll a,m; cin>>a>>m;
		vector<ll> divm = divisors(m);
		multiset<ll> st;
		for(ll i=0;i<divm.size();i++) {
			ll d = divm[i];
			if(d > m) continue;
			ll temp = m - d;
			if(temp % a) continue;
			if(ll(temp/a) % d == 0)
				st.insert(temp/a);
		}		
		if(st.find(0) != st.end()) st.erase(0);
		cout<<st.size()<<"\n";		
		for(auto it:st) if(it) cout<<it<<" "; cout<<"\n";
	}
	return 0;  
}