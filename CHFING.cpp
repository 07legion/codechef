#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef long long int lli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
const ll MOD = 1e9 + 7;
#define die return 0;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() { 

	fastio;
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	lli T;cin>>T;
	while(T--) {
		lli N,K;cin>>N>>K;
		if(N == K) {
			cout<<(K-1) % MOD<<"\n"; 
			continue;
		}
		lli n1 = K,n2 = N + K - 1;
	 	lli a = K - N;
	 	lli d = (1 - N);
	 	lli n = ((K - 1)/(N - 1));
	 	lli l = a + (n - 1)*d;
        lli temp = a+l;
        if(n % 2 ==0) n /= 2;
        else temp /= 2;
        temp = (((temp) % MOD) * ((n) % MOD)) % MOD;
        cout<<(K - 1 + temp) % MOD<<"\n";
	}
	return 0;
} 