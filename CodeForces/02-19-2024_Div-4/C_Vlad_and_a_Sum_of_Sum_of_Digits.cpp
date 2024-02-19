
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
int digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
const int N = 2e5 + 10;
map<ll, ll> pre;

void gen() {
    ll sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += digits(i);
        pre[i] = sum;
    }
}    
void solve(){
    ll n;cin>>n;
    if(n<10){
        cout<<(n*(n+1)/2)<<nl;
        return;
    }
    cout<<pre[n]<<nl;
}
int main(){
    FAST;
    gen(); 
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}