/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/07/21 11:39:32 by amish                                    */
/*   Updated: 2019/07/25 21:45:48 by amish                                    */
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

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll T;cin>>T;
    while(T--) {
        string str;cin>>str;
        vector<ll> pre(str.length() + 5,0);
        for(ll i=0;i<str.length();i++) {
            pre[i+1] = pre[i] + (str[i] - '0');
        }
        ll ans = 0;
        for(ll i=1;i<=sqrt(str.length());i++) {
            ll len = ((1ll * i * i) + i);
            for(ll j=1;j<str.length() + 1;j++) {
                ll one = j,two = len + j - 1;
                if(two > str.length() + 1) break;
                if(pre[two] - pre[one - 1] == i) {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
/* 
    I never loose, I either win or I learn. 
*/