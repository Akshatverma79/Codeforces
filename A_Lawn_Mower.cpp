#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,w;
        cin>>n>>w;
        long long gro=n/w;
        long long rem=n%w;
        long long ans=gro*(w-1)+min(rem,w-1);
        cout<<ans<<"\n";
    }
    return 0;
}