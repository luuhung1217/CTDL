#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int s[1000];
        int dem=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]==0){
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}