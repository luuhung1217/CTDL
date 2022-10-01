#include<bits/stdc++.h>
using namespace std;
#define modul 1000000007
long long kq(long long n,long long k){
    long long result=1;
    while(k!=0){
        if(k&1){
            result=(result*n)%modul;
        }
        k=k>>1;
        n=(n*n)%modul;
    }
    return result;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long n,k;
        cin>>n>>k;
        cout<<kq(n,k)<<endl;
    }
}