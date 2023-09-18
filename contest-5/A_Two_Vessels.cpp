#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;

    while(test--){
        double a,b,c;
        cin>>a>>b>>c;
        cout<<ceil((abs(a-b)/2)/c)<<endl;
    }               
    return 0;
}