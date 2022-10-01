#include<bits/stdc++.h>
using namespace std;
void merge(int s[],int n,int m,int l){
	int i,j,k;
	int n1=m-n+1;
	int n2=l-m;
	int s1[n1],s2[n2];
	for(i=0;i<n1;i++){
		s1[i]=s[n+i];
    }
	for(j=0;j<n2;j++){
		s2[j]=s[m+1+j];
	}
	i=0;
	j=0;
	k=n;
	while(i<n1&&j<n2){
		if(s1[i]<=s2[j]){
			s[k]=s1[i];
			i++;
		}
		else{
			s[k]=s2[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		s[k]=s1[i];
		i++;
		k++;
	}
	while(j<n2){
		s[k]=s2[j];
		j++;
		k++;
	}
}
void mergesort(int s[],int n,int l){
	if(n<l){
		int m=n+(l-n)/2;
		mergesort(s,n,m);
		mergesort(s,m+1,l);
		merge(s,n,m,l);
	}
}

    
	
		

int main(){
	int t;
	cin>>t;
    
	while(t--){
		int n;
		cin>>n;
		int s[10000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		mergesort(s,0,n-1);
		for(int i=0;i<n;i++){
		    cout<<s[i]<<" ";}
        cout<<endl;
	}
    return 0;
    system("pause");
}