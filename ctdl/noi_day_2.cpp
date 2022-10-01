#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long mod=1000000007;
int main(){
    int test;
    cin>>test;
    while(test--){
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        long long n,x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            pq.push(x);
        }
        ll res=0,a=0,b=0,sum=0;
        while(pq.size()>1){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            sum=(a+b)%mod;
            res+=sum;
            res%=mod;
            pq.push(sum);
        }
        cout<<res<<endl;
    }
}