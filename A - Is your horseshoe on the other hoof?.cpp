#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int v[1000],s=0;
 
	
	for(int i = 0; i<4; i++){
		cin>>v[i];
		
	}
	sort(v,v+4);
	for(int i = 0; i<4; i++){
		if(v[i]==v[i+1]){
			s++;
		}
		
	}
	cout<<s<<endl;
}
