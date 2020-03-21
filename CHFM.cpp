/*  
    MASTER HAS FAILED MORE TIMES 
    THAN BEGINNNER HAS EVER TRIED
*/

#include "bits/stdc++.h"
using namespace std; 
using namespace chrono;
typedef long long ll;
typedef long long int lli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(ll blockTime = 0;(blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.8fs\n", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

int main() {
    
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
    	ll N;cin>>N;
		vector<pair<ll,ll> > v;
		for(ll i=0;i<N;i++) {
			ll a;cin>>a;
			v.push_back(make_pair(a,i+1));
		}
		sort(v.begin(),v.end());
		double sum = 0;
		for(ll i=0;i<N;i++) sum += v[i].first;
		double mean = double(sum)/double(N),temp = 0;
		//cout<<mean<<"\n";
		bool flag = false;
		for(ll i=0;i<v.size();i++) {
			if((double(sum - v[i].first)/double(N-1)) == mean) {
				flag = true; temp = v[i].second;
				break;
			}
		}
		if(flag) cout<<temp<<"\n";
		else cout<<"Impossible\n";
    }
}

/* PAPA */