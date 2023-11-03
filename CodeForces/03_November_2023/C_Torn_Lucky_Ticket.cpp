#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    ll sum=n;
    vector<string>v1;
    vector<string>v2;
    vector<string>v3;
    vector<string>v31;
    vector<string>v4;
    vector<string>v41;
    vector<string>v5;
    vector<string>v51;
    // string a[n];
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s.size()==1)v1.push_back(s);
        if(s.size()==2)v2.push_back(s);
        if(s.size()==3)v3.push_back(s);
        if(s.size()==4)v4.push_back(s);
        if(s.size()==5)v5.push_back(s);
    }
    for(int i=0;i<v2.size();i++){
        int x=(v2[i][0]-'0')+(v2[i][1]-'0');
        v2[i]=to_string(x);
    }
    for(int i=0;i<v4.size();i++){
        int x=(v4[i][0]-'0')+(v4[i][1]-'0')+(v4[i][2]-'0')-(v4[i][3]-'0');
        v41.push_back(to_string(x));
    }
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v41.size();j++){
            if(v2[i]==v41[j])sum+=2;
        }
    }
    // for(int i=0;i<v2.size();i++){
    //     int x=(v2[i][0]-'0')+(v2[i][1]-'0');
    //     v2[i]=to_string(x);
    // }
    for(int i=0;i<v3.size();i++){
        int x=(v3[i][0]-'0')+(v3[i][1]-'0')-(v3[i][2]-'0');
        v31.push_back(to_string(x));
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v31.size();j++){
            if(v1[i]==v31[j])sum+=2;
        }
    }
    for(int i=0;i<v3.size();i++){
        int x=(v3[i][0]-'0')+(v3[i][1]-'0')+(v3[i][2]-'0');
        v3[i]=to_string(x);
    }
    for(int i=0;i<v5.size();i++){
        int x=(v5[i][0]-'0')+(v5[i][1]-'0')+(v5[i][2]-'0')+(v3[i][3]-'0')-(v5[i][4]-'0');
        v51.push_back(to_string(x));
    }
    for(int i=0;i<v3.size();i++){
        for(int j=0;j<v51.size();j++){
            if(v3[i]==v51[j])sum+=2;
        }
    }
    // for(int i=0;i<v2.size();i++){
    //     int x=(v2[i][0]-'0')+(v2[i][1]-'0');
    //     v2[i]=to_string(x);
    // }
    for(int i=0;i<v5.size();i++){
        int x=(v5[i][0]-'0')+(v5[i][1]-'0')+(v5[i][2]-'0')-(v5[i][3]-'0')-(v5[i][4]-'0');
        v5[i]=to_string(x);
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v5.size();j++){
            if(v1[i]==v4[j])sum+=2;
        }
    }



    // for(int i=0;i<v2.size();i++){
    //     int x=(v2[i][0]-'0')+(v2[i][1]-'0');
    //     v2[i]=to_string(x);
    // }
    for(int i=0;i<v4.size();i++){
        int x=(v4[i][1]-'0')+(v4[i][2]-'0')+(v4[i][3]-'0')-(v4[i][1]-'0');
        v4[i]=to_string(x);
    }
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v4.size();j++){
            if(v2[i]==v4[j])sum+=2;
        }
    }
    // for(int i=0;i<v2.size();i++){
    //     int x=(v2[i][0]-'0')+(v2[i][1]-'0');
    //     v2[i]=to_string(x);
    // }
    for(int i=0;i<v3.size();i++){
        int x=(v3[i][0]-'0')+(v3[i][1]-'0')-(v3[i][2]-'0');
        v31.push_back(to_string(x));
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v31.size();j++){
            if(v1[i]==v31[j])sum+=2;
        }
    }
    for(int i=0;i<v3.size();i++){
        int x=(v3[i][0]-'0')+(v3[i][1]-'0')+(v3[i][2]-'0');
        v3[i]=to_string(x);
    }
    for(int i=0;i<v5.size();i++){
        int x=(v5[i][0]-'0')+(v5[i][1]-'0')+(v5[i][2]-'0')+(v3[i][3]-'0')-(v5[i][4]-'0');
        v51.push_back(to_string(x));
    }
    for(int i=0;i<v3.size();i++){
        for(int j=0;j<v51.size();j++){
            if(v3[i]==v51[j])sum+=2;
        }
    }
    // for(int i=0;i<v2.size();i++){
    //     int x=(v2[i][0]-'0')+(v2[i][1]-'0');
    //     v2[i]=to_string(x);
    // }
    for(int i=0;i<v5.size();i++){
        int x=(v5[i][0]-'0')+(v5[i][1]-'0')+(v5[i][2]-'0')-(v5[i][3]-'0')-(v5[i][4]-'0');
        v5[i]=to_string(x);
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v5.size();j++){
            if(v1[i]==v4[j])sum+=2;
        }
    }







    cout<<sum;
    return 0;
}