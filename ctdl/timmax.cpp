#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll modulo=1000000007;
int main(){
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>::iterator it;
        for(it=a.begin();it!=a.end();it++){
            cin>>*it;
        }
        sort(a.begin(),a.end());
        ll res=0;
        for(int i=0;i<a.size();i++){
            res=((res%modulo)+((a[i]*i)%modulo))%modulo;
        }
        cout<<res<<endl;
    }
}