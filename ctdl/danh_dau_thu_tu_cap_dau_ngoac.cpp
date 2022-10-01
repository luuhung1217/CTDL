#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        stack<int>st;
        int danhdau=0;
        for( int i = 0 ; i < s.size(); i++){
           if(s[i] == '('){
               danhdau += 1;
               cout <<danhdau<<" ";
               st.push(danhdau);
           } 
            else if(s[i] == ')'){
                cout <<st.top()<<" ";
                st.pop();
            }
        }
        cout<<endl;
    }
}