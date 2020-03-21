/*
* @Author: amish19
* @Last Modified time: 2019-01-05 16:20:21
*/

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
typedef long long ll;
const ll MOD=1e9 + 7;
const ll INF=1e14;
#define MAX 10000
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define fore(i,a,b) for(ll i=a;i<=b;i++)
#define print(v) for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n" 
#define d() cout<<"debug\n"
#define debug2(x) cerr << #x << " = " << (x) << endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    ll T;cin>>T;
    cin.ignore();
    while(T--){

        string str;
        getline(cin,str);
        vector<string> v; 
        string temp="";
        for(ll i=0;i<str.length();i++){
            if(str[i]!=' ') temp+=str[i];  
            else if(str[i] == ' ') {
                v.pb(temp);
                temp = "";
            }
        } 
        //cout<<temp<<"\n";
        v.pb(temp);
        bool flag = false;
        for(ll i=0;i<v.size();i++){
            if(v[i] == "not") {
                flag = true; break;
            }
        }
        if(flag) cout<<"Real Fancy\n";
        else cout<<"regularly fancy\n";
                        //Real Fancy
                    //regularly fancy
    }
    /*ll T;cin>>T;
    cin.ignore();
    while(T--){

        string str;
        getline(cin,str);
        if(str.length() <= 2){
            cout<<"regularly fancy\n";
        }
        else if(str.length()==3){
            if(str== "not") cout<<"Real Fancy\n";
            else cout<<"regularly fancy\n";
        }
        else if(str.length()==4){
            if((str[0] == ' ' && str[1] == 'n' && str[2] == 'o' && str[3] == 't') || (str[0] == 'n' && str[1] == 'o' && str[2] == 't' && str[3] == ' ')){
                cout<<"Real Fancy\n";
                continue;
            }
        }
        else{
            bool flag=false;
            for(ll i=1;i<str.length()-3;i++){
                if(str[i-1] == ' ' && str[i] == 'n' && str[i+1] == 'o' && str[i+2] == 't' && (i+3==str.length())){
                    flag=true; 
                    break;
                }
                else if(str[i-1] == ' ' && str[i] == 'n' && str[i+1] == 'o' && str[i+2] == 't' && str[i+3] == ' '){
                    flag=true;
                    break;
                }
            }
            if(str[0] = 'n' && str[1] == 'o' && str[2] == 't' && str[3] == ' ') flag = true;
            for(ll i=str.length()-1;i>=0;i--){
                if(str[i]=='t' && str[i-1]=='o' && str[i-2]=='n' && str[i-3]==' '){
                    if((i+1)!=str.length()){
                        if(str[i+1] == ' ' || ((i+1) == (str.length()-1))){
                            flag=true;  break;
                        }
                    }
                } 
            }
            if(flag) cout<<"Real Fancy\n";
            else cout<<"regularly fancy\n";
        }
    }*/
    return 0;
}