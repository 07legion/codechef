/*
* @Author:amish19
* @Last Modified time: 2019-01-09 11:26:33
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

int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
    
    ll T;cin>>T;
    while(T--){
        ll ct=0;
        ll n,p;cin>>n>>p;
        vector<ll> v;
        ll t=max(n,p)+1;
        for(ll i=1;i<t;i++){
            for(ll j=1;j<t;j++){
                for(ll k=1;k<t;k++){
                    ll temp = ((((n % i) % j) % k) % n);
                    v.pb(temp);
                }
            }
        }
        ll max = *max_element(v.begin(),v.end());
        for( auto it:v){
            if(it == max) ct++;
        }
        cout<<ct<<"\n";
        //watch(ct);
        //watch(max);
        /*for(ll i=1;i<t;i++){
            for(ll j=1;j<t;j++){
                for(ll k=1;k<t;k++){
                    ll temp = ((((n % i) % j) % k) % n);
                    if(temp == max)
                        cout<<i<<" "<<j<<" "<<k<<"\n";
                }
            }
        }*/
    }
    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}