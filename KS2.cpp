/* BELIEVE THAT */
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {

	//fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    ll T;cin>>T;
    while(T--) {
    	ll N;cin>>N; 
    	ll n = N,sum = 0;
    	while(n > 0) {
    		ll t = n % 10;
    		n /= 10;
    		sum += t;
    	}
    	ll ct = 0;
    	for(ll i=sum;i<=10000;i++) {
    		if(i % 10 == 0) break;
    		ct++;
    	}
    	cout<<N<<ct<<"\n";
    }
	return 0;
}
/* BELIEVE THAT */