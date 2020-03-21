/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/08/01 20:36:15 by amish                                    */
/*   Updated: 2019/12/01 23:37:12 by amish                                    */
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
		ll n,k; cin>>n>>k;
		string str; cin>>str;
		vector<ll> freqL(n, 0), freqR(n, 0);
		for(ll i=1;i<n;i++) {
			if(str[i - 1] == '0') freqL[i] = 0;
			else {
				freqL[i] = freqL[i - 1] + 1;
			}
		}
		for(ll i = n - 2; i >= 0; i--) {
			if(str[i + 1] == '0') continue;
			else {
				freqR[i] = freqR[i+1] + 1;
			}
		}
		// for(auto it:freqL) cout<<it<<" "; cout<<"\n";
		// 	for(auto it:freqR) cout<<it<<" ";
		// 		cout<<"\n";
		ll temp = -INF;
		for(ll i=0;i<n;i++) {
			ll j1 = i, j2 = i + k - 1;
			if(j2 > n - 1) break;
			if(j1 >= 0 && j2 <= n - 1) {
				temp = max(temp, k + freqL[j1] + freqR[j2]);
			}
			else if(j2 <= n - 1) {
				temp = max(temp, k + freqR[j2]);
			}
			else if(j1 >= 0) {
				temp = max(temp, k + freqL[j1]);
			}
		}
		cout<<temp<<"\n";
	}
	return 0;
}

/* I never loose, I either win or I learn */ 
 