#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9+7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/* BELIEVE THAT */
int main(){
    fastio;   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N;cin>>N;
        vector<ll> v;
        for(ll i=0;i<N;i++){
            ll a;cin>>a;v.push_back(a);
        }
        if(N == 1){
            cout<<v[0]-1<<" "<<v[0]<<"\n";
            continue;
        }
        ll low=0,high = *max_element(v.begin(),v.end());
        while(low <= high){ //high - low > 1){
            ll mid = (low + high)/2;
            ll r=1;bool flag = true;
            for(ll i=0;i<v.size();i++){
                if(r > v[i]) {
                    flag = false; break;
                }
                r+=mid;
            }
            if(flag) low = mid+1; 
            else high = mid-1;
        }
        ll k=low-1;
        cout<<k<<" "; ll t=1ll;
        vector<ll> temp;
        for(ll i=0;i<v.size();i++){
            temp.push_back(v[i] - t);
            t+=k;
        }
        ll mind=INF;
        for(ll i=0;i<temp.size();i++)
            mind = min(mind,temp[i]);

        cout<<mind+1<<"\n";
    }
    return 0;
}
/* BELIEVE THAT */