#include<bits/stdc++.h>
using namespace std;
int thoa_man(string s,int n,char c){
    int dem=0;
    for(int i=0;i<n;i++){
        if(s[i]==c&&s[i+1]==c&&s[i+2]==c&&s[i+3]==c&&s[i+4]==c){
            dem++;
        }
    }
    if(dem!=0){
        return 1;
    }
    return 0;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        vector<string>res;
        for(int i=0;i<n;i++){
            s+='X';
        }
        
        for(int j=0;j<=pow(2,n);j++){
            // if(thoa_man(s,n,c)){
                res.push_back(s);
            // }
            int tmp=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='X'){
                    tmp=i;    
                    break;
                }
            }
            for(int i=tmp;i<n;i++){
                if(s[i]=='X'){
                    s[i]='O';
                }
                else if(s[i]=='O'){
                    s[i]='X';
                }
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<endl;
        }
    }
}