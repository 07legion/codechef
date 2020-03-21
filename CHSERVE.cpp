/* NOTHING IS IMPOSSIBLE */
#include <bits/stdc++.h> 
#include<assert.h>
typedef long long ll; 
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define debug1(x) cerr << "at line " << __LINE__ << ": " << #x << " = " << (x) << endl
#define debug2(x) cerr << #x << " = " << (x) << endl
#define MAX 100000
const ll MOD=1e9 + 7 ;
const ll INF=1e14;   
#define endl "\n"
#define bool int 
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
using namespace std;
template<typename Args>
void kill(Args args){cout << args << "\n";exit(0);}
typedef double ld;                                                                                           
void precompute(){}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    clock_t zzzx=clock();
    ll T;cin>>T;
    while(T--){
        ll p1,p2,K; cin>>p1>>p2>>K;
        ll sum=p1+p2;
        ll d=sum/K;
        if(d%2!=0){
            cout<<"COOK\n";
        }
        else if(d%2==0){
            cout<<"CHEF\n";
        }
    }    
    double elapsed_time=(double)(clock()-zzzx)/CLOCKS_PER_SEC;
    debug2(elapsed_time);
    return 0;
} 

