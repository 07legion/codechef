/*BELIEVE THAT*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    ll T;cin>>T;
    while(T--){
        string str;cin>>str; char ch;cin>>ch;
        ll k = str.length();
        while(1){
            bool flag = false;
            for(ll i=0;i<str.length()-1;i++){
                if(str[i] > str[i+1]) {
                    flag = true; break;
                }
            }
            if(!flag) break;
            for(ll i=0;i<str.length()-1;i++){
                if(str[i] > str[i+1]){
                    str.erase(str.begin()+i);
                }
            }
            //cout<<str<<"\n";
        }
        if(str[str.length()-1] > ch) {
            str[str.length()-1] = ch;
            //cout<<str<<"\n";
            while(1){
                bool flag = false;
                for(ll i=0;i<str.length()-1;i++){
                    if(str[i] > str[i+1]){
                        flag = true; break;
                    }
                }
                if(!flag) break;
                for(ll i=0;i<str.length()-1;i++){
                    if(str[i] > str[i+1]) str.erase(str.begin() + i);
                }
            }
            while(k != str.length()) str.push_back(ch);
        } 
        else {
            while(k != str.length())
                str.push_back(ch);
        }
        /*bool flag = false;
        for(ll i=0;i<str.length()-1;i++){
            if(str[i] > str[i+1]){
                flag = true;break;
            }
        }
        if(!flag) {
            assert(1 < 0); 
        }*/
        cout<<str<<"\n";
    }
    return 0;
}
/*BELIEVE THAT*/