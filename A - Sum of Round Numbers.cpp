#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int v[100000];
    cin>>t;
   
    for(int i = 0; i<t; i++){
        int s=0,s2=0;
        cin>>n;
        if(n >= 1000){
            s2=n%1000;
            v[s++]=n-s2;
            n%=1000;
        }
        if(n >= 100){
            s2=n%100;
            v[s++]=n-s2;
            n%=100;
        }
        if(n >= 10){
            s2=n%10;
            v[s++]=n-s2;
            n%=10;
        }
        if(n<10 && n>0){
            v[s++]=n;
        }
        vector<int>v2;
        for(int i=0; i<s; i++){
            v2.push_back(v[i]);
        }
        cout<<v2.size()<<endl;
        for(int i=0; i<v2.size(); i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}
