/* 
    MASTER HAS FAILED MORE TIMES
    THAN BEGINNNR HAS EVER TRIED
*/
#include "bits/stdc++.h"
using namespace std; 
using namespace chrono;
typedef long long ll;
typedef long long int lli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(ll blockTime = 0;(blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.8fs\n", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))


int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll N,M;cin>>N>>M;
    vector<ll> v(N+1,0);
    for(ll i=1;i<=N;i++) cin>>v[i];
    unordered_set<ll> st; unordered_map<ll,ll> mp;
    vector<ll> L(N+1,0),R(N+1,0);
    // for(ll i=1;i<=N;i++) {
    //     if(st.find(v[i]) == st.end()) {
    //         L[i] = i; mp[v[i]] = i; st.insert(v[i]);
    //     }
    //     else L[i] = mp[v[i]];
    // }
    // // for(auto it:L) cout<<it<<" ";
    // //     cout<<"\n";
    // st.clear();mp.clear();
    // for(ll i=N;i>=1;i--) {
    //     if(st.find(v[i]) == st.end()) {
    //         st.insert(v[i]);
    //         mp[v[i]] = i; R[i] = i;
    //     }
    //     else R[i] = mp[v[i]];
    // }
    for(ll i=1;i<=N;i++){
        if(i==1||v[i]!=v[i-1]) L[i]=i;
        else L[i]=L[i-1];
    }
    for(ll i=N;i>=1;i--){
        if(i==N||v[i]!=v[i+1]) R[i]=i;
        else R[i]=R[i+1];
    }
    // for(auto it:R) cout<<it<<" ";
    //     cout<<"\n";
    while(M--) {
        ll l,r,k;cin>>l>>r>>k;
        ll mid = l + (r - l)/2;
        cout<<(((min(R[mid],r) - max(L[mid],l) + 1) >= k) ? v[mid] : -1)<<"\n";
    }
    return 0;
}

/* PAPA */