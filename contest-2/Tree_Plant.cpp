#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;cin>>x;
    if(x==0)cout<<0;
    else if(x==1)cout<<1;
    else{
        long long int result=(pow(2,x-2)*pow(2,x-1));
        cout<<result;
    }
    return 0;
}
