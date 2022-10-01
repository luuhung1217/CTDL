#include<bits/stdc++.h>

using namespace std;
vector<int>canh[10000];
int kt[10000];
void dfs(int u){
    kt[u]=1;
    for(int i : canh[u]){
        if(!kt[i])
            dfs(i);
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,m;
        cin >> n >> m;  
        for(int i=1;i <= m;i++){
            int x,y;
            cin >> x >> y;
            canh[x].push_back(y);
            canh[y].push_back(x);
        }  
        int result=0;
        for(int i=1;i <= n;i++){
            memset(kt, 0,sizeof(kt));
            kt[i] = 1;
            int dem=0;
            for(int j=1;j <= n;j++){
                if(!kt[j]){
                    dem++;
                    dfs(j);
                }
                
            }result = max(result,dem);
        }
        // if(result <= 1){
        //     cout<< 0;
        // }
        // else 
        cout<< result<<endl;
    }
}