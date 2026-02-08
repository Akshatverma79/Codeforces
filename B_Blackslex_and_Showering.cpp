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
        long long total= 0;
        for(int i=0;i<n-1;i++){
            total+= llabs(a[i]-a[i+1]);
        }
        long long ans= total;
        ans = min(ans, total - llabs(a[0]-a[1]));
        ans = min(ans, total - llabs(a[n-2]-a[n-1]));
        for(int i=1;i<n-1;i++){
            long long curr= total;
            curr-= llabs(a[i]-a[i-1]);
            curr-= llabs(a[i]-a[i+1]);
            curr+= llabs(a[i+1]-a[i-1]);
            ans= min(ans,curr);
        }
        cout<<ans<<endl;
    }
    return 0;
}