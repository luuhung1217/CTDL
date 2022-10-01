#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int v;
    int val;
}q;
q thp[1005];
int a[105], c[105], dp[1005][1005];
void xuli(int n, int V){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= V; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
            else{
                if(j < thp[i].v) dp[i][j] = dp[i - 1][j];
                else dp[i][j] = max(dp[i - 1][j], thp[i].val + dp[i - 1][j - thp[i].v]);
            }
        }
    }
    cout << dp[n][V] << "\n";
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n, V;
        cin >> n >> V;
        for(int i = 0; i < n; i++) cin >> thp[i].v;
        for(int i = 0; i < n; i++) cin >> thp[i].val;
        xuli(n, V);
    }
}