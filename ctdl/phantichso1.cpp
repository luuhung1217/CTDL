#include<bits/stdc++.h>
using namespace std;
int n,s[100];
void in(int k){
    cout<<"(";
    for(int i=1;i<=k;i++){
        cout<<s[i];
        if(i==k) cout<<") ";
        else cout<<" ";
    }
}
void Try(int i,int k,int sum){
    for(int j=k;j>=1;j--){
        if(sum+j<=n){
            sum+=j;
            s[i]=j;
            if(sum==n) in(i);
            Try(i+1,j,sum);
            sum-=j;
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        Try(1,n,0);
        cout<<endl;
    }
}