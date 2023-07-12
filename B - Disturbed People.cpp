#include <bits/stdc++.h>
    
using namespace std;
    
void f(){
        
        int n, s=0;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n; i++){
                int a;
                cin>>a;
                v.push_back(a);
        }
        for(int i = 0; i<n-1; i++){
                if(v[i-1]==1 and v[i]==0 and v[i+1]==1){
                      s++;
                      v[i+1]=0;
                }
        }
        cout<<s<<endl;
        
    }
    
int main(){
        
        f();
        
    }
