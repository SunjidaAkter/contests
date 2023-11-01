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
vector<int>v;
bool isPrime(int n)
{
      // Since 0 and 1 is not 
      // prime return false.
      if(n == 1 || n == 0) return false;
   
      // Run a loop from 2 to n-1
      for(int i = 2; i < n; i++)
      {
        // if the number is divisible by i, 
        // then n is not a prime number.
        if(n % i == 0) return false;
      }
      // Otherwise n is a prime number.
      return true;
}
void ge(int N){
    for(int i = 1; i <= N; i++)
      {
          // Check if current number is prime
          if(isPrime(i)&&i%2!=0) 
          {
            v.push_back(i);
          }
    }
}
void solve(){
    int n;cin>>n;
    if(n==2)cout<<"Bob"<<nl;
    else{
        for(int i=0;i<1e9;i++){
            
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