#include<bits/stdc++.h>
using namespace std;
int n,kq[100],dd[100];
void xuat(){
    for(int j=1;j<=n;j++){
    	if(j!=n)
            cout<<kq[j];
        
        else
            cout<<",";
	}
        
        
    
}
void hoanvi(int i){
    if(i>n) xuat();
    for(int j=1;j<=n;j++)
        if(dd[j]==0){
            dd[j]=1;
            kq[i]=j;
            hoanvi(i+1);
            dd[j]=0;
        }
    
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        for(int i=1;i<=11;i++)
            dd[i]=0;
            hoanvi(1);
        cout<<endl;
    }
}
