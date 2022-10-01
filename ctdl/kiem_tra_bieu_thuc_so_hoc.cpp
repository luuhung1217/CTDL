#include<bits/stdc++.h>

using namespace std;
int main (){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        stack<char>st;
        bool check;
        for( int i = 0; i < s.size(); i++){
            if(s[i] == ')'){
                check=true;
                char so=st.top();
                st.pop();
                while(so !='('){
                    if(so == '+'|so == '-'|so == '*'|so == '/') check=false;
                    so = st.top();
                    st.pop();
                }
                if(check == true) break;
            }
            else st.push(s[i]);
        }
        if(check == true) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}