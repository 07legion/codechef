/*
* @Author: amish19
* @Date:   2018-11-18 23:25:13
* @Last Modified time: 2018-11-18 23:27:20
*/

/* Nothing is Impossible */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100000
#define pb push_back
#define mp make_pair
#define debug() cout<<"Debug\n"
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    
    int T;cin>>T;
    while(T--){
        
        int tr;cin>>tr;
        set<int> ramt;
        for(int i=0;i<tr;i++) {

            int x;cin>>x;
            ramt.insert(x);
        }
        
        int dr;cin>>dr;
        set<int> ramd;
        for(int i=0;i<dr;i++) {
            int x;cin>>x;
            ramd.insert(x);
        }

        int ts;cin>>ts;
        set<int> shamt;
        for(int i=0;i<ts;i++) {
            int x;cin>>x;
            shamt.insert(x);
        }

        int ds;cin>>ds;
        set<int> shamd;
        for(int i=0;i<ds;i++) {
            int x;cin>>x;
            shamd.insert(x);
        }
        for(auto it:shamt){
            for(auto it1:ramt){
                if(ramt.find(it) == ramt.end()){
                    cout<<"no\n";
                    goto END;
                }
            }
        }
        for(auto it:shamd){
            for(auto it2:ramd){
                //watch(it2);
                if(ramd.find(it) == ramd.end()){
                    cout<<"no\n";
                    goto END;
                }
            }
        }

        cout<<"yes\n";
        END:;
    }
    return 0;
}