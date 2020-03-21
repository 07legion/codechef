#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100009
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define print(v) for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<"\n"
#define d() cout<<"debug\n"
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/* BELIEVE THAT */

int main(){

    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N,K;cin>>N>>K;
        vector<ll> v1(N),v2(N);
        fill(v1.begin(),v1.end(),0);
        fill(v2.begin(),v2.end(),0);
        for(ll i=0;i<K;i++){
            ll a,b;cin>>a>>b; a--;b--;
            v1[a]=1;v2[b]=1;
        }
        vector<ll> temp1,temp2;
        for(ll i=0;i<v1.size();i++)
            if(!v1[i]) temp1.pb(i+1);
        for(ll i=0;i<v2.size();i++) 
            if(!v2[i]) temp2.pb(i+1);
        assert(temp1.size() == temp2.size());
        cout<<N-K<<" ";
        for(ll i=0;i<temp1.size();i++)
            cout<<temp1[i]<<" "<<temp2[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
/* bBELIEVE THAT */
