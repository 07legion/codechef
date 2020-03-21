/*
* @Author:amish19
* @Last Modified time: 2019-01-09 10:26:06
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
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define watch2(x,y) cout << (#x) << " is " << (x) << endl << (#y) << " is "<< (y) <<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/* BELIEVE THAT */

int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
    
    ll T;cin>>T;
    while(T--){
        ll N,a,b;cin>>N>>a>>b;
        vector<ll> v;
        for(ll i=0;i<N;i++){
            ll x;cin>>x;v.pb(x);
        }
        ll bob=0,alice=0,common=0;
        for(ll i=0;i<v.size();i++){
            if(v[i]%a == 0 && v[i]%b == 0) common++;
            else if(v[i]%a == 0) bob++;
            else if(v[i]%b == 0) alice++;
        }
        if(common == 0){
            if(alice>bob) cout<<"ALICE\n";
            else if(alice<bob) cout<<"BOB\n";
            else if(alice == bob) cout<<"ALICE\n";
            continue;
        }
        if(alice+common > bob+common) cout<<"ALICE\n";
        else {
            if(alice <= bob){
                cout<<"BOB\n";
            }
            else if(alice>bob) cout<<"ALICE\n";
        }
    }
    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}