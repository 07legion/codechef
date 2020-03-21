/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/07/21 11:39:32 by amish                                    */
/*   Updated: 2019/07/26 17:48:40 by amish                                    */
/*                                                                            */
/* ************************************************************************** */


#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")
#pragma GCC optimize("fast-math", "omit-frame-pointer", "inline")
#pragma warning (disable: 4996)

#include "bits/stdc++.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
const ll INF = 2e9;

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll tt;cin>>tt;
    while(tt--) {
        ll n;cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<ll> temp(n); ll haha = 0;
        for(ll i=v.size()-1;i>=0;i--) {
            if(v[i] % 2) 
                haha++;
            temp[i] = haha;
        }
        ll ans = 0;
        for(ll i=0;i<v.size();i++) 
            if(!(v[i] % 2)) ans += temp[i];
        cout<<ans<<"\n";
    }

    return 0;
}
/* 
    I never loose, I either win or I learn. 
*/