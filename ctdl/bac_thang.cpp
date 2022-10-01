#include<bits/stdc++.h>
#define modul 1000000007
using namespace std;
int main(){
    int test;ttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        long long s[n+1];
        memset(s, 0, sizeof s);
        s[0] = 1;
        s[1] = 1;
        for(int i = 2; i <= n;i++){
            for(int j = 1 ;j <= k && j <= i; j++){
                s[i] = (s[i] + s[i-j]) % modul;
            }
        }
        cout<<s[n]<<endl;
    }
}