#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long one=0,sum=0,cnt=0,cp=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x==1){
                one++;
            }else{
                sum+=x;
                cnt++;
                cp+=(x-2)/2;
            }
        }
        long long ans;
        if(cnt==0){
            ans=0;
        }else if(cnt==1){
            ans=sum+min(one, sum/2);
        }else{
            ans=sum+min(one,cp);
        }
        cout<<(ans< 3?0:ans)<<endl;
    }
    return 0;
}