/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/07/21 11:39:32 by amish                                    */
/*   Updated: 2019/07/26 03:40:41 by amish                                    */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define forn(i,n) for(ll i=0;i<(ll)(n);i++)
#define for1(i,n) for(ll i=1;i<=(ll)(n);i++)
#define debug(x) cout << '>' << #x << ':' << x << endl;
const ll MOD = 1e9 + 7 ;
ll mpow(ll a,ll b,ll p=MOD){  a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const ll N=1e5+20;
vector<ll> a[N];

#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")
#pragma GCC optimize("fast-math", "omit-frame-pointer", "inline")
#pragma warning (disable: 4996)

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
        ll n,k;cin>>n>>k;
        vector<ll> v(n); unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++) cin>>v[i],mp[v[i]]++;
        bool haha = false;
        for(auto it:v) {
            if((!mp[k - it]) || ((k - it == it) && mp[it] == 1)) continue;
            haha = true,cout<<"Yes\n";break;
        }
        if(!haha) cout<<"No\n";
    }

    return 0;
}
/* I never loose, I either win or I learn. */