#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    while(test--){
        stack<int>st;
        int cnt=0;
        string s;cin>>s;
        for(char c:s){
          if(c=='1'){
            cnt++;
          }else if(cnt>0 &&c=='0'){
            st.push(cnt);
            cnt=0;
          }  
        }
        if(s[s.length()-1]=='1'){
            st.push(cnt);
            cnt=0;
        }
        if(st.empty())cout<<0;
        else{
            int sum=0;
            while(!st.empty()){
                sum+=st.top();
                if(!st.empty())st.pop();
                else break;
                if(!st.empty())st.pop();
                else break;
            }
            cout<<sum;
        }
        cout<<endl;
    }
    return 0;
}