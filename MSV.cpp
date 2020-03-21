#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

map<int,int> mp,mpp; int ans = 0;

void func(int n) { 
    ans = max(ans,mp[n]);
    for (int i=1;i<=(sqrt(n));i++) { 
        if((n%i) == 0){
            if((n/i) == i) {
                if(mpp[i] > 0)
                    mp[i]++;
            }
            else {
                if(mpp[i] > 0) 
                    mp[i]++;
                if(mpp[(n/i)] > 0) 
                    mp[(n/i)]++;
            }
        }
    }
}

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int tt; cin>>tt;
    while(tt--) {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) 
            cin>>v[i],mpp[v[i]]++;

        for(int i=0;i<n;i++) {
            func(v[i]);
            if(mpp[v[i]] > 0) {
                mpp[v[i]]--;
            } 
        }
        cout<<ans<<"\n"; ans = 0;
        mp.clear(); mpp.clear();
    }
    return 0;
}