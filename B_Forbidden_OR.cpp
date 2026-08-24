#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<long long>s;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            s.insert(a);
        }
        long long ans=1;
        while(s.count(ans)){
            ans*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}