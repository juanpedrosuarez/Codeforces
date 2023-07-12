#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
    int n,m,a,b;
    cin>>n>>m;
    vector<int>v(m+1);
    for(int i=0 ;i<n ; i++){
        cin>>a>>b;
        for(int j=a; j<=b; j++){
			v[j]=1;
		}
    }
    int s=0;
    for(int i=1 ; i<=m ;i++){
        if(v[i]==0){
			s++;
		}
    }
    cout<<s<<endl;
    for(int  i=1; i<=m;i++){
        if(v[i]==0){
			cout<<i<<" ";
		}
    }
    cout<<endl;
}
 
int main(){
    
    f();
} 
→Judgement P
