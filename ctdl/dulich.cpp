#include<bits/stdc++.h>
using namespace std;
int n,danhdau[100];
long c[100][100],s=0,diemxet[100],Min=10000000,phimin=10000000;
vector<int>phi;
void chiphi(int i,int n){
    if(s+Min*(n-i+1)>=phimin){
        return;
    }
    for(int j=1;j<=n;j++){
        if(danhdau[j]){
            diemxet[i]=j;
            danhdau[j]=0;
            s+=c[diemxet[i-1]][j];
            if(i==n){
                if(s+c[diemxet[n]][diemxet[1]]<phimin){
                    phi.clear();
                    for(int t=1;t<=n;t++){
                        phi.push_back(diemxet[t]);
                    }
                phimin=s+c[diemxet[n]][diemxet[1]];
                }
            }
            else chiphi(i+1,n);
            s-=c[diemxet[i-1]][j];
            danhdau[j]=1;
        }
    }
}
int main(){
    memset(danhdau,1,sizeof(danhdau));
    danhdau[1]=0;
    diemxet[1]=1;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
            if(c[i][j]!=0){
                Min=min(Min,c[i][j]);
            }
        }
    }
    chiphi(2,n);
    // cout<<"(";
    // for(int i=0;i<phi.size();i++){
    //     cout<<phi[i]<<",";
    // }
    // cout<<1<<")"<<endl;
    cout<<phimin;
}