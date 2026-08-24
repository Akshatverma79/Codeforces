#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long TI=3*a;
        long long ans;
        if(b<TI){
            ans=(n/3)*b;
            int rem=n%3;
            ans+=min(1LL*rem*a,b);
        }else{
            ans=n*a;
        }
        cout<<ans<<endl;
    }
    return 0;
}