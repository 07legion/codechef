#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

bool cmp(pair<ll,ll> p1,pair<ll,ll> p2) {
	return (p1.second < p2.second);
}

int main() {
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll tt;cin>>tt;
    while(tt--) {
    	ll n;cin>>n;
    	char ar[n][n];
    	for(ll i=0;i<n;i++) 
    		for(ll j=0;j<n;j++) cin>>ar[i][j];
    	ll p1 = 0, p2 = 0;
    	for(ll i=0;i<n;i++) {
    		for(ll j=0;j<n/2;j++) {
    			if(ar[i][j] == '1') p1++;
    		}
    		for(ll j=n/2;j<n;j++) 
    			if(ar[i][j] == '1') p2++;
    	}
    	if(p1 == p2) {
    		cout<<"0\n"; 
    		continue;
    	}
    	// cout<<p1<<" "<<p2<<"\n";
    	// cout<<llabs(p1-p2)<<"\n";
    	vector<ll> ans; ans.push_back(llabs(p1-p2));
    	for(ll i=0;i<n;i++) {
    		ll t1 = 0,t2 = 0;
  			for(ll j=0;j<n/2;j++) 
  				if(ar[i][j] == '1') t1++;
  			for(ll j=n/2;j<n;j++) 
  				if(ar[i][j] == '1') t2++;
    		ll pp1 = p1 - t1,pp2 = p2 - t2;
    		for(ll j=0;j<n/2;j++) 
    			if(ar[i][j] == '1') pp2++;
    		for(ll j=n/2;j<n;j++) 
    			if(ar[i][j] == '1') pp1++;
    		ans.push_back(llabs(pp1 - pp2));
    	}
    	cout<<*min_element(ans.begin(),ans.end())<<"\n";
    }
	return 0;
}