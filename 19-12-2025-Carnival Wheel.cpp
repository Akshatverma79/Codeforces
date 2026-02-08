#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int l,a,b;
        cin >> l >> a >> b;
        int g = gcd(l,b);
        int maxPrize = a+g*((l-1-a)/g);
        cout << maxPrize << "\n"; 
    }
    return 0;

}