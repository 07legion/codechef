/*
* @Author: amish19
* @Last Modified time: 2019-02-11 21:56:36
*/

/* BELIEVE THAT */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;

    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
	
	ll T;cin>>T;
	while(T--){
		string str;cin>>str;
		ll N = str.length();
		if(N == 1) {
			cout<<"0\n";
			continue;
		}
		/*map<char,ll> mp;
        for(ll i=0;i<str.length();i++) mp[str[i]]++;
		if(isPrime(N)){
            ll max_f = -1;
            for(auto it:mp)
                if(it.second > max_f) 
                    max_f = it.second;
            assert(N >= max_f);
            cout<<N-max_f<<"\n"; continue;
        }*/
		vector<ll> v(26);
		fill(v.begin(),v.end(),0);
		for(ll i=0;i<str.length();i++) v[str[i] - 'A']++;
		sort(v.begin(),v.end());
		vector<ll> temp,factor;
		for(ll i=1; i<=sqrt(N); i++) { 
	        if (N%i == 0) { 
	            if (N/i == i){ 
	                factor.push_back(i);
	  			}
	            else{
	                factor.push_back(i);factor.push_back(N/i);
	            } 
	        } 
	    } 
		sort(factor.begin(),factor.end());
		for(ll i=1;i<v.size()+1;i++){
			if(!(N%i)){
				ll ans = 0;
				for(ll p=0;p<v.size()-i;p++) ans += v[p];
				//cout<<ans<<" ";
				for(ll p1=v.size()-i;p1<v.size();p1++) ans += llabs((N/i) - v[p1]);
				//cout<<ans<<" "<<"\n\n";
				temp.push_back(ans);
			}
		}
		cout<<*min_element(temp.begin(),temp.end())/2<<"\n";
	}
	return 0;
}
/* BELIEVE THAT */ 