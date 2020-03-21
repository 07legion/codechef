#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
// #define int long long int;
const ll INF = 0x3f3f3f3f; //1061109567
const ll MOD = 1e9 + 7;
ll debug;

int main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n; cin>>n;
		queue<ll> q; q.push(n);
		bool flag = false;
		set<ll> st;
		// cout<<n<<"\n";
		while(!q.empty()) {
			ll t = q.front();
			if(t == 10 || t == 1 || t == 20) {
				flag = true;
				break;
			}
			st.insert(t);
			q.pop();
			if(t % 20 == 0){
				// if(!vis[t/20])
				if(st.find(t/20) == st.end())
					q.push((t/20));
			} 
			if(t % 10 == 0) {
				// if(!vis[t/10])
				if(st.find(t/10) == st.end())
					q.push((t/10));
			}
			// debug++;
		}
		if(flag) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}