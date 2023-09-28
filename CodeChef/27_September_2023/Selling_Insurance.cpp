#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        double n;cin>>n;
        cout<<ceil(100/(n*20/100))<<endl;
    }
    return 0;
}