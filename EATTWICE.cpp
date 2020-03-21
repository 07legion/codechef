#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define ever ;;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

 	ll T;cin>>T;
 	while(T--) {
 		ll N,M;cin>>N>>M;
 		vector<pair<ll,ll> > v;
 		for(ll i=0;i<N;i++) {
 			ll a,b;cin>>a>>b;
 			v.push_back(make_pair(b,a));
 		}
 		sort(v.begin(),v.end(),greater<pair<ll,ll> >());
 		ll ct = 1,ans = v[0].first;
 		ll day = v[0].second;
 		for(ll i=1;i<v.size();i++) {
 			if(day == v[i].second) continue;
 			else {
 				ans += v[i].first;
 				ct++;
 				break;
 			}
 		}
 		cout<<ans<<"\n";
 		// for(auto it:v) cout<<it.first<<" "<<it.second<<"\n";
 		// 	cout<<"\n";
 	}
	return 0;
}
/* 	
	MASTER HAS FAILED MORE TIMES
	THAN BEGINNER HAS EVER TRIED
*/