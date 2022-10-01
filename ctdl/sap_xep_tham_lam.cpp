#include<bits/stdc++.h>
using namespace std;
bool kiem_tra(int s[],int n){
    vector<int>res;
    for(int i=0;i<n;i++){
        res.push_back(s[i]);
    }
    sort(res.begin(),res.end());
    for(int i=0;i<n;i++){
        if(s[i]!=res[i]&&s[i]!=res[res.size()-i-1]){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int s[1000];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        if(kiem_tra(s,n)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
}