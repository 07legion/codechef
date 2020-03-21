/*
* @Author: amish19
* @Last Modified time: 2018-12-09 15:05:28
*/


/* Nothing is Impossible */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100000
#define pb push_back
#define mp make_pair
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
        
    ll T;cin>>T;
    while(T--){
        ll t=1;
        ll n;cin>>n;
        vector<ll> v;
        while(n--){
            cout<<1<<" ";
            for(ll i=0;i<3;i++) cout<<t<<" ";
            cout<<endl;
            ll a;cin>>a;v.pb(a);
            cout<<endl;
            t++;
        }
        cout<<2<<" ";
        for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
            cout<<endl;
        ll temp; cin>>temp;
    }   

    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}
