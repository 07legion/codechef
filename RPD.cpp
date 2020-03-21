#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
const ll INF = 1e9 + 6;

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll tt;cin>>tt;
    while(tt--) {
        // ll n;cin>>n;
        // vector<ll> v(n);
        // for(ll i=0;i<n;i++) cin>>v[i];
        // unordered_set<ll> st;
        // for(ll i=1;i<v.size()-1;i++) {
        //     if(st.find(i) != st.end()) continue;
        //     ll left_curr_sum = (i*v[i-1]) + (v[i]*(i+1));
        //     ll right_curr_sum = ((i+1)*v[i]) + (v[i+1]*(i+2));
        //     ll left_curr_sum_swap = (i*v[i]) + (v[i-1]*(i+1));
        //     ll right_curr_sum_swap = ((i+1)*v[i+1]) + (v[i]*(i+2));
        //     // cout<<left_curr_sum<<" "<<right_curr_sum<<" "<<left_curr_sum_swap<<" "<<right_curr_sum_swap<<"\n";
        //     bool flag1 = false,flag2 = false;
        //     if(left_curr_sum_swap > left_curr_sum && right_curr_sum_swap < right_curr_sum) {
        //         st.insert(i);st.insert(i-1); 
        //         swap(v[i],v[i-1]);
        //         continue;
        //     }
        //     if(right_curr_sum_swap > right_curr_sum && left_curr_sum_swap < left_curr_sum){
        //         st.insert(i);st.insert(i+1); 
        //         swap(v[i],v[i+1]);
        //         continue;
        //     }
        //     if(left_curr_sum_swap > right_curr_sum_swap && left_curr_sum_swap > right_curr_sum && left_curr_sum_swap > left_curr_sum) {
        //         flag1 = true;
        //     }
        //     if(right_curr_sum_swap > left_curr_sum_swap && right_curr_sum_swap > right_curr_sum && right_curr_sum_swap > left_curr_sum) {
        //         flag2 = true;
        //     }
        //     if(flag1 && !flag2) {
        //         swap(v[i],v[i-1]);
        //         st.insert(i); st.insert(i-1);
        //     }
        //     else if(!flag1 && flag2) {
        //         swap(v[i],v[i+1]);
        //         st.insert(i); st.insert(i+1);
        //     }
        //     else if(!flag1 && !flag2 && right_curr_sum_swap == left_curr_sum_swap) {
        //         swap(v[i],v[i-1]);
        //         st.insert(i-1);st.insert(i);
        //     }
        // } //break;

        // ll sum = 0,ct = 1;
        // for(auto it:v) sum += (it*ct),ct++;
        // cout<<sum<<"\n";
        ll n;cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ans = -INF;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++) {
                ll p = (1ll * v[i] * v[j]),sum = 0;               
                while(p > 0) {
                    sum += (p % 10);
                    p /= 10;
                }
                ans = max(ans,sum);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
