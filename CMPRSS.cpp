/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/08/01 20:36:15 by amish                                    */
/*   Updated: 2019/12/01 17:13:21 by amish                                    */
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
		for(ll i=0;i<n;i++) cin>>v[i];
		vector<pair<ll,ll> > vect;
		for(ll i=0;i<n;i++) {
			if(v[i] == -1) break;
			ll j = i; ll t1 = i,t2 = 0;
			while(v[j+1] == v[j] + 1 && j <= n - 2) {
				j++;
			}
			t2 = j;
			i = j;
			vect.push_back(make_pair(t1,t2));
		}
		for(auto it:vect) {
			// cout<<it.first<<" "<<it.second<<"\n";
			if(llabs(it.first - it.second) >= 2) {
				if(it.second == n-1) {
					cout<<v[it.first]<<"..."<<v[it.second];
				}
				else {
					cout<<v[it.first]<<"..."<<v[it.second]<<",";
				}
			}
			else {
				if(it.second == n-1) {
					for(ll i=it.first; i<=it.second-1;i++) cout<<v[i]<<",";
						cout<<v[it.second];
				}
				else {
					for(ll i=it.first; i<=it.second;i++) cout<<v[i]<<",";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}

/* I never loose, I either win or I learn */ 
 