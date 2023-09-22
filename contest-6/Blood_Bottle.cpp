#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
int main(){
    int test;cin>>test;
    while(test--){
        vector<int>st;
        int cnt=0;
        string s;cin>>s;
        for(char c:s){
          if(c=='1'){
            cnt++;
          }else if(cnt>0 &&c=='0'){
            st.push_back(cnt);
            cnt=0;
          }  
        }
        if(s[s.length()-1]=='1'){
            st.push_back(cnt);
            cnt=0;
        }
        sort(st.begin(),st.end(),cmp);
        if(st.empty())cout<<0;
        else{
            int sum=0;
            for(int i=0;i<st.size();i+=2){
                sum+=st[i];
                
            }
            cout<<sum;
        }
        cout<<endl;
    }
    return 0;
}