#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        stack<int>st;
        for(int i=s.size()-1;i >=0;i--){
            if(s[i] == '+' ||s[i] == '-' ||s[i] == '*' ||s[i] == '/' ){
                long long a =st.top();
                st.pop();
                long long b=st.top();
                st.pop();
                long long tmp=0;
                if(s[i] == '+') tmp=a+b;
                else if(s[i] == '-' ) tmp=a-b;
                else if(s[i] == '*') tmp = a*b;
                else if(s[i] == '/') tmp =a/b;
                st.push(tmp);
            }
            else st.push((long long)(s[i]-'0'));
        }
        cout<<st.top()<<endl;
    }
}