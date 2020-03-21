#include "bits/stdc++.h"
using namespace std;
using namespace std::chrono;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(int blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.8fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))
typedef long long ll;
typedef long long int lli;
typedef unsigned long long int ulli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;

// Ref:- https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
// Ref:- https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/

vector<ll> factor;

void primeFactors(ll x,ll n)  {  
    ll t = (n*n) - x;
    ll p = 0;
    if(t % 2 == 0) {
        factor.push_back(2);
        while (t % 2 == 0)  
            t = t/2;  
    }
    for (ll i = 3; i * i <= t; i = i + 2)  {  
        if(t % i == 0){    
            factor.push_back(i);
            while (t % i == 0) 
                t = t/i;  
        }
    }  
    if (t > 2) factor.push_back(t); 
    sort(factor.begin(),factor.end());
    while(p < factor.size()) {
        if(factor[p] <= x || factor[p] == 2) {
            factor.erase(factor.begin() + 0);
        }
        else {
            break;
        }
    }
}  

int main() { 
    
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
        ll x = 32768;
        cout<<1<<" "<<x<<endl;
        ll r;cin>>r;
        if(!r) {
            cout<<2<<" "<<2<<endl;
            string str; cin>>str;
            if(str != "Yes") return 0;
            continue;
        }
        factor.clear();
        primeFactors(r,x);
        ll i = 0;
        for(i=0;i<factor.size();i++) 
            if((factor[i] * factor[i]) > factor[factor.size() - 1]) 
                break;
        cout<<1<<" "<<factor[i]<<endl;
        ll r1;cin>>r1;
        ll t = factor[i] * factor[i];
        for(ll j=0;j<factor.size();j++) {
            if((t % factor[j]) == r1){
               cout<<2<<" "<<factor[j]<<endl;
               string str;cin>>str;
               if(str != "Yes") return 0;
               break; 
            }
        }
        factor.clear();
    }
    return 0;
} 
