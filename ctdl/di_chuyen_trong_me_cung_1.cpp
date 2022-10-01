#include<bits/stdc++.h>
using namespace std;
int n,a[1000][1000];
bool check;
vector<string>res;
void run(int i,int j,string s){
    if(i==1 && j==1 && a[i][j]==0){
        check==false;
        return;
    }
    if(i==n && j==n && a[i][j]==1){
        res.push_back(s);
        check=true;
        return;
    }
    if(i<n && a[i+1][j]==1){
        run(i+1,j,s+"D");
    }
    if(j<n && a[i][j+1]==1){
        run(i,j+1,s+"R");
    }
    if(i<n && j<n && a[i+1][j]==0 && a[i][j+1]==0 ||i>n || j>n ){
        return;
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        res.clear();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        check=false;
        run(1,1,"");
        if(check==false){
            cout<<-1;
        }
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size(); i++){
                cout<<res[i]<<" ";
            }
        }
        cout<<endl;
    }
}