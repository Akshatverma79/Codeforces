#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string s,p;
        cin>>s>>p;
        int a=0;
        for(int i=0;i<n && a<m;i++){
            if(s[i]==p[a]){
                a++;
            }
        }
        if(a<m){
            cout<<-1<<endl;
        }else{
            int del=n-m;
            int ans=(del+k-1)/k;
            cout<<ans<<endl;
        }
    }
    return 0;
}