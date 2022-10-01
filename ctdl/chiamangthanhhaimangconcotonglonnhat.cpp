#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int s[1000];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n);
        int sum1=0,sum2=0,res=0;
        for(int i=0;i<n;i++){
            if(i<k){
                sum1+=s[i];
            }
            else{
                sum2+=s[i];
            }
        }
        res=abs(sum2-sum1);
        sum1=sum2=0;
        for(int i=0;i<n;i++){
            if(i<n-k){
                sum1+=s[i];
            }
            else{
                sum2+=s[i];
            }
        }
        res=max(res,abs(sum2-sum1));
        cout<<res<<endl;
    }
}