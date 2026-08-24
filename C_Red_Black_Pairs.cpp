#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int prev2=0;
        int prev=(a[0]!=b[0]);
        for(int i=1;i<n;i++){
            int ver=(a[i]!=b[i]);
            int hor=(a[i-1]!=a[i])+(b[i-1]!=b[i]);
            int cur=min(prev+ver, prev2+hor);
            prev2=prev;
            prev=cur;
        }
        cout<<prev<<endl;
    }
}