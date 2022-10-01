#include<bits/stdc++.h>
using namespace std;
int n,x,s[100],A[100];
vector<vector<int>>res;
void Try(int i,int k,int sum){
    for(int j=k;j>=1;j--){
        vector<int>h;
        if(sum+A[j]<=x){
            sum+=A[j];
            s[i]=A[j];
            if(sum==x){
               for(int t=1;t<=i;t++){
                   h.push_back(s[t]);
               } 
               sort(h.begin(),h.end());
               res.push_back(h);
            } 
            Try(i+1,j,sum);
            sum-=A[j];
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n>>x;
        res.clear();
        for(int i=1;i<=n;i++){
            cin>>A[i];
        }
        sort(A+1,A+n+1);
        Try(1,n,0);
        if(res.size()==0){
            cout<<"-1"<<endl;
        }
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++){ 
                cout<<"[";
                for(int j=0;j<res[i].size()-1;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<res[i][res[i].size()-1]<<"]";
            }
            cout<<endl;
        }
    }   
}