#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin >> test;
    string s;
    queue<int>st;
    while(test--){
        cin >> s;
        
        if(s=="PUSH"){
            int a;
            cin >> a;
            st.push(a);
        }
        else if(s=="PRINTFRONT"){
            if(st.empty()){
                cout << "NONE"<<endl;
            }
            else cout << st.front()<<endl;
        }
        else if(s == "POP"){
            if(!st.empty()){
                st.pop();
            }
        }
    }
}