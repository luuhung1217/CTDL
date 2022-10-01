#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n,x;
        cin>>n>>x;
        long long s[100000];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int dem=0;
        for(int i=0;i<n;i++){
            if(s[i]==x){
                dem++;
            }
        }
        if(dem==0){
            cout<<"-1"<<endl;
        }
        else cout<<dem<<endl;
    }
    system("pause");
}