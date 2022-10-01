#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin >> test;
    deque<int>st;
    while(test--){
        string s;
        cin >> s;
        if(s == "PUSHBACK"){
            int a;
            cin >> a;
            st.push_back(a);
        }
        else if(s == "PUSHFRONT"){
            int a;
            cin >> a;
            st.push_front(a);
        }
        else if(s == "POPFRONT" && !st.empty()){
            st.pop_front();
        }
        else if(s == "POPBACK" && !st.empty()){
            st.pop_back();
        }
        else if(s == "PRINTBACK"){
            if(st.empty()){
                cout << "NONE"<<endl;
            }
            else cout << st.back()<<endl;
        }
        else if(s == "PRINTFRONT"){
            if(st.empty()){
                cout << "NONE"<<endl;
            }
            else cout << st.front()<<endl;
        }
    }
}