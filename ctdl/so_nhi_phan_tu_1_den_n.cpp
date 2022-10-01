#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void kq(int n){
    string s;
    while (n){
        int d = n % 2;
        s += (d + '0');
        n /= 2;
    }
    for (int i=s.size()-1; i >= 0; i--){
        cout << s[i];
    } 
}
int main(){
	int t;
	cin >> t;
	while (t--){
        int n;
        cin >> n;
        for (int i=1; i <= n; i++){
            kq(i);
            cout << " ";
        }
        cout << endl;
	}
	return 0;
}
