#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {

	fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
		
	while(1) {
		int n; cin>>n;
		if(!n) break;
		vector<int> v(n); 
		for(int i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		vector<int> temp;
		int ans = 0;
		for(int i=0;i<v.size();i++) {
			for(int j=i+1;j<v.size();j++) {
				int sum = v[i] + v[j];
				int index = upper_bound(v.begin(),v.end(),sum) - v.begin();
				if(index != v.size())
					ans += llabs(v.size() - index);				
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
