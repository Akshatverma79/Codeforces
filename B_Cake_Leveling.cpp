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
        long long pr=0;
        long long ans=LLONG_MAX;
        for(int i=0;i<n;i++){
            pr+=a[i];
            long long cur=pr/(i+1);
            ans=min(ans,cur);
            cout<<ans;
            if(i!=n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}