#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> ans(2);
	for(int i=0;i<n;i++){
		// cout<<a[0]<<" ";
		ans[i%2]++;
	}
	// cout<<a[0]<<" "<<a[1]<<endl;
	cout << min(ans[0] , ans[1])<<"\n";
    return 0;
}