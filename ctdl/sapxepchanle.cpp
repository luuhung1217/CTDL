#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int main(){
    int n;
    cin>>n;
    vector<int>sole;
    vector<int>sochan;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]%2==0){
            sochan.push_back(s[i]);
        }
        else{
            sole.push_back(s[i]);
        }
    }
    sort(sole.begin(),sole.end(),cmp);
    sort(sochan.begin(),sochan.end());
    int dem1=0,dem2=0;
    for(int i=0;i<n;i++){
        if(s[i]%2==0){
            s[i]=sochan[dem1++];
        }
        else{
            s[i]=sole[dem2++];
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}