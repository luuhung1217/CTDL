#include<bits/stdc++.h>
using namespace std;
#define modul 1000000007
long long dao(long long n){
    long long res=0,tmp;
    while(n>0){
        tmp=n%10;
        res=res*10+tmp;
        n/=10;
    }
    return res;
}
long long kq(long long n,long long k){
    if(k==1) return n%modul;
    long long tmp=kq(n,k/2);
    if(k%2==0) return (tmp*tmp)%modul;
    return ((tmp*tmp)%modul)*n%modul;

}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long n,k;
        cin>>n;
        k=dao(n);
        cout<<kq(n,k)<<endl;  
    }
}