/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/08/01 20:36:15 by amish                                    */
/*   Updated: 2019/12/01 17:35:03 by amish                                    */
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

int32_t main() {
 
	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll tt; cin>>tt;
	while(tt--) {
		ll n; cin>>n;
		vector<ll> v(n);
		set<ll> st;
		for(ll i=0;i<n;i++) {
			cin>>v[i]; --v[i];
			st.insert(v[i]);
		}
		sort(v.begin(), v.end());
		ll ans = 0;
		for(ll i=0;i<n;i++)  {
			if(v[i] == 0) {
				if(st.find(1) != st.end()) continue;
				else {
					st.insert(1); 
					ans++;
				}
			}
			else {
				if(st.find(v[i]+1) != st.end() || st.find(v[i]-1) != st.end()) {
					continue;
				}
				else {
					st.insert(v[i] + 1);
					ans++;
				}
			}
		}
		cout<<ans<<"\n";
		//v[0] && n[n-1];
	}
	return 0;
}

/* I never loose, I either win or I learn */ 
 