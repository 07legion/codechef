#include "bits/stdc++.h"
using namespace std; 
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
        ll n;cin>>n;
        string str1,str2;cin>>str1>>str2;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1 == str2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

