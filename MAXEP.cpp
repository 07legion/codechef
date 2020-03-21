#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll N,c;cin>>N>>c;
    ll s=sqrt(N);
    ll k=s,t=0;
    while(k<N){
        cout<<1<<" "<<k<<endl;
        ll a;cin>>a;
        if(a) {
            cout<<2<<endl;
            break;
        }
        t=k;
        k+=s;
    }
    for(ll i=t+1;i<=k;i++){
        cout<<1<<" "<<i<<endl;
        ll a;cin>>a;
        if(a) {
            cout<<3<<" "<<i<<endl; 
            break;
        }
    }
    return 0;
}