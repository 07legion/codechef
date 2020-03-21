/* BELIEVE THAT */
/* Woah, how beautiful approach it is !!! */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MAX 100000

int main(){

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

	ll T;cin>>T;
	while(T--){
		ll N,K;cin>>N>>K;
    	vector<pair<ll,ll> >v(N);
    	for(ll i=0;i<N;i++) cin>>v[i].first>>v[i].second;
    	vector<ll> freq(MAX);
    	fill(freq.begin(),freq.end(),0);
    	for(ll i=0;i<v.size();i++) freq[v[i].first]++,freq[v[i].second+1]--;
 		for(ll i=1;i<freq.size();i++) freq[i] += freq[i-1];
    	vector<ll> v1(MAX),v2(MAX); ll temp = 0;
    	fill(v1.begin(),v1.end(),0);
    	fill(v2.begin(),v2.end(),0);
    	for(ll i=0;i<MAX;i++){
    		if(freq[i] == K) v1[i]++,temp++;
    		else if(freq[i] == K+1) v2[i]++;
    	}
    	for(ll i=1;i<MAX;i++) v1[i] += v1[i-1],v2[i] += v2[i-1];
    	ll mx = 0;
    	for(ll i=0;i<N;i++){
    		ll t1 = v1[v[i].second] - v1[v[i].first-1];
    		ll t2 = v2[v[i].second] - v2[v[i].first-1];
    		mx = max(mx,temp - t1 + t2);
    	}
    	cout<<mx<<"\n";
	}
	return 0;
}
/* BELIEVE THAT */