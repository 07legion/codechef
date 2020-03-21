#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

int main(){

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

	ll T;cin>>T;
	while(T--){
		ll N;cin>>N;
		vector<ll> v;
		for(ll i=0;i<N;i++){
			string str; cin>>str;
			unordered_set<char> st; 
			st.insert(str.begin(),str.end());
			string str1 = "";
			for(auto it:st) str1 += it;
			ll t = 0;
			for(ll j=0;j<str1.length();j++){
				if(str1[j] == 'a') t += 1;
				else if(str1[j] == 'e') t += 2;
				else if(str1[j] == 'i') t += 4;
				else if(str1[j] == 'o') t += 8;
				else if(str1[j] == 'u') t += 16;
			}
			v.push_back(t);
		}	
		//for(auto it:v) cout<<it<<"\n";
		unordered_map<ll,ll> mp;
		ll ans = 0;
		for(ll i=0;i<v.size();i++) mp[v[i]]++;
		for(ll i=0;i<31;i++){
			for(ll j=i+1;j<=31;j++){
				//cout<<i<<" "<<j<<"\n";
				ll t = (i | j);
				if(t == 31) ans += (mp[i] * mp[j]);	
			}
		}
		ll m = mp[31];
		ans += (m*(m-1))/2;
		cout<<ans<<"\n";
	}
	return 0;
}