#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	int n,s1=0,s2=0,v;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>v;
        if(v%2==0) s2++;
        else s1++;
    }
    cout<<min(s1, s2);
	
}
 
int main(){
	
	f();
		
}
