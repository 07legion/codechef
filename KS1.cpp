/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/08/10 17:30:33 by amish                                    */
/*   Updated: 2019/08/11 22:43:09 by amish                                    */
/*                                                                            */
/* ************************************************************************** */

// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma comment(linker, "/stack:200000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")
// #pragma GCC optimize("fast-math", "omit-frame-pointer", "inline")
// #pragma warning (disable: 4996)

#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
#define int long long int
#define endl '\n'


#define TRACE
 
#ifdef TRACE
#define trace(x)                 cout << #x << ": " << x << endl
#define trace2(x, y)             cout << #x << ": " << x << " | " << #y << ": " << y << endl
#define trace3(x, y, z)          cout << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl
#define trace4(a, b, c, d)       cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl
#define trace5(a, b, c, d, e)    cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl
#define trace6(a, b, c, d, e, f) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl
 
#else
 
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)
 
#endif

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define for0(n) for(ll i = 0; i < n; i++) 
#define for1(n) for(ll i = 1; i <= n; i++) 
#define fore0(i, a, b) for(ll i = a; i < b; i++) 
#define fore1(i, a, b) for(ll i = a; i <= b; i++) 
#define forr0(n) for(ll i = n-1; i >= 0; i--) 
#define forr1(n) for(ll i = n; i >= 1; i--)
#define forer0(i, a, b) for(ll i = b-1; i>= a; i--)
#define forer1(i, a, b) for(ll i = b; i >= a ; i--)
#define ALL(a) begin(a), end(a)
#define read_array(v,n) for(ll i=0;i<n;i++) cin>>v[i];
#define print(v) for(auto it:v) cout << it << " "; cout << endl

const ll INF = 1000000007; //1061109567
const ll MOD = 1e9 + 7;
map<ll,vector<ll> > amish;
#define no 0

ll debug;

int32_t main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll tt;cin>>tt;
    while(tt--) {
        ll n;cin>>n;
        vector<ll> codechef(n+1,0);
        // break;
        for1(n){
            //cout<<i<<" ";
            cin>>codechef[i];
            //ll a;cin>>a;
            //codechef[i] = a; //[i+1] = a;
            // cout<<codechef[i]<<" ";
        }
        vector<ll> ucantthink(codechef.size(),0); ucantthink[0] = no; ll bhaiBhai = no;
        fore0(i,1,n+1) 
            ucantthink[i] = ucantthink[i-1] ^ codechef[i];
        // for(ll i=0;i<n+1;i++) cout<<ucantthink[i]<<" ";
        fore0(i,0,n+1) {
            if(amish[ucantthink[i]].size() > 0) { ll temp = i-1;
                bhaiBhai += ((amish[ucantthink[i]].size()*(temp)) - amish[ucantthink[i]][amish[ucantthink[i]].size() + temp - i]),amish[ucantthink[i]].push_back(i + amish[ucantthink[i]][amish[ucantthink[i]].size() + temp - i]); continue;
            } amish[ucantthink[i]].push_back(i);
        }
        cout<<bhaiBhai<<"\n"; amish.clear();
    }
    return 0;
}
/* Bless me papa! */ 