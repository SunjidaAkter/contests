#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
string SmallestString(string s, char c)
{
 
    // Traverse the string
    for (int i = 0; i < s.size(); i++) {
 
        // If the current character is greater
        // than the given character
        if (s[i] > c) {
 
            // Insert the character before
            // the greater character
            s.insert(i, 1, c);
 
            // Return the string
            return s;
        }
    }
 
    // Append the character at the end
    s += c;
 
    // Return the string
    return s;
}
 
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    reverse(all(s));
    string s1=s;
    reverse(all(s));
    string s2=s1+s;
    ll equalOrNot = s.compare(s1);
    if(equalOrNot>0)cout<<s2<<nl;
    else cout<<s<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}