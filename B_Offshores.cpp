#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x,y;
        cin>>n>>x>>y;
        vector<long long> a(n),con(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            con[i]=(a[i]/x)*y;
            sum+=con[i];
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long long cur=a[i]+(sum-con[i]);
            ans=max(ans,cur);
        }
        cout<<ans<<"\n";
    }
    return 0;
}