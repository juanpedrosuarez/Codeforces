#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int t,n;
	cin>>t;
	
	for(int i = 0; i<t; i++){
		cin>>n;
		for(int i=1;;i++){
			if(i%3==0 or i%10==3){
				continue;
			}else{
				n--;
				if(n==0){
					cout<<i<<endl;
					break;
				}
			}
		}
		
	
	}
	return 0;
 
}
