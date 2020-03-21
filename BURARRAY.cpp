#include "bits/stdc++.h"
using namespace std;
using namespace std::chrono;
typedef long long ll;
typedef long long int lli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(ll blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.8fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

int main() {
    
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll T;cin>>T;
    while(T--){
        ll N,Q;cin>>N>>Q;
        set<ll> st1;
        set<ll> st2;
        ll s = 0;
        while(Q--) {
            ll q;cin>>q;
            if(q == 1) {
                ll y;cin>>y;
                y += s;
                st1.insert(y);
                if(st2.find(y) != st2.end()) 
                    st2.erase(y);
                if(st1.find(y-1) == st1.end())
                    st2.insert(y-1);
            }
            else {
                ll l,r;cin>>l>>r;
                l += s;r += s;
                if(st1.find(r) == st1.end()) {
                    cout<<r<<"\n"; 
                    s  = (s+r)%N;
                }
                else {
                    auto it = st2.lower_bound(r);
                    if(it != st2.begin()){
                        (it)--;
                        if((*it) >= l) {
                            cout<<*it<<"\n";
                            s = (s + (*it)) % N;
                        }
                        else cout<<"0\n";
                    }
                }
            }
        }
    }
    return 0;
}

/* BELIEVE THAT */