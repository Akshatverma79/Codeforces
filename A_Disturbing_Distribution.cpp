#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        long long cst=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>1){
                cst=(cst+(a[i]))%mod;
            }
        }
        if(a[n-1]==1){
            cst=(cst+1)%mod;
        }
        cout<<cst<<endl;
    }
    return 0;
}