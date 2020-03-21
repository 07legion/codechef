/*
* @Author:amish19
* @Last Modified time: 2019-01-20 17:41:32
*/

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
#define debug2(x) cerr << #x << " = " << (x) << "\n"
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/* BELIEVE THAT */

bool is_prime(ll n) {
    if (n == 1) {
        return false;
    }
    ll i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}

int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
    
    ll T;cin>>T;
    while(T--){
        ll a,b;cin>>a>>b;
        vector<ll> v;
        v.pb(a);
        ll f1=a,f2=b;
        for(ll i=0;i<19;i++){
            v.pb(f2);
            ll k=f1+f2;
            f1=f2;f2=k;
        }
        ll ans=0;
        for(ll i=0;i<v.size();i++){
            if(is_prime(v[i])) ans++;
        }
        //print(v);
        cout<<ans<<"\n";
    }

    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}