/*
* @Author:amish19
* @Last Modified time: 2019-01-09 11:00:57
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
    
    ll N,M;cin>>N>>M;
    vector<ll> v1,v2;
    for(ll i=0;i<N;i++){
        ll x;cin>>x;v1.pb(x);
    }
    for(ll i=0;i<M;i++){
        ll x;cin>>x;v2.pb(x);
    }   
    ll max=*max_element(v2.begin(),v2.end());
    ll min=*min_element(v1.begin(),v1.end());
    ll maxi,mini;
    for(ll i=0;i<v1.size();i++){
        if(v1[i] == min) {
            mini=i;break;
        }
    }
    for(ll i=0;i<v2.size();i++){
        if(max == v2[i]){
            maxi=i;break;
        }
    }
    for(ll i=0;i<v2.size();i++){
        cout<<mini<<" "<<i<<"\n";
    }
    for(ll i=0;i<v1.size();i++){
        if(v1[i] == v1[mini]) continue;
        cout<<i<<" "<<maxi<<"\n";
    }
    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}