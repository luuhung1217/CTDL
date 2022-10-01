#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll a[10000],check=1,x;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int j=1;j<=n-1;j++){
            cin>>x;
            if(check&&x!=a[j]){
                cout<<j<<endl;
                check=0;
            }
        }
        if(check){
            cout<<n<<endl;
        }
    }
}