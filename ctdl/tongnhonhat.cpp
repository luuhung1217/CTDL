#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int s[100];
        for(int i=1;i<=n;i++){
            cin>>s[i];
        }
        sort(s+1,s+n+1);
        long long so1=0,so2=0;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                so1=so1*10+s[i];
            }
            else{
                so2=so2*10+s[i];
            }
        }
        cout<<so1+so2<<endl;
    }
}