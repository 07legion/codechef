/* BELIEVE THAT */
#include <iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds; 
typedef long long ll;

typedef tree<
ll,
null_type,
less_equal<ll>,
rb_tree_tag,
tree_order_statistics_node_update> ordered_set;


int main(){
    
    ll T;cin>>T;
    while(T--){
        ll N,K,m,b,ans = 0;
        cin>>N>>K;
        vector<ll> v(N);
        for(ll i=0;i<N;i++) cin>>v[i];
     
        for(ll i=0;i<N;i++){
            
            ll freq[2001];
            memset(freq,0,sizeof(freq));
            ordered_set st;
            
            ll temp = 0;     
            for(ll j=i;j<N;j++){
                
                st.insert(v[j]);
                freq[v[j]]++;
                m = ceil((1.0 * K)/(j - i + 1));
                b = (K-1)/m;
                temp = *st.find_by_order(b);
                if(freq[freq[temp]]) 
                    ans++;
            
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/* BELIEVE THAT */