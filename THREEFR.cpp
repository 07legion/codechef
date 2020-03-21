#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 
#define mp make_pair 
int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    
    ll T;cin>>T;
    while(T--){
        ll x,y,z;cin>>x>>y>>z;
        if(llabs(x-y)==z || x+y==z) cout<<"yes\n";
        else cout<<"no\n";       
    }
    return 0;
}