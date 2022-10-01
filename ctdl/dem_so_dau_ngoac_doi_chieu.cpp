#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin >> s;
        stack<char>st;
        for(int i = 0; i< s.size();i++){
            if(s[i] == '(' || s[i] == ')' && st.size() == 0){
                st.push(s[i]);
            }
            else{
                if(st.top() == '(' && st.size() > 0) st.pop();
                else st.push(s[i]);
            }
        }
        int dem1=0,dem2=0;
        while(st.size() > 0){
            if(st.top() == '(') dem1++;
            else dem2++;
            st.pop();
        }
        int res = dem1 / 2 + dem2 / 2 + dem1 % 2 + dem2 % 2;
        cout<<res<<endl; 
    }
}