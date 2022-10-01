#include<bits/stdc++.h>
using namespace std;
int ktra(string s){
    stack<char> st;
    int dem=0;
    for(int i=0;i < s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else {
            if(s[i] == ')' && st.top() == '(')
                st.pop();
            else if(s[i] == '}' && st.top() == '{')
                st.pop();
            else if(s[i] == ']' && st.top() == '['){
                st.pop();
                dem++;
            }
                
            
        }
    }
    return dem;
}
int main(){
    string s;
    cin >> s;
    cout <<ktra(s);
}