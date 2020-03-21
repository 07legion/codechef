/*
* @Author: amish19
* @Last Modified time: 2019-02-02 11:54:08
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
        vector<ll> attack,defense;
        for(ll i=0;i<N;i++){
            ll x;cin>>x;attack.pb(x);
        }
        for(ll i=0;i<N;i++){
            ll x;cin>>x;defense.pb(x);
        }
        vector<ll> temp(N);
        for(ll i=0;i<N;i++){
            if(i == 0){
                if((attack[N-1] + attack[1]) < defense[i])
                    temp[i] = 1;//defense[i] - (attack[N-1] + attack[1]);
                else temp[i] = -1;
            }
            else if(i == N-1){
                if((attack[N-2] + attack[0]) < defense[i])
                    temp[i] = 1;//defense[i] - (attack[N-2] + attack[i]);
                else temp[i] = -1;
            }
            else{
                if((attack[i-1] + attack[i+1]) < defense[i])
                    temp[i] = 1;//defense[i] - (attack[i-1] + attack[i+1]);
                else temp[i] = -1;
            }
        }
        vector<ll> ans;
        for(ll i=0;i<temp.size();i++){
            if(temp[i]!=-1)
                ans.pb(defense[i]);
        }
        if(ans.size()) cout<<*max_element(ans.begin(),ans.end())<<"\n";
        else cout<<-1<<"\n";
    } 
}
/* BELIEVE THAT */