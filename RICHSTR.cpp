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
    	ll n,q; cin>>n>>q;
    	string str;cin>>str;
    	vector<ll> freq(n,0);
    	for(ll i=0;i<str.length();i++) { 
    		if(i+2 > n-1) break;
    		if(str[i] == str[i+1] || str[i+1] == str[i+2] || str[i] == str[i+2]) 
    			freq[i] = freq[i-1] + 1;
    		else 
    			if(!i) freq[i] = 0;
    			else freq[i] = freq[i-1];
    	}
    	while(q--) {
    		ll a,b;cin>>a>>b;
    		a--;b--;
    		if((b-a) < 2) { 
    			cout<<"NO\n";
    			continue;
    		}
    		if(a)
    			if(freq[b-2] - freq[a-1]) cout<<"YES\n";
    			else cout<<"NO\n";
    		else 
    			if(freq[b-2]) cout<<"YES\n";
				else cout<<"NO\n";
    	}
    }
	return 0;
}