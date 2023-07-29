#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        stringstream ss(s);
        string word,word2="";
        while(ss>>word){
            // sort(word.begin(), word.end());
            word2+=word;
        }
        sort(word2.begin(), word2.end());
        cout<<word2<<endl;
    }
    return 0;
}