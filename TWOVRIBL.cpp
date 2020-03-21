/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   codechef.cpp                                                             */
/*                                                                            */
/*   By: amish <amish19>                                                      */
/*                                                                            */
/*   Created: 2019/07/21 11:39:32 by amish                                    */
/*   Updated: 2019/07/25 10:56:14 by amish                                    */
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
    
    vector<ll> v;
    ll x = 0,y = 0;
    while(x < INF) {
        x = sqrtl(y);
        while(x*x <= y) x++;
        y += (x*x);
        v.push_back(x);
    }
    ll t;cin>>t;
    while(t--) {
        ll n;cin>>n;
        cout<<upper_bound(v.begin(),v.end(),n) - v.begin()<<"\n";
    }
    // for(auto it:v) cout<<it<<" ";
    //     cout<<"\n";
    return 0;
}
/* 
    I never loose, I either win or I learn. 
*/