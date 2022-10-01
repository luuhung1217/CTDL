#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin >> test;
    while(test --){
        int n,cach=0;
        cin >> n;
        queue<int>st;
        while(n--){
            int a;
            cin >> a;
            if(a == 3){
                int b;
                cin >> b;
                st.push(b);
            }
            else if(a == 1){
                cout << st.size()<<endl;
            }
            else if( a == 2){
                if(st.empty()){
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
            else if( a == 4){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if( a == 5){
                if(!st.empty()){
                    cout << st.front() << endl;
                }
                else cout << -1 << endl;
            }
            else if( a == 6){
                if(!st.empty()){
                    cout << st.back() << endl;
                }
                else cout << -1 << endl;
            }
            cach = n;
        }
        if(cach == 3 || cach == 4 ){
            cout << endl;
        }
    }
}