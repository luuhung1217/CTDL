#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int s[n+1];
        for(int i=1; i <= n; i++){
            cin>>s[i];
        }
        int dd[n+1] = {};
        int res=0;
        for(int i = 1; i <= n; i++ ){
            dd[i] = 1;
            for(int j = 1; j <i ;j++){
                if(s[i] >= s[j]){
                    dd[i] = max(dd[i],dd[j]+1);
                }
            }
            res = max(res,dd[i]);
        }
        cout<<n-res<<endl;
    }
}