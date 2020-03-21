/*  
    MATER HAS FAILED MORE TIMES
    THAN BEGINNER HAS EVER TRIED 
*/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool cmp(ll a,ll b) {
    return (a > b && (a % 2 == 0));
}
int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    ll T;cin>>T;
    while(T--) {
        ll N;cin>>N;
        vector<ll> v1(N),v2(N);
        for(ll i=0;i<N;i++) cin>>v1[i];
        for(ll i=0;i<N;i++) cin>>v2[i];
        sort(v1.begin(),v1.end(),greater<ll> ());
        sort(v2.begin(),v2.end(),greater<ll> ());
        vector<ll> v1_even,v1_odd;
        vector<ll> v2_even,v2_odd;
        
        for(ll i=0;i<v1.size();i++) {
            if(v1[i] % 2 == 0){
                v1_even.push_back(v1[i]);
            }
            else v1_odd.push_back(v1[i]);
        }
        for(ll i=0;i<v2.size();i++) {
            if(v2[i] % 2 == 0){
                v2_even.push_back(v2[i]);
            }
            else v2_odd.push_back(v2[i]);   
        }
        ll sum = 0,i = 0;
        for(i=0;i<min(v1_even.size(),v2_even.size());i++) {
            sum += (v1_even[i] + v2_even[i])/2;
        }
        vector<ll> temp1,temp2;
        if(v1_even.size() > v2_even.size()) {
            for(ll j=i;j<v1_even.size();j++) 
                temp1.push_back(v1_even[j]);
        }
        else {
            for(ll j=i;j<v2_even.size();j++)
                temp2.push_back(v2_even[j]);
        }

        i = 0;
        for(i=0;i<min(v1_odd.size(),v2_odd.size());i++) {
            sum += (v1_odd[i] + v2_odd[i])/2;
        }

        if(v1_odd.size() > v2_odd.size()) {
            for(ll j=i;j<v1_odd.size();j++) 
                temp1.push_back(v1_odd[j]);
        }
        else {
            for(ll j=i;j<v2_odd.size();j++)
                temp2.push_back(v2_odd[j]);
        }

        for(ll i=0;i<temp1.size();i++)
            sum += ((temp1[i] + temp2[i])/2);
        cout<<sum<<"\n";

        // for(auto it:v1_even) cout<<it<<" ";
        //     cout<<"\n";
        // for(auto it:v2_even) cout<<it<<" ";
        //     cout<<"\n";
        // cout<<"\n";
        // for(auto it:v1_odd) cout<<it<<" ";
        //     cout<<"\n";
        // for(auto it:v2_odd) cout<<it<<" ";
        //     cout<<"\n";

        
    }
    return 0;
}
/* BELIEVE THAT */