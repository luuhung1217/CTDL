#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,s,m;
        cin>>n>>s>>m;
        if(m*s > n*(s-s/7)){
            cout<<-1;
        }
        else{
            for(int i=1;i<=(s-s/7);i++){
                if(n*i>=m*s){
                    cout<<i;
                    break;
                }
            }
        }
        cout<<endl;
    }
}