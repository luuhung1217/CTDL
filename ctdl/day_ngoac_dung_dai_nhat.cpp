#include<bits/stdc++.h>
using namespace std;
main(){
    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        stack<int> st;
        st.push(-1);
        int dem = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }else{
                st.pop();
                if(st.size() > 0){
                dem  = maxdem , i - st.top());
                }
                if(st.size() == 0) st.push(i);
            }
        }
        cout <<dem  << endl;
    }
}