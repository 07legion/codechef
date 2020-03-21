/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/08/01 20:36:15 by amish                                    */
/*   Updated: 2019/12/04 13:00:38 by amish                                    */
/*                                                                            */
/* ************************************************************************** */

// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma comment(linker, "/stack:200000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")
// #pragma GCC optimize("fast-math", "omit-frame-pointer", "inline")
// #pragma warning (disable: 4996)

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const ll INF = 1e9 + 7; // 1061109567
const ll MOD = 1e9 + 7;

// ll ar[1001][1001];
bool vis[1001][1001];

void func(ll i,ll j, ll n, ll m) {
	if(vis[i][j] == false) {
		vis[i][j] = true;
		if(i - 1 >= 1) {
			if(j <= m && j >= 1) func(i-1,j,n,m);
			if(j+1 <= m && j+1 >= 1) func(i-1,j+1,n,m);
			if(j-1 >= 1 && j-1 <= m) func(i-1,j-1,n,m);
		}
	}
}

int32_t main() {
 
	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n,m; cin>>n>>m;
		ll arr[n+1][m+1];
		for(ll i=1;i<=n;i++) for(ll j=1;j<=m;j++) cin>>arr[i][j];
		map<ll, pair<ll,ll> > mp;
		bool ans[n+1][m+1];
		for(ll i=1;i<=n;i++) {
			for(ll j=1;j<=m;j++) {
				mp[arr[n-i+1][j]] = {i,j};
				vis[i][j] = false;
			}
		}
		// for(ll i=1;i<=n;i++) 
		// 	for(ll j=1;j<=m;j++) 
		// 		cout<<ar[i][j]<<" \n"[j == m];
		// cout<<"\n";
		// for(auto it:mp) {
		// 	cout<<it.first<<" ("<<it.second.first<<", "<<it.second.second<<")\n";
		// }
		for(auto it=mp.rbegin(); it!=mp.rend();it++) {
			ll i = it->second.first, j = it->second.second;
			// cout<<i-1<<" "<<j-1<<"\n";
			if(vis[i][j] == false) {
				ans[i][j] = true;
				func(i, j, n, m);
			}
			else ans[i][j] = false;
		}
		for(ll i=1;i<=n;i++) {
			for(ll j=1;j<=m;j++) {
				cout<<ans[n-i+1][j];
			}
			cout<<"\n";
		}
	}
	return 0;
}

/* I never loose, I either win or I learn */ 
