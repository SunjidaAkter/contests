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
vector<int> getdiv(int n){
    vector<int> ans;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i){
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
    // ll n,k;cin>>n>>k;
void solve(){

    int a, b;
    cin >> a >> b;
    int c = a / b;
    for (int i = 1; i <= b; i++)
    {
        cout << i * c << " ";
    }
    cout << endl;

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