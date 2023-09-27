#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int p=5;
        while(n--){
            cout<<p++<<" ";
        }
        cout<<endl;
    }
    return 0;
}