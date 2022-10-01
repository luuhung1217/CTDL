#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int ans=1;
        int h=s.size();
        for(int i=0;i<h;i++){
            int u=i,v=i;
            while(u>=0&&v<h){
                if(s[u]==s[v]){
                    ans=max(ans,v-u+1);
                    u--;
                    v++;
                }
                else break;
            }
        }
        for(int i=0;i<h-1;i++){
            int m=i;
            int n=i+1;
            while(m>=0&&n<h){
                if(s[m]==s[n]){
                    ans=max(ans,n-m+1);
                    m--;
                    n++;
                }
                else break;
            } 
        }
        cout<<ans<<endl;
    }
}