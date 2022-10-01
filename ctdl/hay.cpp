#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        res.clear();
        int s[100];
        for(int i=1;i<=n;i++) s[i]=i;
        while(1){
            vector<int>h;
            for(int i=1;i<=n;i++)
                h.push_back(s[i]);
            
            res.push_back(h);
            int j=n-1,k=n;
             while(s[j]>s[j+1]&&j>0) j--;
            if(j==0) break;
            else{
                while(s[k]<s[j]) k--;
                    swap(s[j],s[k]);
                    int l=j+1,r=n;
                    while(l<r){
                        swap(s[l],s[r]);
                        l++;r--;
                    } 
            }
        }  
        for(int i=res.size()-1;i>=1;i--){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
                if(j==n-1){
                    cout<<",";
                }
            }     
        }
        int p=res.size();
        for(int j=res[p-1].size()-1;j>=0;j--){
           cout<<res[res.size()-1][j];
        }
        cout<<endl;
    }
}
