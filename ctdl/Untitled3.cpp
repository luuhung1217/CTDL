#include<bits/stdc++.h>
using namespace std;
int n,kq[100],dd[100];
vector<vector<int>>res;
void hoanvi(int i){
    vector<int>h;
    if(i>n) 
    for(int j=1;j<=n;j++)
        h.push_back(kq[j]);
    res.push_back(h);
    for(int j=1;j<=n;j++)
        if(dd[j]==0){
            dd[j]=1;
            kq[i]=j;
            hoanvi(i+1);
            dd[j]=0;
        }
    
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        res.clear();
        for(int i=1;i<=11;i++)
            dd[i]=0;
            hoanvi(1);
        for(int i=res.size()-1;i>=2;i--){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
                if(j==n-1){
                  cout<<",";  
                }
                
             //;
            // 
            //    
            }     
        }
        //for(int j=0;j<n-1;j++){
         //   cout<<res[res.size()-1][j];
        //}
        cout<<endl;
    }
}
