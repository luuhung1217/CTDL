#include<bits/stdc++.h>
using namespace std;
#define ll long long  
ll getmin(ll n){
    ll res=0,exp=1;
    while(n>0){
        ll so=n%10;
        if(so==6){
            so=5;
        }
        res+=so*exp;
        exp*=10;
        n/=10;
    }
    return res;
}
ll getmax(ll n){
    ll res=0,exp=1;
    while(n>0){
        ll so=n%10;
        if(so==5){
            so=6;
        }
        res+=so*exp;
        exp*=10;
        n/=10;
    }
    return res;
}
int main(){
    ll A,B;
    cin>>A>>B;
    ll min=0,max=0;
    min=getmin(A)+getmin(B);
    max=getmax(A)+getmax(B);
    cout<<min<<" "<<max;
}