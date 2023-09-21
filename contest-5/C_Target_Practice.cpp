#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        string s[10];int sum=0;
        for(int i=0;i<10;i++){
            cin>>s[i];
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(((i==0||i==9)&&(j>=0&&j<=9)||(j==0||j==9)&&(i>=0&&i<=9))){
                    if(s[j][i]=='X')sum+=1;
                }
                if(((i==1||i==8)&&(j>=1&&j<=8)||(j==1||j==8)&&(i>=1&&i<=8))){
                    if(s[j][i]=='X')sum+=2;
                }
                if(((i==2||i==7)&&(j>=2&&j<=7)||(j==2||j==7)&&(i>=2&&i<=7))){
                    if(s[j][i]=='X')sum+=3;
                }
                if(((i==3||i==6)&&(j>=3&&j<=6)||(j==3||j==6)&&(i>=3&&i<=6))){
                    if(s[j][i]=='X')sum+=4;
                }
                if(((i==4||i==5)&&(j>=4&&j<=5)||(j==4||j==5)&&(i>=4&&i<=5))){
                    if(s[j][i]=='X')sum+=5;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}