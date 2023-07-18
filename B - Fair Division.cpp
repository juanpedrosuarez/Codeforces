#include<bits/stdc++.h>
#define ll  long long
 
using namespace std;
int main(){
    ll t,n,a;
    cin>>t;
    while(t--){
        int div=0,s=0,o=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1){
                o++;
                s++;
            }else
                s +=2;
        }
        if(s % 2 == 0){
            div = s/2;
            if(div % 2 == 0){
                cout<<"YES"<<endl;
            }else{
                if(o){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}
