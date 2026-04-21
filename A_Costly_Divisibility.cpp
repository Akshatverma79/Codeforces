#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        long long ans=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                ans+=(b[i]-a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}