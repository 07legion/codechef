#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100000
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug1(x) cerr << "At line " << __LINE__ << ": " << #x << " = " << (x) << endl


int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    //clock_t amish=clock();

    ll T;cin>>T;
    while(T--){
        ll N;cin>>N;
        ll t1=1,t2=2;
        vector<pair<ll,ll> >v;
        for(ll i=1;i<=25;i++){
            ll p=t2-t1;
            v.pb(mp(t2-t1,pow(2,i)));
            t2=pow(2,i);t1=p;
        }
        cout<<v[N-1].first<<" "<<v[N-1].second<<" ";
    }
    //double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    //debug1(Elapsed_time);

    return 0;
}