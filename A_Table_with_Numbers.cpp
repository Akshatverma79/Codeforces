#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int mn = min(h, l);
        int mx = max(h, l);

        int A = 0, B = 0, C = 0;
        for(int x : a){
            if(x <= mn) A++;
            else if(x <= l && h < l) B++; 
            else if(x <= h && l < h) C++; 
            else if(h == l && x <= h) A++;
        }

        int pairs = 0;
        int use = min(B, C);
        B -= use; C -= use; pairs += use;
        use = min(B, A);
        B -= use; A -= use; pairs += use;

        use = min(C, A);
        C -= use; A -= use; pairs += use;

        pairs += A / 2;

        cout << pairs << "\n";
    }
    return 0;
}
