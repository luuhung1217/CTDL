#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[100000];
    int vt[100000],res=0;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        vt[s[i]]=vt[s[i]-1]+1;
        res=max(res,vt[s[i]]);
    }
    cout<<n-res;
}