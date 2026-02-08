#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s ="",x;
        for(int i=0;i<n;i++){
            cin>>x;
            s=min(x+s,s+x);

        }
        cout<<s<<"\n";
    }
    return 0;
}