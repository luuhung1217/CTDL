#include<bits/stdc++.h>
using namespace std;
vector<int>st[1000];
int kt[1000],danhdau[1000];
void xuli(int u, int v,int n){
    if(u == v){
        for(int i = 1;i <= n;i++ ){
            if(kt[i] == 1 && danhdau[i]==1){
                danhdau[i]=1;
            }
            else danhdau[i] = 0;
        }
    }
    else{
        for(int i = 0;i <st[u].size(); i++ ){
            int k=st[u][i];
            if(kt[k] == 0){
                kt[k] = 1;
                xuli(k,v,n);
                kt[k]= 0;
            }
        }
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m,u,v;
        cin >> n >> m >> u >> v;
        for(int i = 1 ;i <= m;i++){
            int x,y;
            cin >> x >> y;
            st[x].push_back(y);
        } 
        for( int i =1;i <= n; i++){
            kt[i]=0;
            danhdau[i]=1;
        }
        kt[u]=1;
        xuli(u,v,n);
        kt[u]=0;
        int dem=0;
        for(int i =1; i<= n; i++){
            if(i != u&&i != v && danhdau[i] == 1){
                dem++;
            }
        }
        cout<<dem<<endl;
        for(int i = 1; i <= 1000; i++){
            st[i].clear();
        }
    }
}