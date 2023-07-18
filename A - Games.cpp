#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
	int n;
    cin >> n;
    int s=0;
	
    vector<int> h(n), a(n);
	
    for (int i = 0; i<n; i++){
        cin >> h[i] >> a[i];
        for (int j = 0; j<i; j++){
            if (h[i] == a[j]){
                s += 1;
            }
            if (a[i] == h[j]){
                s += 1;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
