#include<bits/stdc++.h>
using namespace std;
void kq(int n){
    int dem1=0,dem2=0;
    while(n>0){
        if(n%7==0){
            dem1++;
            n-=7;
        }
        else{
            dem2++;
            n-=4;
        }
    }
    if(n<0){
        cout<<-1;
    }
    else{
        for(int i=0;i<dem2;i++){
            cout<<4;
        }
        for(int i=0;i<dem1;i++){
            cout<<7;
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        kq(n);
        cout<<endl;
    }
}