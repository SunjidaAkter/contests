// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// #define ll long long
// int main(){
//     int q;cin>>q;
//     while(q--){

//         int n;cin>>n;
//         int a[n],s=0;
//         for(int i=0;i<n;i++)cin>>a[i];
//         for(int i=0;i<n;i++)s+=a[i];
//         int dp[n+1][s+1];
//         dp[0][0]=1;
//         for(int i=1;i<=s;i++)dp[0][i]=0;
//         for(int i=1;i<=n;i++){
//             for(int j=0;j<=s;j++){
//                 if(a[i-1]<=j){
//                     dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
//                 }else{
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
//         set<int>st;
//         for(int j=0;j<=s;j++){
//             if(dp[n][j]==1)st.insert(abs(j-(s-j)));
//         }
//         cout<<*st.begin();    
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
vector<int>v;
void subSum(int a[], vector<int>& subset, int index, int n) {
  if (subset.size() == n / 2) {
    int sum=0;
    for (int i = 0; i < subset.size(); i++) {
      sum+=subset[i];
      v.push_back(sum);
    }
    return;
  }

  if (index >= n) {
    return;
  }

  subset.push_back(a[index]);
  subSum(a, subset, index + 1, n);

  subset.pop_back();
  subSum(a, subset, index + 1, n);
}
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)sum+=a[i];
        vector<int> ss;
        subSum(a,ss, 0, n);
        int mn=INT_MAX;
        for(int i=0;i<v.size();i++){
            mn=min(mn,sum-v[i]);
        }
        cout<<mn<<endl;
    }
    return 0;
}