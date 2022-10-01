#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
bool check[1000];
int trc[1000];
void bfs(int u){
    queue<int> q;
    q.push(u);
    while(q.size() > 0){
        int v=q.front();
        q.pop();
        check[v]=true;
        for(int x : adj[v]){
            if(!check[x]){
                q.push(x);
                check[x]=true;
                trc[x]=v;
            }
        }
    }
}
void path(int s,int t){
    bfs(s);
    if(!check[t]) cout<<-1;
    else{
        vector<int> res;
        while(t != s){
            res.push_back(t);
            t =trc[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int i=0 ;i <res.size(); i++){
            cout<< res[i]<<" ";
        }
    }
}

int main(){
    int test;
    cin >> test;
    while(test--){
        for(int  i = 0 ; i<=10000 ; i++){
            adj[i].clear();
        }
        memset(check, false,sizeof(check));
        int d,c,s,t;
        cin>> d >> c >> s>> t ;
        while(c--){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        path(s,t);
        cout<<endl;
    }
}