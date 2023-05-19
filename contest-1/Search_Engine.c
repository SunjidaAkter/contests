#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int n,r,pos=-1;;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        scanf("%d",&r);
        for(int j=0;j<n;j++){
            if(a[j]==r){
                pos=j+1;
                break;
            }
        }
        if(pos==-1){
            printf("Case %d: Not Found\n",i+1);
        }else{
            printf("Case %d: %d\n",i+1,pos);
        }
    }
    return 0;
}