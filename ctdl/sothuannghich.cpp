#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int ans=1,h=0;
        if(s.size()%2==0){
            h=s.size()-1;
        }
        else{
            h=s.size();
        }
        for(int i=0;i<s.size();i++){
            int u=i,v=i;
            while(u>=0&&v<s.size()){
                if(s[u]==s[v]){
                    ans=max(ans,v-u+1);
                    u--;
                    v++;
                }
                else break;
            }
        }
        cout<<ans<<endl;
    }
}