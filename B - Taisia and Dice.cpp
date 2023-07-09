#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    int n,s,r;
    cin>>n>>s>>r;
    
    cout << s - r << " ";
        for (int i = n - 1; i > 0; i--){
            if (i >= r){
                cout << 1 << " ";
                r--;
            }
            else if (2 * i >= r){
                cout << 2 << " ";
                r-=2;
            }
            else if (3 * i >= r){
                cout << 3 << " ";
                r-=3;
            }
            else if (4 * i >= r){
                cout << 4 << " ";
                r-=4;
            }
            else if (5 * i >= r){
                cout << 5 << " ";
                r-=5;
            }
            else if (6 * i >= r){
                cout << 6 << " ";
                r-=6;
            }
        }
        cout<<endl;
        
}    
 
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
 
    
}
