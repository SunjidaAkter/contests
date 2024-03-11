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
int countFreq(string& pat, string& txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) {
            res++;
        }
    }
    return res;
}
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        // cout<<(s[i]=='m'&&s[i+1]=='a'&&s[i+1]=='p')<<nl;
        if((s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')||(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')){
            cnt++;
            // s.erase(s[i+2]);
            // i--;
        }
        if(i==s.size()-2)break;
    }
    string str="mapie";
    if(countFreq(str, s)>0)cnt-=countFreq(str, s);
    cout<<cnt<<nl;
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