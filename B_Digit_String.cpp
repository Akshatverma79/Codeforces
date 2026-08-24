#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<int>pref(n+1,0);
        vector<int>suf(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i];
            if(s[i]=='2'){
                pref[i+1]++;
            }
        }
        for(int i=n-1;i>=0;i--){
            suf[i]=suf[i+1];
            if(s[i]=='1' || s[i]=='3'){
                suf[i]++;
            }
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            ans=max(ans, pref[i]+suf[i]);
        }
        cout<<n-ans<<endl;
    }
    return 0;
}