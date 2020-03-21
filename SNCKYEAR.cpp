#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 1000000

int main(){

    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    ll ar[]={2010,2015,2016,2017,2019};
    ll t=sizeof(ar)/sizeof(ar[0]);
    while(T--){
        ll N;cin>>N;
        ll flag=0;
        for(ll i=0;i<t;i++){
            if(ar[i]==N) {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"HOSTED\n"; 
        else cout<<"NOT HOSTED\n";
    }
    return 0;
}