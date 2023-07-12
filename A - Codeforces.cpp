#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
        string s1 = "codeforces";
        int n;
        cin>>n;
        
        for(int i = 0; i<n; i++){
                bool b = false;
                char s2;
                cin>>s2;
                for(int i = 0; i<s1.size(); i++){
                        if(s2==s1[i]){
                                cout<<"YES"<<endl;
                                b = true;
                                break;
                        }
                }
                if(b == false) cout<<"NO"<<endl;
        }
        
}
 
int main(){
    
        ios_base::sync_with_stdio(false);cout.tie(NULL);
        cin.tie(NULL);
        f();
 
}
