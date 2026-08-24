#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long k=y/x;
        if(k==2){
            cout<<"NO"<<endl; 
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}