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
        ll N;cin>>N;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<N;i++){
            ll a,b;cin>>a>>b;v.pb(mp(a,b));
        }       
        ll ri,rj;cin>>ri>>rj;
        ll lmn=0;
        for(ll i=0;i<v.size();i++){
            if((llabs(ri-v[i].first)==1 && llabs(rj-v[i].second==2)) || (llabs(ri-v[i].first==2) || llabs(rj-v[i].second)==1)){    
                lmn=1; break;
            }
        }
        if(lmn==0) cout<<"NO\n";
        else if(lmn==1) {
            ll flag=0;
            for(ll i=0;i<v.size();i++){
                if((llabs(ri-1-v[i].first)==1 && llabs(rj-v[i].second==2)) || (llabs(ri-1-v[i].first==2) || llabs(rj-v[i].second)==1)){    
                    flag=1; break;
                }       
                if((llabs(ri+1-v[i].first)==1 && llabs(rj-v[i].second==2)) || (llabs(ri+1-v[i].first==2) || llabs(rj-v[i].second)==1)){    
                    flag=1; break;
                }
                if((llabs(ri-v[i].first)==1 && llabs(rj-1-v[i].second==2)) || (llabs(ri-v[i].first==2) || llabs(rj-1-v[i].second)==1)){    
                    flag=1; break;
                }
                if((llabs(ri-v[i].first)==1 && llabs(rj+1-v[i].second==2)) || (llabs(ri-v[i].first==2) || llabs(rj+1-v[i].second)==1)){    
                    flag=1; break;
                }
                if((llabs(ri+1-v[i].first)==1 && llabs(rj+1-v[i].second==2)) || (llabs(ri+1-v[i].first==2) || llabs(rj+1-v[i].second)==1)){    
                    flag=1; break;
                }
                if((llabs(ri-1-v[i].first)==1 && llabs(rj+1-v[i].second==2)) || (llabs(ri-1-v[i].first==2) || llabs(rj+1-v[i].second)==1)){    
                    flag=1; break;
                }
                if((llabs(ri-1-v[i].first)==1 && llabs(rj-1-v[i].second==2)) || (llabs(ri-1-v[i].first==2) || llabs(rj-1-v[i].second)==1)){    
                    flag=1; break;
                }
                if((llabs(ri+1-v[i].first)==1 && llabs(rj-1-v[i].second==2)) || (llabs(ri+1-v[i].first==2) || llabs(rj-1-v[i].second)==1)){    
                    flag=1; break;
                }
            }
            if(flag==1) cout<<"YES\n";
            else if(flag==0) cout<<"NO\n";
        }
    }
    
    return 0;
}