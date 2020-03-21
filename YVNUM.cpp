/*
* @Author: amish19
* @Last Modified time: 2018-12-27 17:26:07
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    
    ll T;cin>>T;
    while(T--){
        string str;cin>>str;
        ll N,p1=1,p2=1;N=str.length();
        for(ll i=0;i<N;i++) p1*=10,p1%=MOD;
        for(ll i=0;i<N-1;i++) p2*=10,p2%=MOD;
        
        ll temp=0;
        for(ll i=0;i<str.length();i++){
            temp*=10;temp%=MOD;
            temp+=str[i]-'0';temp%=MOD;
        }
        ll ans=temp;
        for(ll i=0;i<N-1;i++){
            temp-=(str[i]-'0')*p2;temp%=MOD;
            //watch(temp);
            temp+=MOD;temp%=MOD;
            //watch("HEY");
            //watch(temp);
            temp*=10;temp%=MOD;
            temp+=str[i]-'0';temp%=MOD;
            ans*=p1; ans%=MOD;
            ans+=temp; ans%=MOD;
        }
        cout<<ans%MOD<<"\n";
    }
    return 0;
}