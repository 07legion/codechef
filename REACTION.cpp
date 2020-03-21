/*
  	THE MASTER HAS FAILED MORE TIMES THAN THE BEGINNER
  	HAS EVER TRIED. 
*/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;


int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	ll T;cin>>T;
	while(T--) {	
		ll N,M;cin>>N>>M;
		ll ar[50][50];
		for(ll i=0;i<N;i++) 
			for(ll j=0;j<M;j++) 
				cin>>ar[i][j]; 		
		if(ar[0][0] >= 2 || ar[N-1][M-1] >= 2 || ar[0][M-1] >= 2 || ar[N-1][0] >= 2) {
			cout<<"Unstable\n";
			continue;
		}
		bool flag = true;
		for(ll i=0;i<N;i++) {
			for(ll j=0;j<M;j++) {
				if(i == 0 && j == 0) continue;
				if(i == N-1 && j == M-1) continue;
				if(i == 0 && j == M-1) continue;
				if(i == N-1 && j == 0) continue;				
				if(i == 0) {
					if(ar[i][j] >= 3){
						flag = false;
						break; 
					}
				} 
				if(j == 0) {
					if(ar[i][j] >= 3){
						flag = false;
						break; 
					}
				}
				if(i == N-1) {
					if(ar[i][j] >= 3){
						flag = false;
						break;
					}
				}
				if(j == M-1) {
					if(ar[i][j] >= 3){
						flag = false;
						break;
					}
				}
				if(ar[i][j] >= 4) {
					flag = false;
					break;
				}
			}
			if(flag == false) break;
		}
		if(flag) cout<<"Stable\n";
		else cout<<"Unstable\n";
	}
	return 0;
}
/* NEVER GIVE UP */