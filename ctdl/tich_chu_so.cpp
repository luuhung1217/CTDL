#include<bits/stdc++.h>
using namespace std;
long long tich(long long n){
    if(n>=0&&n<=9)
        return n;
    stack<int>so;
    for(int i=9;i>=2&&n>1;i--){
        while(n%i==0){
            so.push(i);
            n/=i;
        }
    }
    if(n!=1)
    return -1;
    long long k=0;
    while(!so.empty()){
        k=k*10+so.top();
        so.pop();
    } 
    return k;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        cout<<tich(n)<<endl;
    }
}