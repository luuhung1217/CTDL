#include<bits/stdc++.h>
using namespace std;
bool check ,check1;
int a[20],b[20],n;
void kt(){
    bool x=false;
    for(int i=n;i>0;i--){
        if(a[i]!=n){
            a[i]++;
            for(int j=i+1;j<=n;j++)
            a[j]=1;
            x=true;
            break;
        }
    }
    if(!x) check=true;
}
void next(){
    int i=n-1;
    while(i>=1&&b[i]>b[i+1]) i--;
    if(i==0) check1=true;
    else{
        int j=n;
        while(b[i]>b[j]) j--;
        swap(b[i],b[j]);
        reverse(b+i+1,b+1+n);
    }
}

int main(){
    cin>>n;
    for(int i=1 ;i<=n;i++){
        a[i]=1;
        b[i]=i;
    }
    check1=false;
    while(!check1){
        check=false;
        while(!check){
            for(int i=1;i<=n;i++)
                cout<<char(b[i]+64);
            for(int i=1;i<=n;i++)
                cout<<a[i];
            cout <<endl;
            kt();
        }
        for(int i=1;i<=n;i++) a[i]=1;
        next();
    }
}