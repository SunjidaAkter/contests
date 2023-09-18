#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;

    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(abs(a-b)+c*2-1)/(c*2)<<endl;
    }               
    return 0;
}