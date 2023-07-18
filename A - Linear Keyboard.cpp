
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        string s,a;
        cin>>s>>a;
        
        long long int c=0,x=0,y=0;
        for(int i=1;i<a.size();i++){
            x=s.find(a[i]);
            y=s.find(a[i-1]);
            c+= abs(x-y);
        }
        cout<<c<<endl;
        
    }
}
