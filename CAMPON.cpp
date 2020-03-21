/*
* @Author: amish19
* @Last Modified time: 2018-12-24 18:50:14
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 10000
#define pb push_back
#define mp make_pair
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define debug() cout<<"debug\n"
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
    
    ll T;cin>>T;
    while(T--){
        ll D;cin>>D;
        vector<pair<ll,ll> >v1;
        for(ll i=0;i<D;i++){
            ll a,b;cin>>a>>b;
            v1.pb(mp(a,b));
        }
        ll Q;cin>>Q;
        vector<pair<ll,ll> >v2; 
        for(ll i=0;i<Q;i++){    
            ll a,b;cin>>a>>b;
            v2.pb(mp(a,b));
        }
        sort(v1.begin(),v1.end());
        ll sum=0;
        for(ll i=0;i<v2.size();i++){
            for(ll j=0;j<v1.size();j++){
                if(v1[j].first<=v2[i].first){
                    sum+=v1[j].second;
                }
                else break;
            }
            if(sum>=v2[i].second){
                cout<<"Go Camp\n";
            }
            else cout<<"Go Sleep\n";
            //watch(sum);
            sum=0;
        }
        /*for(ll i=0;i<v1.size();i++){
            cout<<v1[i].first<<" "<<v1[i].second<<"\n";
        }
        for(ll i=0;i<v2.size();i++){
            cout<<v2[i].first<<" "<<v2[i].second<<"\n";
        }*/
    }    

    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}
//NOTHING_IS_IMPOSSIBLE