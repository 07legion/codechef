#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 1000000

int main(){

    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N,K;cin>>N>>K;
        vector<ll> v;
        for(ll i=0;i<N;i++){
            ll x;cin>>x;v.pb(x);
        }
        sort(v.begin(),v.end());
        ll t=0;
        /*for(ll i=v.size()-1;i>=0;i--){
            v[i]=1;
            if(t>=K) break;
            else t++;
        }*/
        ll m=v.size()-1;
        while(t<K){
            v[m]=1;
            t++;
            m--;
        }
        ll sum1=0,sum2=0;
        for(ll i=0;i<v.size();i++){
            sum1+=pow(v[i],2);
        }
        for(ll i=0;i<v.size();i++){
            sum2+=v[i];
        }
        if(sum1<=sum2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}