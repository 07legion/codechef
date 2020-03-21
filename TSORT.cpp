#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll power(ll a, ll b) {
	if(a == 1 || b == 0) return 1;
	else if(b == 1) return a;
	ll temp = power(a,b/2);
	if(b % 2) return temp*temp*a;
	else return temp*temp; 
}

int32_t main() {

	fastio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 

	ll n; cin>>n;
	vector<ll> v(n); for(ll i=0;i<n;i++) cin>>v[i];
	sort(v.begin(), v.end());
	for(auto it:v) cout<<it<<"\n";
	return 0;

	ll tt; cin>>tt;
	while(tt--) {
		ll n,m; cin>>n>>m;
		string str; cin>>str;
		// reverse(str.begin(), str.end());
		ll ct = 0;
		for(ll i=0;i<str.length();i++) {
			if(str[i] == '_') ct++;
		}
		vector<string> v;
		for(ll i=0;i<power(2,ct);i++) {
			string s = "";
			ll temp = i;
			while(temp) {
				if(temp%2) s += '1';
				else s += '0';
				temp /= 2;
			}
			while(s.length() != ct) s += '0';
			reverse(s.begin(), s.end());
			v.push_back(s);
		}
		vector<string> vect(v.size(), str);
		ll t = 0;
		for(ll i=0;i<str.length();i++) {
			if(str[i] != '_') continue;
			for(ll j=0;j<vect.size();j++) {
				vect[j][i] = v[j][t];
			} ++t;
		}
		// for(auto it:vect) cout<<it<<" "<<"\n";	
		ll cnt = 0;
		for(ll i=0;i<vect.size();i++) {
			ll temp = 0, haha = 1;
			for(ll j=vect[i].length()-1;j>=0;j--) {
				if(vect[i][j] == '1')  temp += haha; 
				haha *= 2; haha %= m;
			}
			if(temp % m == 0) cnt++;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
