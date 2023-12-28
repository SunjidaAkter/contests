#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,ind;cin>>n;
    string s,x="";cin>>s;
    vector<string>v;
    if(n==2)cout<<s<<nl;
    else if(n==3)cout<<s<<nl;
    else if(n==4)cout<<s[0]<<s[1]<<"."<<s[2]<<s[3]<<nl;
    else{
        for(ll i=1;i<n-2;i++){
            if((s[i]=='a'||s[i]=='e')&&(s[i+2]!='a'&&s[i+2]!='e')){
                x+=s[i-1];
                x+=s[i];
                x+=s[i+1];
                v.push_back(x);
                x="";
                ind=i;
            }else if((s[i]=='a'||s[i]=='e')&&(s[i+2]=='a'||s[i+2]=='e')){
                x+=s[i-1];
                x+=s[i];
                v.push_back(x);
                x="";
                ind=i;
            }
        }
        for(ll i=0;i<v.size()-1;i++){
            cout<<v[i]<<".";
        }
        cout<<v.back();
        if((n-(ind+1))==2){
            cout<<"."<<s[n-2]<<s[n-1];
        }
        if((n-(ind+1))==4){
            cout<<"."<<s[n-3]<<s[n-2]<<s[n-1];
        }
        if((n-(ind+1))==3){
            if(s[n-2]=='a'||s[n-2]=='e'){
                cout<<"."<<s[n-3]<<s[n-2]<<s[n-1];
            }else cout<<"."<<s[n-2]<<s[n-1];
        }
        cout<<nl;
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