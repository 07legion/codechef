/* BELIEVE THAT */
/* To get AC */
#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main(){

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll N,Q;cin>>N>>Q;
    vector<ll> v;
    for(ll i=0;i<N;i++) {
        ll a;cin>>a;v.push_back(a);
    }        
    vector<ll> v1;
    v1.assign(v.begin(),v.end());
    ll t = v[0];
    for(ll i=1;i<N;i++) {
        t ^= v[i];
    }
    v1.push_back(t);
    vector<ll> v2(N+1);
    v2[N] = v1[N];
    t = v1[N];
    for(ll i=N-1;i>=0;i--){
        t ^= v1[i];
        v2[i] = t;
    }
    while(Q--){
        ll a;cin>>a;
        cout<<v2[a % (N+1)]<<"\n";
    }
	return 0;
}
/* BELIEVE THAT */