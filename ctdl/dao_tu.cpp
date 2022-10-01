#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    scanf("\n");
    while(t--){
        char s[200];
        fgets(s, 199, stdin);
        int l = strlen(s);
        s[l - 1] = '\0';
        char *p;
        p = strtok(s, " ");
        stack<string> st;
        while(p != NULL){
            if(p != NULL) st.push(p);
            p = strtok(NULL, " ");
        }
        while(st.size() > 0){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
}