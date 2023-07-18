#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int v[n];
    int a=0,b=0;
    int s1=0,s2=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            b++;
            s2=i;
        }else{
            a++;
            s1=i;
        }
    }
    if(a>b){
        cout<<s2;
    }else{
        cout<<s1;
    }
    return 0;
}
