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
void solve(){
    ll x;cin>>x;
    ll n = 0;
    while ((1 << n)<=x) n++;

    ll ans = (1<<(n - 1));

    cout << (x ^ ans) << " " << ans << nl;
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
// 10 Steps to Solve Any Problems:
// 1.Read the problem completely at least two or three times (or however many makes you feel comfortable)
// 2.Identify the subject, the problem belongs to. Is it a sorting or pattern matching problem? 
//   Can I use graph theory? Is it related to number theory? etc.
// 3.Try to solve the problem manually by considering 3 or 4 sample data sets.
// 4.After concentrate on optimizing the manual steps. Try to make it as simple as possible.
// 5.Write to write pseudo-code and comments besides the code from the manual steps. 
//   One thing you can do is to check after every function is written. Use a good IDE with a debugger, if possible. 
//   Don’t need to think much about the syntax. Just focus on the logic and steps.
// 6.Replace the comments or pseudo-code with real code. 
//   Always check if the values and code are behaving as expected before moving to the new line of pseudo-code.
// 7.Then optimize the real code.
// 8.Take care of boundary conditions as well.
// 9.Get feedback from your teammates, professors, and other developers and also ask your question on Stack Overflow if possible. 
//   Try to learn from others’ guidelines and what they are handling those problems. A problem may be solved in several ways. 
//   So, don’t get disappointed if you can’t think like an expert. 
//   You need to stick to the problem and you will gradually become better and quicker in solving problems like others.
// 10.Practice, Practice, and Practice.
 
// ----------------------------------------------------- code ends here ----------------------------------------------------------