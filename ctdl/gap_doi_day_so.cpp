#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long n,k;
        cin>>n>>k;
        long long dem=1;
        while(k%2==0){
            dem++;
            k/=2;
        }
        cout<<dem<<endl;    
    }
    
}