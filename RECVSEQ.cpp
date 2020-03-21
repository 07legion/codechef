/*	MASTER HAS FAILED MANY TIMES THAN BEGINNER 
	HAS EVER TRIED
*/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll T;cin>>T;
	while(T--) {
		ll N;cin>>N;
		vector<ll> v(N);
		for(ll i=0;i<N;i++) cin>>v[i];
		vector<ll> temp;
		for(ll i=1;i<N;i++) temp.push_back(v[i] - v[i-1]);
		if(N == 4) {
			map<ll,ll> mp;
			for(auto it:temp) mp[it]++;
			vector<pair<ll,ll> >freq;
			for(auto it:mp) {
				freq.push_back(make_pair(it.second,it.first));
			}
			sort(freq.begin(),freq.end(),greater<pair<ll,ll> >());
			
			ll d = 0;
			if(freq[0].first > 1) {
				d = freq[0].second;	
				ll a = 0;
				if(v[1] - v[0] == v[2] - v[1]) a = v[0];
				else if(v[3] - v[2] == v[2] - v[1]) a = v[1] - d;
				for(ll i=0;i<N;i++) {
					cout<<a+(i*d)<<" ";
				}
				cout<<"\n";
			}
			else {
				ll a = v[0],b = v[3];
				cout<<a<<" ";
				cout<<a+((b-a)/3)<<" ";
				cout<<a+2*((b-a)/3)<<" ";
				cout<<b<<"\n";
			}
			continue;
		}
		map<ll,ll> mp;
		for(auto it:temp) mp[it]++;
		vector<pair<ll,ll> >freq;
		for(auto it:mp) {
			freq.push_back(make_pair(it.second,it.first));
		}
		sort(freq.begin(),freq.end(),greater<pair<ll,ll> >());
		ll d = freq[0].second;
		vector<ll> vect;
		ll a = v[0];
		// presuming that a is correct;
		for(ll i=0;i<N;i++) {
			vect.push_back(a+(i*d));
		}
		ll ct = 0;
		for(ll i=0;i<N;i++) {
			if(v[i] != vect[i]) 
				ct++;
		}
		if(ct <= 1) {
			for(auto it:vect) cout<<it<<" ";
				cout<<"\n";
			continue;
		}
		a = v[1] - d;
		cout<<a<<" ";
		for(ll i=1;i<N;i++) {
			cout<<(a+(i*d))<<" ";
		}
		cout<<"\n";
	}	

	return 0;
}
/**/