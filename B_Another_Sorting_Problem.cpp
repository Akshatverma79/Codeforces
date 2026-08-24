#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long l=1,r=1e18;
        bool ans=true;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                continue;
            }
            l=max(l,a[i]-a[i+1]);
        }
        long long k=l;
        vector<long  long>b=a;
        for(int i=0;i<n-1;i++){
            if(b[i]>b[i+1]){
                b[i+1]+=k;
            }
        }
        for(int i=0;i<n-1;i++){
            if(b[i]>b[i+1]){
                ans=false;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}