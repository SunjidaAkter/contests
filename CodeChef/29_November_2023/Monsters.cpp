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
bool prime(int a){
    if (a == 1 || a == 0)
        return false;
    for (int i=2; i*i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
vector<int>primes;
void generatingPrime(){
    int N = 1e6;
    for(int i = 1; i <= N; i++){
        if(prime(i)) {
            primes.push_back(i);
        }
    }
} 
void solve(){
    ll n;cin>>n;
    
    int x=n;
    while(!prime(x)){
        x--;
    }
    ll y=n-x;
    ll cnt=1;
    ll cnt1=1;
    while(cnt<=y){
        n-=cnt;
        cnt*=2;
        cnt1++;
    }
    n-=x;
    cnt/=2;
    while(n>0){
        n-=cnt;
        cnt*=2;
        cnt1++;
    }
    if(n!=0)c(-1);
    else c(cnt1);
}
int main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}