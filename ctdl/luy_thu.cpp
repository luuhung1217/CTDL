#include<bits/stdc++.h>
long long mod=1e9+7;
using namespace std;
#define ll long long
long long mul(int a, int b){
    if(b == 0){
        return 0;
    }
    long long x = mul(a, b/2);
    if(b%2==0){
        return (x*2)%mod;
    }
    return (x*2 + a)%mod;
}

long long power(int n,int k){
    if(k==0) return 1;
    if(k==1) return n%mod;
    ll x=power(n,k/2);
    ll y=mul(x,x);
    if(k%2==0) return y%mod;
    return (n*y)%mod;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        cout<<power(n,k);
        cout<<endl;
    }
}