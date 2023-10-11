#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool check(string str) 
{ 
    int n = str.length(); 
    if (n == 0)return false; 
    if (n == 1)return ((str[0]-'0')%8 == 0); 
    if (n == 2) return (((str[n-2]-'0')*10 + (str[n-1]-'0'))%8 == 0); 
    int last = str[n-1] - '0'; 
    int second_last = str[n-2] - '0'; 
    int third_last = str[n-3] - '0'; 
    return ((third_last*100 + second_last*10 + last) % 8 == 0); 
} 
void solve(){
    int n;string s;
    cin>>n>>s;
    if(n<21){
        ll x=stoi(s);
        if(x<=8)cout<<8<<nl;
        else{
            if(x%8==0)cout<<x<<nl;
            else{
                string s=to_string(x-(x%8));
                if(s.size()<n)cout<<x+(x%8)<<nl;
                else cout<<x-(x%8)<<nl;
            }
        }
    }else{
        if(check(s))cout<<s<<nl;
        else{
            int last = s[n-1] - '0'; 
            int second_last = s[n-2] - '0'; 
            int third_last = s[n-3] - '0';
            int y=third_last*100 + second_last*10 + last;
            s=s.substr(0,s.size() - 4);
            string s1=to_string(y-(y%8));
            if(s.size()<3)cout<<s<<y+(y%8)<<nl;
            else cout<<s<<y-(y%8)<<nl;
        }
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}