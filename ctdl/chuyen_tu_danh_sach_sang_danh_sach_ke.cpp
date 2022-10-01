#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<int>st[1000];
    int id=1;
    while(n--){
        char s[100];
        fgets(s,99,stdin);
        s[strlen(s)-1] = '\0';
        char *p;
        p=strtok(s," ");
        while(p != NULL){
            if(id < atoi(p)) st[id].push_back(atoi(p));
            if(p != NULL) p=strtok(NULL," ");
        }
        sort(st[id].begin(),st[id].end());
        id += 1;
    }
    for(int i=1; i <= id;i++){
        for(int j= 0;j < st[i].size();j++){
             cout<< i <<" "<<st[i][j]<<endl;
        } 
    }
}