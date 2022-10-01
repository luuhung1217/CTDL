#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    while(k--){
        long long n;
        cin>>n;
        long long s[100000];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n);
        for(int i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    system("pause");
}