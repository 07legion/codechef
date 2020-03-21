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
        ll N;cin>>N;
        vector<ll> v(N);
        for(ll i=0;i<N;i++) cin>>v[i];
        sort(v.begin(),v.end());
        if(v[0] != 0) cout<<"0\n";
        else{
            vector<ll> temp;
            for(ll i=0;i<v.size();i++){
                if(temp.size() >= v[i]){
                    temp.push_back(i);
                }
            }
            cout<<temp.size()<<"\n";
        }
    }
    return 0;
}