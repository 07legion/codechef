#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(ll arr[], int n, int k, int mid, int c){
	vector<ll> vect(mid,0);
	int i = 0;
	while(k--){
		int j = 0;
		while(i < n && j < mid){
			if(arr[i] / c >= vect[j])
				vect[j++] = arr[i];
			i++;
		}
		if(j < mid) return false;
	}
	return true;
}

int upper(ll arr[], int n, int k, int c){
	int low = 0, high = (n / k) + 1,ans = -19083405;
	while(low <= high){
		int mid = (low + high + 1) / 2;
		if(check(arr,n,k,mid,c)) {
			low = mid + 1;
			ans = max(ans,mid);
		}
		else
		high = mid - 1;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,c;
		cin >> n >> k >> c;
		ll arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		sort(arr,arr+n);
		cout << upper(arr,n,k,c) << "\n";
		
	}
	return 0;
}