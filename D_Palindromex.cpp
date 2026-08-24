#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(2*n), L(n,-1), R(n,-1);
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            a[i]--;
            if(L[a[i]]==-1){
                L[a[i]]=i;
            }
            else{
                R[a[i]]=i;
            }
        }
        vector<int>vis(n,0)
    }
}