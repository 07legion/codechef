                                     /* DON'T QUIT */
#include <bits/stdc++.h> 
#include<assert.h>
typedef long long ll; 
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define ford(i, n) for (ll i = (ll)(n) - 1; i >= 0; --i)
//#define fori(i, a, b) for (ll i = (ll)(a); i <= (ll)(b); ++i)
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define debug1(x) cerr << "at line " << __LINE__ << ": " << #x << " = " << (x) << endl
#define debug2(x) cerr << #x << " = " << (x) << endl
#define MAX 100000
#define endl "\n"
using namespace std;
template<typename Args>
void kill(Args args){cout << args << "\n";exit(0);}
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD=1e9 + 7 ;
const ll INF=1e14;                                                                                           
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
//#define CLASSNAME 
//class CLASSNAME{ public:};
void precompute(){}
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t zzzx=clock();
    ll T;cin>>T;
    while(T--){
        ll N,Si,Ji,ct=0;cin>>N;
        fori(i,0,N){
            cin>>Si>>Ji;
            if((Ji-Si)>5) ct++;
        }
        cout<<ct<<"\n";
    } 
    double elapsed_time=(double)(clock()-zzzx)/CLOCKS_PER_SEC;
    debug2(elapsed_time);
    return 0 ;
} 
