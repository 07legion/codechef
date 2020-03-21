/* It does not matter how slowly you go as long as 
you do not stop. */

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main(){

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N,K;cin>>N>>K;
        vector<ll> v(N);
        for(ll i=0;i<N;i++) cin>>v[i];
        bool flag = false;
        for(ll i=0;i<v.size();i++){
            ll t = 1,sum = 0;
            for(ll j=i;j<v.size();j++){
                //cout<<v[j]<<" ";
                sum += floor(v[j]/t); t++;
            }
            if(sum <= K) {
                cout<<i+1<<"\n";flag = true; break;
            }
        }
        if(!flag) cout<<N+1<<"\n";
    }
    return 0;
}
/*BELIEVE THAT*/