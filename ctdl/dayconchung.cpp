#include <bits/stdc++.h>
using namespace std;
void findCommon(long long ar1[], long long ar2[],long long ar3[], int n1,int n2, int n3){
    int i = 0, j = 0, k = 0,dem=0;

    while (i < n1 && j < n2 && k < n3) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            cout << ar1[i] << " ";
            dem++;
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j]) 
            i++;
        else if (ar2[j] < ar3[k]) 
            j++;
        else {
            k++;
        }
    }
    if(dem==0){
        cout<<"NO";
    }
}
void nhap(long long s[],int n){
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--){
    	int n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long a[1000000],b[1000000],c[1000000];
		nhap(a,n1);
		nhap(b,n2);
		nhap(c,n3);
    	findCommon(a,b,c, n1, n2, n3);
    	cout<<endl;
	}
	return 0;
}