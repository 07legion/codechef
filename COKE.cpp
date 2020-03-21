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
    	ll n,m,k,l,r;cin>>n>>m>>k>>l>>r;
    	vector<pair<ll,ll> >v;
    	while(n--) {
    		ll a,b;cin>>a>>b;
    		v.push_back(make_pair(a,b));
    	}
    	sort(v.begin(),v.end(),cmp);
		// for(auto it:v) cout<<it.first<<" "<<it.second<<"\n";
		// 	cout<<"\n";
		bool flag = false;    	
    	for(ll i=0;i<v.size();i++) {
    		ll temp = v[i].first;
    		// cout<<temp<<"\n";
    		if(temp > k + 1) {
    			if(temp - m < k) temp = k;
    			else temp -= m;
    		}
    		else if(temp < k - 1) {
    			if(temp + m > k) temp = k;
    			else temp += m;
    		}
    		else if(temp == k-1 || temp == k+1) {
    			assert(m >= 1); 
    			temp = k;
    		}
    		if(temp >= l && temp <= r) {
    			cout<<v[i].second<<"\n";
    			flag = true;
    			break;
    		} 
    	}
    	if(!flag) cout<<"-1\n";
    }
	return 0;
}