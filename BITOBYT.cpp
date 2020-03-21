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
// function from geeksforgeeks
ll  multiply(ll  x, ll  res[], ll  res_size) { 
    ll  carry = 0; 
    for (ll  i = 0; i < res_size; i++) { 
        ll  prod = res[i] * x + carry; 
        res[i] = prod % 10; 
        carry = prod / 10; 
    } 
    while (carry) { 
        res[res_size] = carry % 10; 
        carry = carry / 10; 
        res_size++; 
    } 
    return res_size; 
} 
void power(ll  x, ll  n,ll var) { 
    ll  res[MAX]; 
    ll  res_size = 0; 
    ll  temp = x; 
    while (temp != 0) { 
        res[res_size++] = temp % 10; 
        temp = temp / 10; 
    } 
    for (ll  i = 2; i <= n; i++) 
        res_size = multiply(x, res, res_size); 

    if(var==1){ 
        cout<<"0 ";
        if(n==0) cout<<1;
        else{
            for (ll  i = res_size - 1; i >= 0; i--) 
                cout << res[i];
            }
        cout<<" 0\n";
    }
    else if(var==2){ 
        cout<<"0 0 ";
        if(n==0) cout<<1; 
        else{
            for (ll  i = res_size - 1; i >= 0; i--) 
                cout << res[i];
        }
        cout<<"\n"; 
    }
    else if(var==3){ 
        if(n==0) cout<<1;
        else{
            for (ll  i = res_size - 1; i >= 0; i--) 
                cout << res[i];
            }
        cout<<" 0 0\n";
    } 
} 

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
        ll N;cin>>N;
        N--;
        ll d=N/26;
        ll m=N%26; 
        if(m>=2 && m<=9){
            //cout<<"0 "<<pow(2,d)<<" 0\n";
            power(2,d,1);
        }
        else if(m>=10 && m<=25){
            //cout<<"0 0 "<<pow(2,d)<<"\n";
            power(2,d,2);
        }
        else if(m==0 || m==1){
            //cout<<pow(2,d)<<" 0 0\n";
            power(2,d,3);
        }
    }    
    double elapsed_time=(double)(clock()-zzzx)/CLOCKS_PER_SEC;
    debug2(elapsed_time);
    return 0;
} 