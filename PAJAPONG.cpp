/*  
    MATER HAS FAILED MORE TIMES
    THAN BEGINNER HAS EVER TRIED 
*/
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
        ll a,b,c;cin>>a>>b>>c;
        ll t = ((a+b)/c);
        if(t % 2 == 0) cout<<"Chef\n";
        else cout<<"Paja\n";
    }

    return 0;
}
/* BELIEVE THAT */