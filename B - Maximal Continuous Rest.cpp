#include <bits/stdc++.h>
 
using namespace std;
  
void f(){
            
        int n,s=0, maxi=0;
        cin>>n;
        vector<int> v;
        for(int i = 0; i<n; i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        for(int i = 0; i<n; i++){
            v.push_back(v[i]);
        
        }
        for(int i = 0; i<n+n; i++){
            if(v[i]==1){
                s = s+1;
                maxi = max(maxi,s);
            }else{
                s = 0;
            }
        }
        cout<<maxi<<endl;
        
}
int main(){
        
        f();
        
        
    }
