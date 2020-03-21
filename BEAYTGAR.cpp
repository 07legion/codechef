/*
* @Author: amish19
* @Date:   2018-09-04 16:23:36
* @Last Modified time: 2018-11-19 13:00:13
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100000
#define pb push_back
#define mp make_pair
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define debug() cout<<"debug\n"
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
//#define NOTHING_IS_IMPOSSIBLE NOTHING_IS_IMPOSSIBLE(){};
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//int NOTHING_IS_IMPOSSIBLE();

int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
        
    ll T;cin>>T;
    while(T--){
        string str;
        cin>>str;
        ll r=0,g=0;
        for(ll i=0;i<str.length();i++){
            if(str[i] == 'G') g++;
            else r++;
        }
        ll ct=0;
        if(r == g) {
            ll N=str.length();
            for(ll i=0;i<str.length()-1;i++){
                if(str[i] == str[(i+1)%N]){
                    ct++;
                }
            }
            if(ct>2) cout<<"no\n";
            else cout<<"yes\n";
        }
        else cout<<"no\n";
    }   

    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}
//NOTHING_IS_IMPOSSIBLE(){}
