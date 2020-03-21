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
 		vector<ll> flavours;
 		for(ll i=0;i<M;i++) {
 			ll a;cin>>a;
 			flavours.push_back(a);
 		}
 		vector<tuple<ll,ll,ll> >v;
 		for(ll i=0;i<N;i++) {
 			ll a,b,c;cin>>a>>b>>c;
 			v.push_back(make_tuple(a,b,c));
 		}
 		vector<ll> final(N,-1);
 		vector<tuple<ll,ll,ll>> vect; 
 		ll ans = 0;
 		for(ll i=0;i<v.size();i++) {
 			if(flavours[get<0> (v[i]) - 1]) {
 				ans += get<1> (v[i]);
 				flavours[get<0> (v[i]) - 1]--;
 				final[i] = get<0> (v[i]);
 			} 
 			else {
 				vect.push_back(v[i]);
 			}
 		}
 		for(ll i=0;i<vect.size();i++) {
 			ans += get<2> (vect[i]);
 		}
 		for(ll i=0;i<final.size();i++) {
 			if(final[i] != -1) continue;
 			for(ll j=0;j<flavours.size();j++) {
 				if(flavours[j]) {
 					final[i] = j+1;
 					flavours[j]--; break;
 				}
 			}
 		}
 		// vector<pair<ll,ll> >fo;
 		// for(ll i=0;i<flavours.size();i++) {
 		// 	if(!flavours[i]) continue;
 		// 	else {
 		// 		fo.push_back(make_pair(i,flavours[i]));
 		// 	}
 		// }
 		// // for(auto it:fo) {
 		// // 	cout<<it.first<<" "<<it.second<<"\n";
 		// // }
 		// ll j = 0;
 		// for(j=0;j<fo.size();j++) {
 		// 	if(fo[j].second) break;
 		// }
 		// for(ll i=0;i<N;i++) {
 		// 	if(final[i] != -1) continue;
 		// 	if(fo[j].second) {
 		// 		final[i] = fo[j].first + 1;
 		// 		fo[j].second--;	
 		// 	}
 		// 	else {
 		// 		while(fo[j].second == 0) {
 		// 			j++;
 		// 		}
 		// 		final[i] = fo[j].first;
			// 	fo[j].second--;
 		// 	}
 		// }
 		cout<<ans<<"\n";
 		for(auto it:final) cout<<it<<" ";
 			cout<<"\n";
 	}
	return 0;
}
/* 	
	MASTER HAS FAILED MORE TIMES
	THAN BEGINNER HAS EVER TRIED
*/