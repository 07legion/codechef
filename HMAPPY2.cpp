/*
* @Author: amish19
* @Last Modified time: 2019-02-02 10:37:55
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100009
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define print(v) for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<"\n"
#define d() cout<<"debug\n"
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/* BELIEVE THAT */

/*
Available on geeksforgeeks...
https://www.geeksforgeeks.org/count-total-divisors-b-given-range/
*/

ll shit=0;
ll FindLCM(ll a, ll b) { 
    return (a * b) / __gcd(a, b); 
} 
ll rangeDivisor(ll m, ll n, ll a, ll b) { 
    ll lcm = FindLCM(a, b); 
    ll a_divisor = n / a - (m - 1) / a; 
    ll b_divisor = n / b - (m - 1) / b;
    ll common_divisor = n / lcm - (m - 1) / lcm; 
    shit = common_divisor;
    ll ans = a_divisor + b_divisor - common_divisor; 
    return ans; 
} 
int main(){

    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){ 
        ll N,A,B,K;cin>>N>>A>>B>>K;
        ll haha = rangeDivisor(1,N,A,B)-shit;
        if(haha >= K) cout<<"Win\n";
        else cout<<"Lose\n";
    } 
}
/* BELIEVE THAT */