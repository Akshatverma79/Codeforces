#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        vector<int>result(n);
        result[n-1]=p[n-1];
        for(int i=n-2;i>=0;i--){
            result[i]=max(result[i+1],p[i]);
        }
        bool solved=false;
        for(int i=0;i<n && !solved;i++){
            if(result[i]>p[i]){
                int need=result[i];
                int position=-1;
                for(int j=n-1;j>i;j--){
                    if(p[j]==need){
                        position=j;
                        break;
                    }
                }
                reverse(p.begin()+i,p.begin()+position+1);
                solved=true;
            }
        }
        for(int x:p)cout<<x<<" ";
        cout<<"\n";
    }
}