/*
* @Author: amish19
* @Last Modified time: 2019-02-03 16:28:04
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
        ll N;cin>>N;
        vector<ll> v(N);
        for(ll i=0;i<N;i++) cin>>v[i];
        sort(v.begin(),v.end());
        /*if(N <= 2){
            cout<<*max_element(v.begin(),v.end())<<"\n";
            continue;
        }     
        bool flag = true;
        for(ll i=0;i<v.size();i++){
            if(v[i] != v[i+1]){
                flag = false; 
                break;   
            }
        }
        if(flag) {
            cout<<v[0]<<"\n"; 
            continue;
        }*/
        ll silly = 0;
        ll so_silly = accumulate(v.begin(),v.end(),silly) - v.size() + 1;
        assert(so_silly > 0);
        cout<<so_silly<<"\n";
    } 
}
/* BELIEVE THAT */