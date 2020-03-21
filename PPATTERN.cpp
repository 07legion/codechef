/*
* @Author: amish19
* @Last Modified time: 2019-01-01 17:55:18
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 100000
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define print(v) for(ll i=0;i<v.size();i++) cout<<v[i]<<" "; 
#define debug() cout<<"debug\n"
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/* NOTHING IS IMPOSSIBLE 
   WA MAKES YOU STRONGER */
int main(){
    
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    clock_t amish=clock();
        
    ll T;cin>>T;
    while(T--){
        int n; cin >> n;
        int ar[n][n] = {0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ar[i][j] = 0;
            }
        }
        ar[0][0] = 1;
        int t=n; 
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(i==n-1 && j==n-1) ar[i][j]=(n*n);
                else if(i==0) ar[i][j]=ar[i][j-1] + j;
                else if(j==n-1) ar[i][j]=ar[i-1][j]+t,t--;
                else ar[i][j]=ar[i-1][j+1]+1;
            }
        }
        for(ll i=0;i<n;i++) if(i!=0) ar[i][0]=ar[i-1][0]+1+i;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<"\n";
        }
    }   

    double Elapsed_time=(double)(clock()-amish)/CLOCKS_PER_SEC;
    debug2(Elapsed_time);
    return 0;
}   