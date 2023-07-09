#include <bits/stdc++.h>
 
using namespace std;
 
int n,v[10][10];
 
int main() {
    cin >>n;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (i == 0){
                v[i][j] = 1;
            }else if (j==0){
                v[i][j] = 1;
            }else{
                v[i][j] = v[i-1][j] + v[i][j-1];
            }
        }
    }
    cout << v[n-1][n-1];
}
