#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,h;
        cin>>n>>k>>h;
        long long ans=1e18;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            long long FV=min(a+k,h);
            ans=min(ans,FV);
        }
        cout<<ans<<endl;
    }
    return 0;
}