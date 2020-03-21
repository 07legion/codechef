#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000000
int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N;cin>>N;
        map<ll,ll> m;
        ll ar[MAX],t=0;
        for(ll i=0;i<N;i++){
            cin>>ar[i];
            //m.insert(make_pair(ar[i],t));t++;
            m[ar[i]]++;
        }
        ll ans=0;
        for(auto i=m.begin();i!=m.end();i++){
            for(auto j=m.begin();j!=m.end();j++){
                if(j->second >= i->first && i->second >= j->first) ans++;
                else if(j->first>i->second) break;
            }
        }    
        cout<<ans<<"\n";
    }
    return 0;

}