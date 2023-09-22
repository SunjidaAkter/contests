#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i==n||j==n) {
                cout << n;
            }else if(i==1){
                cout<<j;
            }else if(j==1){
                cout<<i;
            }else{
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}