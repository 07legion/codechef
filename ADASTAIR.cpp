#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        vector<int> v;
        for(int i=0;i<a;i++) {
            int x;cin>>x;
            v.push_back(x);
        }
        int sum=0;
        
        if(v[0]>b) sum+=(v[0]-1)/b;
        a--;
        for(int i=0;i<a;i++)
            if(v[i+1]>v[i])
                if(v[i+1]-v[i]>b)
                    sum+=(v[i+1]-v[i]-1)/b;                
        cout<<sum<<"\n";
    }
    return 0;
}