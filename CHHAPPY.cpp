#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 
#define mp make_pair 

ll binarySearch(vector<ll> arr, ll l, ll r, ll x) { 
   if (r >= l) { 
        ll mid = l + (r - l)/2; 
        if (arr[mid] == x)   
            return mid; 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
        return binarySearch(arr, mid+1, r, x); 
   } 
   return -1; 
} 
vector<size_t> searchList(const vector<ll>& theArray, ll findFor) { 
    vector<size_t> indexes;
    for (size_t i = 0; i < theArray.size(); ++i){
        if (theArray[i] == findFor){
            indexes.push_back(i + 1);
        }
    }
    return {indexes.begin(),indexes.end()};
}

int main(){
    
    //fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        ll N;cin>>N;
        map<ll,ll> mp;
        vector<ll> v;
        vector<ll> repeating;
        for(ll i=0;i<N;i++){
            ll x;cin>>x;    
            v.pb(x);
            mp[x]++;
        }
        for(auto i:mp) 
            if(i.second>=2)
                repeating.pb(i.first);
        vector<ll> v1;
        v1.assign(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        bool flag=false;
        vector<ll> indices; 
        ll ct;
        for(ll i=0;i<repeating.size();i++){
            auto indices=searchList(v,repeating[i]);
            ct=0;
            if(indices.empty()) continue;
            else{
                for(ll j=0;j<indices.size();j++){
                    if(binary_search(v1.begin(),v1.end(),indices[j])){
                        ct++;
                    }
                    if(ct>=2){
                        flag=true;
                        cout<<"Truly Happy\n";
                        goto END;
                    }
                }
            }
        }
        END:;
        if(!flag) cout<<"Poor Chef\n";
    }
    return 0;
}
