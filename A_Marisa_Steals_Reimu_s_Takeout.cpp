#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
         int c[3]={0};
         for(int i=0;i<n;i++){
            cin>>x;
            c[x]++;
         }
         int ans=c[0];
         int pair=min(c[1],c[2]);
         ans+=pair;
         c[1]-=pair;
         c[2]-=pair;
         ans+=c[1]/3 + c[2]/3;
         cout<<ans<<endl;
    }
}