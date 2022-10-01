#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin >> n;
        int s[n+1],ans[n+1];
        for(int i=0;i < n ;i++){
            cin >> s[i];
        }
        stack<int>st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= s[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else ans[i] = st.top();
            st.push(s[i]);
        }
        for(int i = 0; i < n ;i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}