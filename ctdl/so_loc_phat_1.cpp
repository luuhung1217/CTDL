#include<bits/stdc++.h>
using namespace std;
long long cmp(long long a, long long b){
    return a > b;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a = 0;
        for(int i = 0; i < n; i++){
            a += pow(2,i);
        }
        vector<long long> res;
        for(int i = 1; i <= a; i++){
            int m = i;
            long long b = 0, c = 0;
            while(m > 0){
                if(m%2){
                    b = b*10 + 6;
                    c = c*10 + 8;
                }else{
                    b = b*10 + 8;
                    c = c*10 + 6;
                }
                m /= 2;
            }
            res.push_back(b);
            res.push_back(c);

        }
        sort(res.begin(), res.end(), cmp);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << ' ';
        }
            
        cout << endl;
    }
}