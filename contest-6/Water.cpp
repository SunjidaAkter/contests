#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int a[n];
        priority_queue<int>pq;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            // s.insert(a[i]);
            pq.push(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==pq.top()){
                s.insert(i);
                break;
            }
        }
        pq.pop();
        for(int i=0;i<n;i++){
            if(a[i]==pq.top()){
                s.insert(i);
                break;
            }
        }
        cout<<*s.begin()<<" ";
        s.erase(s.begin());
        cout<<*s.begin()<<endl;
    }
    return 0;
}