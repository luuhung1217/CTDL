#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int a,b;
        cin >> a >> b;
        vector<int> st[1000000];
        while(b--){
            int i, j;
            cin >> i >> j;
            st[i].push_back(j);
            st[j].push_back(i);
        }
        for( int i=1 ;i <= a;i++){
            cout << i<<": ";
            for(int j = 0 ;j < st[i].size(); j++){
                cout << st[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
