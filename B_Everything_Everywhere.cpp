#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ak(n);
        for(int i=0;i<n;i++){
            cin>>ak[i];
        }
        long long ans=0;
        for(int i=0;i<n-1;i++){
            int a=ak[i];
            int b=ak[i+1];
            int c=abs(a-b);
            if(a%c ==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}