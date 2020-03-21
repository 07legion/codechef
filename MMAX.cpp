/*  
    MASTER HAS FAILED MORE TIMES 
    THAN BEGINNNER HAS EVER TRIED
*/

#include "bits/stdc++.h"
using namespace std; 
using namespace chrono;
typedef long long ll;
typedef long long int lli;
const ll MAX = 1e5 + 7;
const ll INF = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


/* Ref:- 

//https://www.geeksforgeeks.org/how-to-compute-mod-of-a-big-number/
//https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/
//https://www.geeksforgeeks.org/difference-of-two-large-numbers/

*/

// Returns true if str1 is smaller than str2. 
bool isSmaller(string str1, string str2) 
{ 
    // Calculate lengths of both string 
    ll n1 = str1.length(), n2 = str2.length(); 

    if (n1 < n2) 
    return true; 
    if (n2 < n1) 
    return false; 

    for (ll i=0; i<n1; i++) 
    if (str1[i] < str2[i]) 
        return true; 
    else if (str1[i] > str2[i]) 
        return false; 

    return false; 
} 

// Function for find difference of larger numbers 
string findDiff(string str1, string str2) 
{ 
    // Before proceeding further, make sure str1 
    // is not smaller 
    if (isSmaller(str1, str2)) 
        swap(str1, str2); 

    // Take an empty string for storing result 
    string str = ""; 

    // Calculate length of both string 
    ll n1 = str1.length(), n2 = str2.length(); 

    // Reverse both of strings 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
    
    ll carry = 0; 

    // Run loop till small string length 
    // and subtract digit of str1 to str2 
    for (ll i=0; i<n2; i++) 
    { 
        // Do school mathematics, compute difference of 
        // current digits 
        
        ll sub = ((str1[i]-'0')-(str2[i]-'0')-carry); 
        
        // If subtraction is less then zero 
        // we add then we add 10 into sub and 
        // take carry as 1 for calculating next step 
        if (sub < 0) 
        { 
            sub = sub + 10; 
            carry = 1; 
        } 
        else
            carry = 0; 

        str.push_back(sub + '0'); 
    } 

    // subtract remaining digits of larger number 
    for (ll i=n2; i<n1; i++) 
    { 
        ll sub = ((str1[i]-'0') - carry); 
        
        // if the sub value is -ve, then make it positive 
        if (sub < 0) 
        { 
            sub = sub + 10; 
            carry = 1; 
        } 
        else
            carry = 0; 
            
        str.push_back(sub + '0'); 
    } 

    // reverse resultant string 
    reverse(str.begin(), str.end()); 

    return str; 
} 


string multiply(string num1, string num2) 
{ 
    ll n1 = num1.size(); 
    ll n2 = num2.size(); 
    if (n1 == 0 || n2 == 0) 
    return "0"; 

    // will keep the result number in vector 
    // in reverse order 
    vector<ll> result(n1 + n2, 0); 

    // Below two indexes are used to find positions 
    // in result. 
    ll i_n1 = 0; 
    ll i_n2 = 0; 
    
    // Go from right to left in num1 
    for (ll i=n1-1; i>=0; i--) 
    { 
        ll carry = 0; 
        ll n1 = num1[i] - '0'; 

        // To shift position to left after every 
        // multiplication of a digit in num2 
        i_n2 = 0; 
        
        // Go from right to left in num2             
        for (ll j=n2-1; j>=0; j--) 
        { 
            // Take current digit of second number 
            ll n2 = num2[j] - '0'; 

            // Multiply with current digit of first number 
            // and add result to previously stored result 
            // at current position. 
            ll sum = n1*n2 + result[i_n1 + i_n2] + carry; 

            // Carry for next iteration 
            carry = sum/10; 

            // Store result 
            result[i_n1 + i_n2] = sum % 10; 

            i_n2++; 
        } 

        // store carry in next cell 
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 

        // To shift position to left after every 
        // multiplication of a digit in num1. 
        i_n1++; 
    } 

    // ignore '0's from the right 
    ll i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 

    // If all were '0's - means either both or 
    // one of num1 or num2 were '0' 
    if (i == -1) 
    return "0"; 

    // generate the result string 
    string s = ""; 
    
    while (i >= 0) 
        s += std::to_string(result[i--]); 

    return s; 
} 

ll mod(string num, ll a) 
{ 
    // Initialize result 
    ll res = 0; 
  
    // One by one process all digits of 'num' 
    for (ll i = 0; i < num.length(); i++) 
         res = (res*10 + (ll)num[i] - '0') %a; 
  
    return res; 
} 

int main() {

    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll T;cin>>T;
    while(T--) {
        ll n; string k;cin>>n>>k;
        string temp = to_string(n);
        if(temp == k) cout<<"0\n";
        // else if(k < n) {
        //     if((n-k) == k) cout<<n-1<<"\n";
        //     else cout<<(2*(min(k,n-k)))<<"\n";
        // }
        else if(/*(k.length() < temp.length() || (k < n)*/ isSmaller(k,temp)) {
            string diff = findDiff(temp,k);
            if(diff == k) cout<<n-1<<"\n";
            string ans = "";
            if(isSmaller(k,diff)) ans = k;
            else ans = diff;
            cout<<multiply("2",ans)<<"\n";
        }
        // else {
        //     ll t1 = k % n;
        //     ll t2 = n - t1;
        //     if(t1 == t2) cout<<n-1<<"\n";
        //     else cout<<(2*(min(t1,t2)))<<"\n";
        // }
        else {
            ll t1 = mod(k,n);
            ll t2 = n - t1;
            if(t1 == t2) cout<<n-1<<"\n";
            else cout<<(2*(min(t1,t2)))<<"\n";
        }
    }
    return 0;
}

