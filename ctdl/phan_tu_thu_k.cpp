#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int m,n,k;
        cin>>m>>n>>k;
        vector<int>res;
        int s1[1000],s2[1000];
        for(int i=0;i<m;i++){
            cin>>s1[i];
            res.push_back(s1[i]);
        }
        for(int i=0;i<n;i++){
            cin>>s2[i];
            res.push_back(s2[i]);
        }
        sort(res.begin(),res.end());
        cout<<res[k-1]<<endl;
    }
}