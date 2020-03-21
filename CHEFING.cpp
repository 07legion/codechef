/*
* @Author: amish19
* @Last Modified time: 2019-02-02 11:28:36
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
        vector<ll> temp(26);
        fill(temp.begin(),temp.end(),0);
        for(ll i=0;i<N;i++){
            string str;cin>>str;
            vector<ll> track(26);
            fill(track.begin(),track.end(),0);
            for(ll j=0;j<str.length();j++){
                if(track[str[j]-'a'] == 0){
                    temp[str[j]-'a']++;
                    track[str[j]-'a']++;
                }
            }
            fill(track.begin(),track.end(),0);
        }
        //print(temp);
        ll ans=0;
        for(ll i=0;i<temp.size();i++){
            if(temp[i] == N) ans++;
        }
        cout<<ans<<"\n";
    } 
}
/* BELIEVE THAT */