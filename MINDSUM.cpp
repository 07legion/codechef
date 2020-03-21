#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 

ll digitsum(ll n) {  
   ll sum = 0; 
   while(n != 0) { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
} 

void minop(ll N,ll D){
    queue<pair<ll,ll> >q;
    q.push({N,0});
    ll i=0;
    map<ll,ll> m;
    while((i<1e5) && (!q.empty())){
        auto t=q.front();
        q.pop();
        if(t.first<10){
            if(m.find(t.first)!=m.end()) continue;
            else m[t.first]=t.second;
        }
        else q.push({digitsum(t.first),t.second+1});
        q.push({t.first+D,t.second+1});
        i++;
    }
    cout<<m.begin()->first<<" "<<m.begin()->second<<"\n";
}

int main(){
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    ll T;cin>>T;
    while(T--){
        ll N,D;cin>>N>>D;
        minop(N,D);//<<"\n";
    }
    return 0;
}