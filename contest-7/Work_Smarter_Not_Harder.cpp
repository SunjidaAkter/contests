#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        double l,v1,v2;cin>>l>>v1>>v2;
        int x=ceil(l/v1);
        int y=ceil(l/v2);
        if(x<=y)cout<<-1<<endl;
        else{
            int s=((x-y)/v1);
            cout<<((x-y)-1)<<endl;
        }
    }
    return 0;
}