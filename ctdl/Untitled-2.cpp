#include<bits/stdc++.h>
using namespace std;
//vector<vector<int>>res;
int n,danhdau[100],s[100];
void Try(int i){
    vector<int>h;
    if(i>n){
        for(int j=1;j<=n;j++){
            h.push_back(s[j]);
        }  
        res.push_back(h);
    }
    for(int j=1;j<=n;j++){
        if(danhdau[j]==0){
            danhdau[j]=1;
            s[i]=j;
            Try(i+1);
            danhdau[j]=0;
        }
    }

}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        //res.clear();
        for(int i=1;i<=11;i++)
            danhdau[i]=0;
        Try(1);
        for(int i=res.size()-1;i>=0;i--){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
            }
            cout<<",";
        }
    }
}
