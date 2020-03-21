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
 		ll N;cin>>N;
 		string str1,str2;cin>>str1>>str2;
 		if(str1 == str2) {
 			cout<<N<<"\n"; 
 			continue;
 		}
 		ll ans = 0;
 		for(ll i=0;i<N;i++) {
 			if(str2[i] == 'N') continue;
 			if(str1[i] != str2[i]) {
 				i++; continue;
 			}
 			if(str1[i] == str2[i]) {
 				ans++;
 			}
 		}
 		cout<<ans<<"\n";
 	}
	return 0;
}
/* 	
	MASTER HAS FAILED MORE TIMES
	THAN BEGINNER HAS EVER TRIED
*/