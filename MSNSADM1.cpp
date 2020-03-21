#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {


    fastio; 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll tt;cin>>tt;
    while(tt--) {
        ll n;cin>>n;
        vector<ll> v1(n),v2(n);
        for(ll i=0;i<n;i++) cin>>v1[i];
        for(ll i=0;i<n;i++) cin>>v2[i];
        vector<ll> temp;
        for(ll i=0;i<n;i++) 
            temp.push_back((1ll * v1[i] * 20) - (1ll * v2[i] * 10));
        sort(temp.begin(),temp.end(),greater<ll> ());
        if(temp[0] < 0) cout<<"0\n";
        else cout<<temp[0]<<'\n';
    }
}