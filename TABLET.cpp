#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N,B;cin>>N>>B;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<N;i++){
            ll W,H,P;cin>>W>>H>>P;
            if(P <= B) v.push_back(make_pair(W*H,P));
        }
        sort(v.begin(),v.end()); 
        if(v.size()) cout<<v[v.size()-1].first<<"\n";
        else cout<<"no tablet\n";
    }
    return 0;
}