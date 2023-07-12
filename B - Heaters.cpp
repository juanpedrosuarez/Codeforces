#include <bits/stdc++.h>
    
using namespace std;
    
void f(){
        
        int n, r;
        cin >> n >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        int l = -1;
        while (l < n - 1) {
            int j = -1;
            for (int i = n - 1; i > max((int)-1, l - r+1) and j == -1; i--) 
                if (a[i] and i - r <= l) j = i;
            
            
            if (j == -1) {
                cout << -1 << endl;
                return;
            }
            ans++;
            l = j + r - 1;
     
        }
        cout << ans << endl;
        
    }
 
int main(){
        
        f();
        
    }
