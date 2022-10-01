#include<bits/stdc++.h>
using namespace std;
bool ktra(string s){
    stack<char> st;
    for(int i=0;i < s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            if(s[i] == ')' && st.top() == '(')
                st.pop();
            else if(s[i] == '}' && st.top() == '{')
                st.pop();
            else if(s[i] == ']' && st.top() == '[')
                st.pop();
            else return false;
        }
    }
    if(st.size() == 0){
        return true;
    }
    return false;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(ktra(s)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}