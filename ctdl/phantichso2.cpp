#include<bits/stdc++.h>
using namespace std;
int n,s[100];
vector<vector<int>>res;
void Try(int i,int k,int sum){
    for(int j=k;j>=1;j--){
        vector<int>h;
        if(sum+j<=n){
            sum+=j;
            s[i]=j;
            if(sum==n){
               for(int t=1;t<=i;t++){
                   h.push_back(s[t]);
               } 
               res.push_back(h);
            } 
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
        res.clear();
        Try(1,n,0);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){ 
            cout<<"(";
            for(int j=0;j<res[i].size()-1;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<res[i][res[i].size()-1]<<") ";
        }
        cout<<endl;
    }   
}