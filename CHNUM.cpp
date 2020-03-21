/*BELIEVE THAT*/
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
        //vector<ll> v;
        ll p = 0,n = 0;
        for(ll i=0;i<N;i++){
            ll a;cin>>a;
            if(a >= 0) p++;
            else n++;
        }
        if(n == 0) {
            cout<<p<<" "<<p<<"\n"; continue;
        }
        if(p == 0) {
            cout<<n<<" "<<n<<"\n"; continue;
        }
        cout<<max(n,p)<<" "<<min(n,p)<<"\n";
    }
    return 0;
}
/*BELIEVE THAT*/