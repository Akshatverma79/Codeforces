#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        int k;
        cin>>n>>k;
        if(k%2==1){
            for(int i=0;i<k;i++){
                cout<<n<<" ";
            }
        }else{
            for(int i=0;i<k-1;i++){
                cout<<n<<" ";
            }
            cout<<0;
        }
        cout<<"\n";
    }
    return 0;
}